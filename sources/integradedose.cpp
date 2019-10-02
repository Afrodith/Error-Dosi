#include "headers/integradedose.h"
#include "headers/interp.hh"
#include <iostream>
#include <getopt.h>
#include <sstream>
#include <fstream>
#include <cstring>
#include <string>
#include <cerrno>
#include <iterator>
#include <QLocale>
#include <QDebug>


double SimpsonMethod(double const* p_a, double const* p_b,
double const* p_fa, double const* p_fb, double const* p_f );

uint32_t GetNumberDosePointFromFile(std::ifstream* p_file);
uint32_t GetNumberOrgansFromFile(std::ifstream* p_file);
void LoadTimeAndActivityFraction(std::ifstream* p_file, double* p_time,double** p_activity_fraction, uint32_t* p_n_organs);

void LoadSADRs(std::ifstream* p_file, double** p_sadrs, uint32_t* p_n_organs_to_study);//polymorphism
void LoadSADRs(std::ifstream* p_file, double* p_sadrs,uint32_t* p_n_organs_to_study);

QVector<std::string> GetOrgansNameFromFile(std::ifstream* p_file);


integradeDose::integradeDose(QObject *parent, int modeDosi) : QObject(parent)
{
  dialog=nullptr;
  total_activity=0.0;
  dosimetry_type=modeDosi;

}

void integradeDose::getFileNames(QString timeActivityCurves,QString matchedPhantom,double activity)
{

    ba = timeActivityCurves.toLocal8Bit();
    ba2= matchedPhantom.toLocal8Bit();
    total_activity = activity;
   // p_time_activity_curves_filename = ba.data();
    //p_sadrs_filename =ba2.data();

}

void integradeDose::getFileNames(QString matchedPhantom)
{


    ba2= matchedPhantom.toLocal8Bit();


}

integradeDose::~integradeDose()
{
     if(dialog!=nullptr)
         delete dialog;

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


QVector<std::string> GetOrgansNameFromFile(std::ifstream* p_file)
{
   std::string line;
   QVector<std::string> name_vector;
   uint32_t number_organs = 0, i = 0;

   // Read file and count number of organs
   while (std::getline(*p_file, line)) {
     // Find first character
     // Loop over the number of the characters in the line
     for (size_t j = 0; j < line.size(); ++j) {
       if (std::isspace(line[j])) i++;
       else break;
     }

     // Check if the first is a comment
     if (line[i] == '#')
     {
         std::istringstream iss(line);
         std::vector<std::string> copy(std::istream_iterator<std::string>{iss},
                                          std::istream_iterator<std::string>());
          for(int i=0;i<copy.size();i++)
          {
              if(i!=0)
              name_vector.push_back(copy.at(i));
          }
          break;
     }
     else {

         continue;
     }

     i = 0; // Reinitialize i
   }

   // move file position indicator to beginning
   p_file->clear();
   p_file->seekg(0);

   return name_vector; // Delete time column
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

 void LoadSADRs(std::ifstream* p_file, double* p_sadrs,
   uint32_t* p_n_organs_to_study)
 {
   std::string line, ignored_time;
   uint32_t  i = 0;

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
         iss >> p_sadrs[k];
       }
     }

     i = 0; // Reinitialize i
   }

   // move file position indicator to beginning
   p_file->clear();
   p_file->seekg(0);
 }

QVector<double> integradeDose::compute(QString fname,QString test)
 {




     bool is_verbose = true;


     auto path = QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation);


#ifdef Q_OS_LINUX
     //linux code goes here
     path =path.append("/Error-Dosi_Documents/Exports/NMDosimetry");
     QDir d(path);

     if(!d.exists())
     {
         d.mkpath(".");
     }
#elif defined(Q_OS_WIN32)
     // windows code goes here
      path.push_back("\\Error-Dosi_Documents\\Exports");
      QDir d(path);
     if(!d.exists())
     {
         d.mkpath(".");
     }
#else

