#include "integradedose.h"
#include "interp.hh"
#include <iostream>
#include <getopt.h>
#include <sstream>
#include <fstream>
#include <cstring>
#include <string>
#include <cerrno>
#include <iterator>


double SimpsonMethod(double const* p_a, double const* p_b,
double const* p_fa, double const* p_fb, double const* p_f );

uint32_t GetNumberDosePointFromFile(std::ifstream* p_file);
uint32_t GetNumberOrgansFromFile(std::ifstream* p_file);
void LoadTimeAndActivityFraction(std::ifstream* p_file, double* p_time,double** p_activity_fraction, uint32_t* p_n_organs);
void LoadSADRs(std::ifstream* p_file, double** p_sadrs, uint32_t* p_n_organs_to_study);


integradeDose::integradeDose(QObject *parent) : QObject(parent)
{
    p_time_activity_curves_filename = "/home/afrodith/Error_Software/data/Tc99m_MDP/time_activity_curves_Tc99m_MDP.txt";
    p_sadrs_filename = "/home/afrodith/Error_Software/data/Tc99m_MDP/phantom_001.txt";

}


double SimpsonMethod(double const* p_a, double const* p_b,
  double const* p_fa, double const* p_fb, double const* p_f )
{
  return ((*p_b - *p_a) / 6.0) * (*p_fa + *p_fb + (4.0 * *p_f));
}


uint32_t GetNumberDosePointFromFile(std::ifstream* p_file)
{
  std::string line;
  uint32_t number_line = 0, i = 0;

  // Read file and count number line without comment
  while (std::getline(*p_file, line)) {
    // Find first caracter
    // Loop over the number of the caracters in the line
    for (size_t j = 0; j < line.size(); ++j) {
      if (std::isspace(line[j])) i++;
      else break;
    }

    // Check if the first is a comment
    if (line[i] != '#') number_line++;
    i = 0; // Reinitialize i
  }

  // move file position indicator to beginning
  p_file->clear();
  p_file->seekg(0);

  return number_line;
}


