/*!
  \file interp.c
  \author Didier Benoit <didier.benoit@inserm.fr>
  \date Thursday 19 July 2018
  \version 1.0
  \brief Structure to perform interpolation
*/

#include <iostream>
#include <cstdlib>

#include "headers/interp.hh"

#define MIN(X,Y) (((X) < (Y)) ? (X) : (Y))
#define MAX(X,Y) (((X) < (Y)) ? (Y) : (X))

Interpolation::Interpolation(double* p_x, double* p_fx, uint32_t* p_n,
  uint32_t m)
: p_x_(p_x),
  p_fx_(p_fx),
  p_n_(p_n),
  m_(m)
{
  // Check values
  if(m < 2 || *p_n < 2 || m > *p_n) {
    std::cerr << "!!! Error in Interpolation constructor" << std::endl;
    std::cerr << "n: " << *p_n << ", m: " << m << std::endl;
    exit(EXIT_FAILURE);
  }
}

Interpolation::~Interpolation()
{
  ;
}

void Interpolation::Print()
{
  for (uint32_t i = 0; i < *p_n_; ++i) {
    std::cout << i << " x: " << p_x_[i] << ", fx: " << p_fx_[i] << std::endl;
  }
}

uint32_t Interpolation::Locate(double const& xi)
{
  // Initialise lower and upper limits
  uint32_t jl = 0;
  uint32_t ju = *p_n_ - 1;
  uint32_t jm = 0; // midpoint

  // Checking order of table
  uint32_t bool_ascnd = ( p_x_[*p_n_-1] >= p_x_[0]);

  while (ju - jl > 1) {
    jm = (ju + jl) >> 1;
    if ( (xi >= p_x_[jm]) == bool_ascnd ) jl = jm;
    else ju = jm;
  }

  return MAX(0, MIN(*p_n_ - m_, jl - ((m_ - 2) >> 1)));
}

double Interpolation::LinearInterp(double const& i)
{
  /* Finding the bin */
  uint32_t const j = Locate(i);

  /* Performing the interpolation */
  if( p_x_[j + 1] == p_x_[j] ) return p_fx_[j];
  else
  {
    return p_fx_[j] + ((i - p_x_[j])
      / (p_x_[j + 1] - p_x_[j]))
      * (p_fx_[j + 1] - p_fx_[j]);
  }
}
