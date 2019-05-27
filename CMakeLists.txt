cmake_minimum_required(VERSION 2.4)

#=========================================================
# To avoid warning with some version
if(COMMAND cmake_policy)
  cmake_policy(SET CMP0003 NEW)
  cmake_policy(SET CMP0007 NEW)
endif(COMMAND cmake_policy)
#=========================================================
OPTION(CLITK_USE_PACS_CONNECTION "USE PACS CONNECTION"       OFF)
#=========================================================

# Look for OpenGL2 version
if (VTK_RENDERING_BACKEND STREQUAL "OpenGL2")
  add_definitions(-DVTK_OPENGL2)
endif ()

set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -std=c++0x")

#=========================================================
# List of vv source files



# All others sources
set(SOURCES
     Brachytherapy.cpp 
     CTDosimetry.cpp 
     NMDosimetry.cpp 
     integradedose.cpp 
     interp.cc 
     main.cpp
     mainwindow.cpp 
)

include(.)

set(FORMS
     Brachytherapy.ui 
     CTDosimetry.ui 
     NMDosimetry.ui
     mainwindow.ui 
)


#=========================================================
# Qt related commands
if(vv_QT_VERSION VERSION_GREATER "4")
  find_package(Qt5Widgets REQUIRED)
  find_package(Qt5Network REQUIRED)
  find_package(Qt5Designer REQUIRED)
else()
  find_package(Qt4 REQUIRED)
endif()

if(vv_QT_VERSION VERSION_GREATER "4")
  link_directories(${QT5Widgets_LIBRARIES})
  link_directories(${QT5Network_LIBRARIES})
  link_directories(${QT5Designer_LIBRARIES})
else()
  link_directories(${QT_LIBRARY_DIR})
endif()




  #Special case for Main Window with QVTKWidget according VTK version
  foreach(tool ${vv_TOOLS_VTK7} ${vv_COMMON_WITH_UI_VTK7})
      set(vv_SRCS ${vv_SRCS} ${tool}.cxx)
      if(VTK_VERSION VERSION_GREATER "8.0.0")
        if(vv_QT_VERSION VERSION_GREATER "4")
          QT5_WRAP_CPP(vv_SRCS ${tool}.h)
          QT5_WRAP_UI(vv_UI_CXX qt_ui/${tool}.ui)
        else()
          QT4_WRAP_CPP(vv_SRCS ${tool}.h)
          QT4_WRAP_UI(vv_UI_CXX qt_ui/${tool}.ui)
        endif()
      else()
        if(vv_QT_VERSION VERSION_GREATER "4")
          QT5_WRAP_CPP(vv_SRCS ${tool}.h)
          QT5_WRAP_UI(vv_UI_CXX qt_ui/${tool}VTK7.ui)
        else()
          QT4_WRAP_CPP(vv_SRCS ${tool}.h)
          QT4_WRAP_UI(vv_UI_CXX qt_ui/${tool}VTK7.ui)
        endif()
      endif()
  endforeach(tool)
  

  
  # if Windows and Qt was built as a static lib then don't set QT_DLL flag
  set(QT_STATIC 0)
  if(WIN32)
    if(vv_QT_VERSION VERSION_GREATER "4")
      if(EXISTS ${Qt5Widgets_LIBRARIES}/QtCore.prl)
        file(READ ${Qt5Widgets_LIBRARIES}/QtCore.prl QT_CORE_PRL)
        if(${QT_CORE_PRL} MATCHES "static")
          set(QT_STATIC 1)
        endif(${QT_CORE_PRL} MATCHES "static")
      endif(EXISTS ${Qt5Widgets_LIBRARIES}/QtCore.prl)
    else()
      if(EXISTS ${QT_LIBRARY_DIR}/QtCore.prl)
        file(READ ${QT_LIBRARY_DIR}/QtCore.prl QT_CORE_PRL)
        if(${QT_CORE_PRL} MATCHES "static")
          set(QT_STATIC 1)
        endif(${QT_CORE_PRL} MATCHES "static")
      endif(EXISTS ${QT_LIBRARY_DIR}/QtCore.prl)
    endif()
  endif(WIN32)
  if(NOT QT_STATIC)
    add_definitions(-DQT_DLL)
  endif(NOT QT_STATIC)

  add_definitions(-DQT_THREAD_SUPPORT)
  if(vv_QT_VERSION VERSION_GREATER "4")
    include_directories(
      ${Qt5Widgets_INCLUDE_DIRS}
      ${Qt5Gui_INCLUDE_DIRS}
      ${Qt5Core_INCLUDE_DIRS}
      ${Qt5Network_INCLUDE_DIRS}
      ${Qt5Designer_INCLUDE_DIRS}
      ${CMAKE_CURRENT_BINARY_DIR}
      ${CMAKE_CURRENT_SOURCE_DIR}
    )
  else()
    include_directories(
      ${QT_INCLUDES}
      ${QT_INCLUDE_DIR}
      ${QT_QTGUI_INCLUDE_DIR}
      ${QT_QTCORE_INCLUDE_DIR}
      ${CMAKE_CURRENT_BINARY_DIR}
      ${CMAKE_CURRENT_SOURCE_DIR}
    )
  endif()
#=========================================================

#=========================================================
#support for parallel deformable registration with OpenMP
if(NOT APPLE)
if(CMAKE_COMPILER_IS_GNUCC)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fopenmp")
endif(CMAKE_COMPILER_IS_GNUCC)
endif(NOT APPLE)
#=========================================================

#=========================================================


#=========================================================
#Add each tool's dependencies
foreach(tool ${vv_TOOLS} ${vv_TOOLS_VTK7})
  set(toolLibs ${toolLibs} ${${tool}_LIBS})
endforeach(tool)