uint32_t GetNumberOrgansFromFile(std::ifstream* p_file)
 {
   std::string line;
   uint32_t number_organs = 0, i = 0;

   // Read file and count number of organs
   while (std::getline(*p_file, line)) {
     // Find first caracter
     // Loop over the number of the caracters in the line
     for (size_t j = 0; j < line.size(); ++j) {
       if (std::isspace(line[j])) i++;
       else break;
     }

     // Check if the first is a comment
     if (line[i] == '#') continue;
     else {
       std::istringstream iss(line);
       number_organs = std::distance(std::istream_iterator<std::string>(iss),
         std::istream_iterator<std::string>());
       break;
     }

     i = 0; // Reinitialize i
   }

   // move file position indicator to beginning
   p_file->clear();
   p_file->seekg(0);

   return number_organs - 1; // Delete time column
 }

 void LoadTimeAndActivityFraction(std::ifstream* p_file, double* p_time,
   double** p_activity_fraction, uint32_t* p_n_organs)
 {
   std::string line;
   uint32_t number_line = 0, i = 0;

   // Read file and count number line without comment
   while (std::getline(*p_file, line)) {
     // Find first caracter
     // Loop over the number of the caracters in the line
     for (size_t j = 0; j < line.size(); ++j) {
       if (std::isspace(line[j])) i++;
       else break;
     }

     // Check if the first is a comment
     if (line[i] == '#') continue;
     else {
       std::istringstream iss(line);
       iss >> p_time[number_line];

       for (uint32_t k = 0; k < *p_n_organs; ++k) {
         iss >> p_activity_fraction[k][number_line];
       }

       number_line++;
     }

     i = 0; // Reinitialize i
   }

   // move file position indicator to beginning
   p_file->clear();
   p_file->seekg(0);
 }

 void LoadSADRs(std::ifstream* p_file, double** p_sadrs,
   uint32_t* p_n_organs_to_study)
 {
   std::string line, ignored_time;
   uint32_t number_line = 0, i = 0;

   // Read file and count number line without comment
   while (std::getline(*p_file, line)) {
     // Find first caracter
     // Loop over the number of the caracters in the line
     for (size_t j = 0; j < line.size(); ++j) {
       if (std::isspace(line[j])) i++;
       else break;
     }

     // Check if the first is a comment
     if (line[i] == '#') continue;
     else {
       std::istringstream iss(line);
       iss >> ignored_time;

       for (uint32_t k = 0; k < *p_n_organs_to_study; ++k) {
         iss >> p_sadrs[k][number_line];
       }

       number_line++;
     }

     i = 0; // Reinitialize i
   }

   // move file position indicator to beginning
   p_file->clear();
   p_file->seekg(0);
 }

 void integradeDose::compute()
 {

     uint32_t n_step;
     double bin_min, bin_medium, bin_max;
     double sadrs_min, sadrs_medium, sadrs_max;
     double act_frac_min, act_frac_medium, act_frac_max;
     double i_simpson = 0.0;
     double total_activity = 110; /* in MBq */
     double step = 0.1; /* the step of integration */
     bool is_verbose = true;
     double total_dose = 0;

     // Declaring all pointers

     // Loop while there is an argument
     int32_t c = 0;


     // Checking the activity
       if (total_activity == 0.0) {
         std::cerr << "Activity has to be set!!!" << std::endl;
         exit(EXIT_FAILURE);
       }

       // Checking the time activity curves file
       if (p_time_activity_curves_filename == nullptr) {
         std::cerr << "A time activity curves file has to be set!!!" << std::endl;
         exit(EXIT_FAILURE);
       }

       // Checking the SADRs file
       if (p_sadrs_filename == nullptr) {
         std::cerr << "A SADRs file has to be set!!!" << std::endl;
         exit(EXIT_FAILURE);
       }


       // Opening the time activity curve file
         std::ifstream p_time_activity_curves_file(p_time_activity_curves_filename);
         if (!p_time_activity_curves_file.is_open()) {
           std::cerr << "Error opening file '" << p_time_activity_curves_filename
             << "': " << strerror(errno) << std::endl;
           exit(EXIT_FAILURE);
         }

         // From the time activity curve file, the number of dose point is deduced
         uint32_t n_dose_points = GetNumberDosePointFromFile(
           &p_time_activity_curves_file);

         // From the time activity curve file, the number of organs is deduced
         uint32_t n_organs = GetNumberOrgansFromFile(&p_time_activity_curves_file);

         // Allocating memory storing time and activity fraction
         double* p_time = new double[n_dose_points];
         double** p_activity_fraction = new double*[n_organs];
         for (uint32_t t = 0; t < n_organs; ++t) {
           p_activity_fraction[t] = new double[n_dose_points];
         }

         // Filling time and activity fraction buffer with the activity curve file
         LoadTimeAndActivityFraction(&p_time_activity_curves_file, p_time,
           p_activity_fraction, &n_organs);


         // Opening the SADRs file
           std::ifstream p_sadrs_file(p_sadrs_filename);
           if (!p_sadrs_file.is_open()) {
             std::cerr << "Error opening file '" << p_sadrs_filename
               << "': " << strerror(errno) << std::endl;
             exit(EXIT_FAILURE);
           }

           // Determine the number of organs to compute the total dose
           uint32_t n_organs_to_study = GetNumberOrgansFromFile(&p_sadrs_file);

           // Allocating memory storing the SADRs for each organ
           double** p_sadrs = new double*[n_organs_to_study];
           for (uint32_t t = 0; t < n_organs_to_study; ++t) {
             p_sadrs[t] = new double[n_dose_points];
           }

           // Filling SADRs values
           LoadSADRs(&p_sadrs_file, p_sadrs, &n_organs_to_study);

           if (is_verbose) {
             std::fprintf(stdout, "----- INFOS -----\n");
              std::fprintf(stdout, "Total Activity:                          %4.2f [MBq]\n",
               total_activity);
              std::fprintf(stdout, "Number of dose points:                   %u\n",
               n_dose_points);
              std::fprintf(stdout, "Number of organs in activity curve:      %u\n",
               n_organs);
              std::fprintf(stdout, "Number of organs to study:               %u\n",
               n_organs_to_study);
              std::fprintf(stdout, "Time (hours):\n");
             for (uint32_t t = 0; t < n_dose_points; ++t) {
                std::fprintf(stdout, "    %4.7f ", p_time[t]);
             }
              std::fprintf(stdout, "\n");
                  std::fprintf(stdout, "Activity Fraction:\n");
                 for (uint32_t i = 0; i < n_organs; ++i) {
                   std:: fprintf(stdout, "    Organ #%u:\n", i);
                   for (uint32_t t = 0; t < n_dose_points; ++t) {
                      std::fprintf(stdout, "        %4.7f ", p_activity_fraction[i][t]);
                   }
                    std::fprintf(stdout, "\n");
                 }
                  std::fprintf(stdout, "SADRs:\n");
                 for (uint32_t i = 0; i < n_organs_to_study; ++i) {
                    std::fprintf(stdout, "    Organ #%u:\n", i);
                   for (uint32_t t = 0; t < n_dose_points; ++t) {
                      std::fprintf(stdout, "        %4.20f\n", p_sadrs[i][t]);
                   }
                    std::fprintf(stdout, "\n");
                 }
                  std::fprintf(stdout, "-----------------\n");
               }


           // Initialize linear interpolation
             Interpolation** p_linear_inter_act_fraction = new Interpolation*[n_organs];
             for (uint32_t t = 0; t < n_organs; ++t) {
               p_linear_inter_act_fraction[t] = new Interpolation(p_time,
                 p_activity_fraction[t], &n_dose_points, 2);
             }

             Interpolation** p_linear_inter_sadrs = new Interpolation*[n_organs_to_study];
             for (uint32_t t = 0; t < n_organs_to_study; ++t) {
               p_linear_inter_sadrs[t] = new Interpolation(p_time,
                 p_sadrs[t], &n_dose_points, 2);
             }

             // Loop over each organs to study
             for (uint32_t t = 0; t < n_organs_to_study; ++t) {
               // Computing the number of steps to perform integration. Integration on the
               // time, so the bound depends on the time
               n_step = ( (p_time[n_dose_points-1] - p_time[0]) / step ) + 1;

               // Loop over the activity organ
               if (is_verbose) {
                 std::fprintf(stdout, "****\n");
               }
               for (uint32_t j = 0; j < n_organs; ++j) {
                 // Loop over the steps
                 for (uint32_t i = 0; i < n_step - 1; ++i) {
                   bin_min = p_time[0] + step * i;
                   bin_medium = p_time[0] + step * (i + 0.5);
                   bin_max = p_time[0] + step * (i + 1);

                   // Computing SADRs in 3 points
                   sadrs_min = p_linear_inter_sadrs[t]->LinearInterp(bin_min);
                   sadrs_medium = p_linear_inter_sadrs[t]->LinearInterp(bin_medium);
                   sadrs_max = p_linear_inter_sadrs[t]->LinearInterp(bin_max);

                   // Computing Activity fraction in 3 points
                          act_frac_min = p_linear_inter_act_fraction[j]->LinearInterp(bin_min);
                          act_frac_medium = p_linear_inter_act_fraction[j]->LinearInterp(
                            bin_medium);
                          act_frac_max = p_linear_inter_act_fraction[j]->LinearInterp(bin_max);

                          // Apply fraction activity
                          sadrs_min *= total_activity * act_frac_min * 3600.0;
                          sadrs_medium *= total_activity * act_frac_medium * 3600.0;
                          sadrs_max *= total_activity * act_frac_max * 3600.0;

                          i_simpson += SimpsonMethod(&bin_min, &bin_max,
                            &sadrs_min, &sadrs_max, &sadrs_medium);
                        }
                        if (is_verbose) {
                         std::fprintf(stdout, "    Intermediate dose in organ #%u: %4.5f [Gy]\n", j,
                            i_simpson);
                        }
                        total_dose += i_simpson;
                        i_simpson = 0.0;
                      }
                      std::fprintf(stdout, "Total dose in organ #%u: %4.5f [Gy]\n", t,
                        total_dose);
                      total_dose = 0;
                    }
             // Closing the time activity curve file
               p_time_activity_curves_file.close();
               p_sadrs_file.close();

               // Freeing memory
               for (uint32_t t = 0; t < n_organs; ++t) {
                 delete p_linear_inter_act_fraction[t];
               }
               for (uint32_t t = 0; t < n_organs_to_study; ++t) {
                 delete p_linear_inter_sadrs[t];
               }
               delete[] p_linear_inter_act_fraction;
               delete[] p_linear_inter_sadrs;
               for (uint32_t t = 0; t < n_organs_to_study; ++t) {
                 delete[] p_sadrs[t];
               }
               delete[] p_sadrs;
               for (uint32_t t = 0; t < n_organs; ++t) {
                 delete[] p_activity_fraction[t];
               }
               delete[] p_activity_fraction;
               delete[] p_time;






 }