#endif

     QString  filename = d.path()+"/"+fname;

     auto* editor = new QTextEdit;
     auto* doc = new QTextDocument(editor);
     QString html_script;
     QTextCursor cursor(doc);

     if (is_verbose&&!filename.isEmpty()) {



             uint32_t n_step;
             double bin_min, bin_medium, bin_max;
             double sadrs_min, sadrs_medium, sadrs_max;
             double act_frac_min, act_frac_medium, act_frac_max;
             double i_simpson = 0.0; /* in MBq */
             double step = 0.1; /* the step of integration */
             double total_dose = 0;
             QVector<double> exportedDoses;


             // Declaring all pointers

             // Loop while there is an ardouble total_activity = 110;gument
             int32_t c = 0;


             // Checking the activity
             if (total_activity == 0.0) {
                 std::cerr << "Activity has to be set!!!" << std::endl;
                 //exit(EXIT_FAILURE);
             }

             // Checking the time activity curves file
             if (ba.data() == nullptr) {
                 std::cerr << "A time activity curves file has to be set!!!" << std::endl;
                 //exit(EXIT_FAILURE);
             }

             // Checking the SADRs file
             if (ba2.data() == nullptr) {
                 std::cerr << "A SADRs file has to be set!!!" << std::endl;
                 //exit(EXIT_FAILURE);
             }


             // Opening the time activity curve file
             std::ifstream p_time_activity_curves_file(ba.data());
             if (!p_time_activity_curves_file.is_open()) {
                 std::cerr << "Error opening file '" << ba.data()
                           << "': " << strerror(errno) << std::endl;
                 // exit(EXIT_FAILURE);
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
             std::ifstream p_sadrs_file(ba2.data());
             if (!p_sadrs_file.is_open()) {
                 std::cerr << "Error opening file '" << ba2.data()
                           << "': " << strerror(errno) << std::endl;
                 exit(EXIT_FAILURE);
             }

             // Determine the number of organs to compute the total dose
             uint32_t n_organs_to_study = GetNumberOrgansFromFile(&p_sadrs_file);

             QVector<std::string> OrganNames = GetOrgansNameFromFile(&p_sadrs_file);

             // Allocating memory storing the SADRs for each organ
             double** p_sadrs = new double*[n_organs_to_study];
             for (uint32_t t = 0; t < n_organs_to_study; ++t) {
                 p_sadrs[t] = new double[n_dose_points];
             }

             // Filling SADRs values
             LoadSADRs(&p_sadrs_file, p_sadrs, &n_organs_to_study);




             // QByteArray pdfContents;
             //QBuffer buffer(&pdfContents);
             //buffer.open(QIODevice::WriteOnly);
             QTextStream data_stream(&html_script);
             data_stream.flush();
             QDateTime date = QDateTime::currentDateTime();
             QLocale locale  = QLocale(QLocale::English ,QLocale::Greece); // set the locale you want here
             QString swedishDate = locale.toString(date, "dddd, d MMMM yyyy hh:mm:ss ");

             data_stream << "<p><img src=':/icons/icons/error.jpg' alt ='Logo' border=='3'/></p>";
             data_stream <<"<pre>\n\n\n\n\n " + swedishDate + "</pre>";
             data_stream <<  "<center><pre>\n\n\n<b>Organ Dosimetry Report</b>\n\n\n</pre></center>";

             QByteArray arr =filename.toLocal8Bit();

             data_stream << "<pre>\n\n\n<u> Dose export information for " << test <<" :</u>\n\n\n</pre>";// << "<br>";



             data_stream << "<pre>Total Activity: "<< total_activity <<"  MBq\n\n</pre>";// << "<br>";


             data_stream << "<pre>Number of dose points: "<< n_dose_points << " \n\n</pre>";// << "<br>";

             data_stream << "<pre>Number of organs in activity curve: "<< n_organs << " \n\n</pre>";// << "<br>" ;



             data_stream << "<pre>Number of organs to study: " << n_organs_to_study << " \n\n</pre>";//  "<br>" ;


             data_stream << "<pre>Time (hours):\n ";// << "<br>";
             for (uint32_t t = 0; t < n_dose_points; ++t) {
                 data_stream << "    " << p_time[t] << " ";
                 if(t==n_dose_points-1)
                     data_stream << "\n\n";

             }

             data_stream << " </pre>\n\n\n\n";


             data_stream << "<pre>\n\nActivity Fraction:   \n</pre>";// << "<br>";
             data_stream.setRealNumberNotation(QTextStream::FixedNotation);

             for (uint32_t i = 0; i < n_organs; ++i) {

                 if(i<OrganNames.count()){

                     std::string str = OrganNames[i];
                     char cstr[str.size()+1];
                     str.copy(cstr, str.size() + 1);
                     cstr[str.size()] = '\0';


                     data_stream << "<pre>  "<< cstr << ":\n";// << "<br>";
                     for (uint32_t t = 0; t < n_dose_points; ++t) {
                         data_stream << "     " << p_activity_fraction[i][t] << "  ";
                     }
                     data_stream << " \n</pre>";
                 }
             }

             data_stream << "\n\n</pre>";

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
                     data_stream << "<pre>\n\n</pre>";// << "<br>";
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

                     total_dose += i_simpson;
                     i_simpson = 0.0;
                 }

                 if(t<OrganNames.count())
                 {
                     std::string str = OrganNames[t];
                     char cstr[str.size()+1];
                     str.copy(cstr, str.size() + 1);
                     cstr[str.size()] = '\0';
                     if(t==0)
                         data_stream << "<pre>\n\n\n<u> Doses :<u>\n</pre>";// << "<br>";
                     exportedDoses.push_back(total_dose);
                     data_stream << "<pre>\nTotal dose in " << cstr << " "  << "  : "  << total_dose << "[Gy]\n</pre>";// << "<br>";
                 }
                 else {
                     data_stream << "<pre>\nTotal dose in organ " << t <<  "  : "  << total_dose << "[Gy]\n</pre>";// << "<br>";
                 }
                 total_dose = 0;

             }

             for (uint32_t t = 0; t < n_organs; ++t) {
                 delete p_linear_inter_act_fraction[t];
             }
             for (uint32_t t = 0; t < n_organs_to_study; ++t) {
                 delete p_linear_inter_sadrs[t];
             }
             delete[] p_linear_inter_act_fraction;
             delete[] p_linear_inter_sadrs;


             // Closing the time activity curve file
             p_time_activity_curves_file.close();
             p_sadrs_file.close();


             // Freeing memory

             for (uint32_t t = 0; t < n_organs_to_study; ++t) {
                 delete[] p_sadrs[t];
             }
             delete[] p_sadrs;
             for (uint32_t t = 0; t < n_organs; ++t) {
                 delete[] p_activity_fraction[t];
             }
             delete[] p_activity_fraction;
             delete[] p_time;


             //////////////////// html structure of the document








             editor->setDocumentTitle("Organ Dosimetry Report");





             QString css =  "table,td{border:1px solid black; border-right:1px solid Tomato;"
                            "border-colapse: colapse;}";



             cursor.insertBlock();

             cursor.insertHtml(html_script);