#=========================================================
#Add Foundation Libraries (this should be after our libraries, since we depend
#on them)
if(VTK_VERSION VERSION_GREATER "6.2.0")
set(foundationLibraries clitkCommon ${ITK_LIBRARIES} ${VTK_LIBRARIES})
else()
set(foundationLibraries clitkCommon ${ITK_LIBRARIES} QVTK vtkHybrid)
endif()

#=========================================================
# Use CxImage to create animated gifs

#=========================================================

#-----------------------------------------------------------------------------
# Avoid linker bug in Mac OS 10.5
# See http://wiki.finkproject.org/index.php/Fink:Packaging:Preparing_for_10.5#OpenGL_Bug
#
if(APPLE)
  find_library(CoreFoundation_LIBRARY CoreFoundation REQUIRED)
  find_library(ApplicationServices_LIBRARY ApplicationServices REQUIRED)
  find_library(SystemConfiguration_LIBRARY SystemConfiguration REQUIRED)
  find_library(Security_LIBRARY Security REQUIRED)
  set(APPLE_FRAMEWORKS ${CoreFoundation_LIBRARY}
    ${ApplicationServices_LIBRARY}
    ${SystemConfiguration_LIBRARY}
    ${Security_LIBRARY}
    )
  message(STATUS "===== ${APPLE_FRAMEWORKS}")
endif()
#=========================================================
#Create binary and libs for tests
if(vv_QT_VERSION VERSION_GREATER "4")
set(Error_DosiExternalLibs ${foundationLibraries} Qt5::Widgets Qt5::Network Qt5::Designer ${APPLE_FRAMEWORKS})
else()
set(Error_DosiExternalLibs ${foundationLibraries} ${QT_LIBRARIES} ${APPLE_FRAMEWORKS})
endif()
# QtNetwork is required by vvRegisterForm ${QT_QTNETWORK_LIBRARY}

#-----------------------------------------------------------------------------
# For retina displays, see
# http://public.kitware.com/pipermail/vtkusers/2015-February/090117.html
if(APPLE)
  set(vv_SRCS ${vv_SRCS} vvOSXHelper.mm)
endif()


target_link_libraries(Error_DosiLib ${Error_DosiExternalLibs})

if(WIN32)
  add_executable(Error-Dosi WIN32 Error-Dosi.cpp Error-Dosi_Icon.rc)
else(WIN32)
  add_executable(Error-Dosi Error-Dosi.cpp)
endif(WIN32)

target_link_libraries(Error-Dosi Error-Dosi_Lib)

#=========================================================
# Install options (also used by CPack)
install(TARGETS Error-Dosi DESTINATION bin PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE)

#=========================================================

#=========================================================
# CPack options
set(CPACK_PACKAGE_NAME "Error-Dosi")
set(CPACK_SOURCE_PACKAGE_FILE_NAME "Error-Dosi-src")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Error-Dosi, Error-Dosi : the new tool for dosimetry !")
set(CPACK_PACKAGE_VENDOR "Bioemtech")
set(CPACK_PACKAGE_DESCRIPTION_FILE "${CMAKE_CURRENT_SOURCE_DIR}/ReadMe.txt")
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/License.txt")
set(CPACK_PACKAGE_VERSION_MAJOR "1")
set(CPACK_PACKAGE_VERSION_MINOR "3")
set(CPACK_PACKAGE_VERSION_PATCH "0")
if(NIGHTLY)
  set(CPACK_PACKAGE_INSTALL_DIRECTORY "Error-Dosi-nightly")
else(NIGHTLY)
  set(CPACK_PACKAGE_INSTALL_DIRECTORY "Error-Dosi")
endif(NIGHTLY)
set(CPACK_STRIP_FILES TRUE)

if(WIN32)
  # There is a bug in NSI that does not handle full unix paths properly. Make
  # sure there is at least one set of four (4) backlasshes.
  set(CPACK_NSIS_MUI_ICON "${CMAKE_CURRENT_SOURCE_DIR}\\\\icons\\\\error.ico")
  set(CPACK_NSIS_INSTALLED_ICON_NAME "Error-Dosi.exe")
if(NIGHTLY)
  set(CPACK_NSIS_DISPLAY_NAME "Error-Dosi - Dosimetry Tool (nightly)")
else(NIGHTLY)
  set(CPACK_NSIS_DISPLAY_NAME "Error-Dosi - Dosimetry Tool")
endif(NIGHTLY)
  set(CPACK_NSIS_HELP_LINK "http://www.creatis.insa-lyon.fr/rio/vv")
  set(CPACK_NSIS_URL_INFO_ABOUT "http://www.creatis.insa-lyon.fr/rio")
  set(CPACK_NSIS_CONTACT "vv@creatis.insa-lyon.fr")
  set(CPACK_NSIS_CREATE_ICONS_EXTRA "CreateShortCut \\\"$SMPROGRAMS\\\\$STARTMENU_FOLDER\\\\Error-Dosi.lnk\\\" \\\"$INSTDIR\\\\bin\\\\Error-Dosi.exe\\\" ")
  set(CPACK_NSIS_DELETE_ICONS_EXTRA "Delete \\\"$SMPROGRAMS\\\\$MUI_TEMP\\\\Error-Dosi.lnk\\\" ")
  #set(CPACK_NSIS_MODIFY_PATH ON) SR: buggy, wait for cmake updates for a fix
  #set(CPACK_BINARY_ZIP ON)
else(WIN32)
  set(CPACK_GENERATOR "STGZ")
  set(CPACK_SOURCE_GENERATOR "TGZ")
endif(WIN32)
include(CPack)
#=========================================================
#=========================================================
configure_file(vvConfiguration.h.in vvConfiguration.h)
#=========================================================

