/*=========================================================================
  Program:   vv                     http://www.creatis.insa-lyon.fr/rio/vv

  Authors belong to:
  - University of LYON              http://www.universite-lyon.fr/
  - Léon Bérard cancer center       http://www.centreleonberard.fr
  - CREATIS CNRS laboratory         http://www.creatis.insa-lyon.fr

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.  See the copyright notices for more information.

  It is distributed under dual licence

  - BSD        See included LICENSE.txt file
  - CeCILL-B   http://www.cecill.info/licences/Licence_CeCILL-B_V1-en.html
===========================================================================**/
#ifndef clitkDicomRTDoseIOFactory_cxx
#define clitkDicomRTDoseIOFactory_cxx

#include "VV/common/clitkDicomRTDoseIOFactory.h"

//====================================================================
clitk::DicomRTDoseIOFactory::DicomRTDoseIOFactory()
{
  this->RegisterOverride("itkImageIOBase",
                         "DicomRTDoseIO",
                         "Dicom RT dose IO",
                         1,
                         itk::CreateObjectFunction<DicomRTDoseIO>::New());
}


#endif /* end #define clitkDicomRTDoseIOFactory_cxx */