#ifdef QT5
             QPalette palette;
             palette.setBrush(editor->backgroundRole(), QBrush(pixmap));
             editor->setPalette(palette);
#else
             //editor->setP(pixmap);
#endif
             doc->setDefaultStyleSheet(css);
             editor->setDocument(doc);			   /// save te document in pdf format

             QPrinter printer(QPrinter::HighResolution);
             printer.setPageSize(QPrinter::A4);

             if(!filename.contains(".pdf"))
                 filename.append(".pdf");

             printer.setOutputFileName(filename);
             doc->print(&printer);

             QDesktopServices::openUrl(QUrl::fromLocalFile(filename));		// dipslay the pdf report

          return exportedDoses;






     }




 }



QVector<double> integradeDose::compute(QString fname,QString manuf,QString protocol, int mAS, int CDTIVol, int energy)
 {




     bool is_verbose = true;


     auto path = QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation);


#ifdef Q_OS_LINUX
     //linux code goes here
     path =path.append("/Error-Dosi_Documents/Exports/CTDosimetry");
     QDir d(path);

     if(!d.exists())
     {
         d.mkpath(".");
     }
#elif defined(Q_OS_WIN32)
     // windows code goes here
      path.push_back("\\Error-Dosi_Documents\\Exports");
      QDir d(path);
     if(!d.exists())
     {
         d.mkpath(".");
     }
#else

