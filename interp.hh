#ifndef GUARD_INTERP_HH
#define GUARD_INTERP_HH

/*!
  \file interp.hh
  \author Didier Benoit <didier.benoit@inserm.fr>
  \date Thursday 19 July 2018
  \version 1.0
  \brief Structure to perform interpolation
*/

#include <cstdint>

/*!
  \class Interpolation
  \brief Interpolation class
*/
class Interpolation
{
  public:
    Interpolation(double* p_x, double* p_fx, uint32_t* p_n, uint32_t m);
    ~Interpolation();

  public:
    // Not copyable
    Interpolation(Interpolation const&) = delete;
    Interpolation& operator=(Interpolation const&) = delete;

  public:
    void Print();
    double LinearInterp(double const& i);

  private:
    uint32_t Locate(double const& xi);

  private:
    double * p_x_; /*!< List of the x values */
    double * p_fx_; /*!< List of the f(x) values */
    uint32_t * p_n_; /*!< Number of the values in x and f(x) */
    uint32_t m_; /*!< Number of the points to interpolate */
};

#endif
