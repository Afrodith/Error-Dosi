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

#ifndef clitk_configuration_h
#define clitk_configuration_h
//This file is interpreted by cmake, to define macros based on the cmake configuration options
//

#define CLITK_EXPERIMENTAL 0
#define CLITK_MEMORY_INFO 0
#define CLITK_PRIVATE_FEATURES 0
#define CLITK_USE_SYSTEM_GDCM 0
#define CLITK_USE_PACS_CONNECTION 0

// Global environment variables
#define OS_NAME "Linux-4.18.0-20-generic"
#define ARCHITECTURE "x86_64"

#endif