#endif

     QString  filename = d.path()+"/"+fname;

     auto* editor = new QTextEdit;
     auto* doc = new QTextDocument(editor);
     QString html_script;
     QTextCursor cursor(doc);

     if (is_verbose&&!filename.isEmpty()) {

             double total_dose = 0;
             QVector<double> exportedDoses;

             int32_t c = 0;


             // Checking the SADRs file
             if (ba2.data() == nullptr) {
                 std::cerr << "A SADRs file has to be set!!!" << std::endl;
                 exit(EXIT_FAILURE);
             }


             // Opening the SADRs file
             std::ifstream p_sadrs_file(ba2.data());
             if (!p_sadrs_file.is_open()) {
                 std::cerr << "Error opening file '" << ba2.data()
                           << "': " << strerror(errno) << std::endl;

             }

             // Determine the number of organs to compute the total dose
             uint32_t n_organs_to_study = GetNumberOrgansFromFile(&p_sadrs_file);

             QVector<std::string> OrganNames = GetOrgansNameFromFile(&p_sadrs_file);

             // Allocating memory storing the SADRs for each organ
             double* p_sadrs = new double[n_organs_to_study];


             // Filling SADRs values
             LoadSADRs(&p_sadrs_file, p_sadrs, &n_organs_to_study);




             // QByteArray pdfContents;
             //QBuffer buffer(&pdfContents);
             //buffer.open(QIODevice::WriteOnly);
             QTextStream data_stream(&html_script);
             data_stream.flush();
             QDateTime date = QDateTime::currentDateTime();
             QLocale locale  = QLocale(QLocale::English ,QLocale::Greece); // set the locale you want here
             QString swedishDate = locale.toString(date, "dddd, d MMMM yyyy hh:mm:ss ");

             data_stream << "<p><img src=':/icons/icons/error.jpg' alt ='Logo' border=='3'/></p>";
             data_stream <<"<pre>\n\n\n\n\n " + swedishDate + "</pre>";
             data_stream <<  "<center><pre>\n\n\n<b>Organ CT Dosimetry Report</b>\n\n\n</pre></center>";

             QByteArray arr =filename.toLocal8Bit();

             data_stream << "<pre>\n\n\n<u> Dose export information :</u>\n\n\n</pre>";// << "<br>";



             data_stream << "<pre>Scanner Manufacturer: "<< manuf <<" \n\n</pre>";// << "<br>";


             data_stream << "<pre>Protocol: "<< protocol << " \n\n</pre>";// << "<br>";

             data_stream << "<pre>Total Energy: "<< energy << " kVp\n\n</pre>";// << "<br>" ;

             data_stream << "<pre>mAs: "<< mAS << " \n\n</pre>";// << "<br>" ;


             data_stream << "<pre>CTDIvol: "<< CDTIVol << " mGy\n\n</pre>";// << "<br>" ;

             data_stream << "<pre>Number of organs to study: " << n_organs_to_study << " \n\n</pre>";//  "<br>" ;



             data_stream.setRealNumberNotation(QTextStream::FixedNotation);



             data_stream << "\n\n</pre>";



             // Loop over each organs to study
             for (uint32_t t = 0; t < n_organs_to_study; ++t) {


                 total_dose = p_sadrs[t]*mAS/(CDTIVol*1000);
                 if(t<OrganNames.count())
                 {
                     std::string str = OrganNames[t];
                     char cstr[str.size()+1];
                     str.copy(cstr, str.size() + 1);
                     cstr[str.size()] = '\0';
                     if(t==0)
                         data_stream << "<pre>\n\n\n<u> Doses :<u>\n</pre>";// << "<br>";
                     exportedDoses.push_back(total_dose);
                     data_stream << "<pre>\nTotal dose in " << cstr << " "  << "  : "  << total_dose << "[Gy]\n</pre>";// << "<br>";
                 }
                 else {
                     data_stream << "<pre>\nTotal dose in organ " << t <<  "  : "  << total_dose << "[Gy]\n</pre>";// << "<br>";
                 }
                 total_dose = 0;

             }




             p_sadrs_file.close();





             //////////////////// html structure of the document








             editor->setDocumentTitle("Organ Dosimetry Report");





             QString css =  "table,td{border:1px solid black; border-right:1px solid Tomato;"
                            "border-colapse: colapse;}";



             cursor.insertBlock();

             cursor.insertHtml(html_script);


#ifdef QT5
             QPalette palette;
             palette.setBrush(editor->backgroundRole(), QBrush(pixmap));
             editor->setPalette(palette);
#else
             //editor->setP(pixmap);
#endif
             doc->setDefaultStyleSheet(css);
             editor->setDocument(doc);			   /// save te document in pdf format

             QPrinter printer(QPrinter::HighResolution);
             printer.setPageSize(QPrinter::A4);

             if(!filename.contains(".pdf"))
                 filename.append(".pdf");

             printer.setOutputFileName(filename);
             doc->print(&printer);

             QDesktopServices::openUrl(QUrl::fromLocalFile(filename));		// dipslay the pdf report

          return exportedDoses;






     }




 }

