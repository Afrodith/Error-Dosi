
cmake_minimum_required(VERSION 3.1.0)

project(Error-Dosi)

find_package(VTK REQUIRED)
include(${VTK_USE_FILE})

find_package(ITK REQUIRED)
include(${ITK_USE_FILE})


INCLUDE_DIRECTORIES(
  ${CMAKE_CURRENT_BINARY_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}
)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
## Instruct CMake to run moc automatically when needed
set(CMAKE_AUTOMOC ON)
## Create code from a list of Qt designer ui files

set(CMAKE_AUTORCC ON)


#set(CMAKE_AUTOUIC ON)

# Find the QtWidgets library
find_package(Qt5Widgets CONFIG REQUIRED)

# Populate a CMake variable with the sources
# All others sources

set(SOURCES
     sources/Brachytherapy.cpp
     sources/CTDosimetry.cpp
     sources/NMDosimetry.cpp
     sources/integradedose.cpp
     sources/interp.cc
     sources/main.cpp
     sources/mainwindow.cpp
)

set(MOC
    headers/Brachytherapy.h
    headers/CTDosimetry.h
    headers/NMDosimetry.h
    headers/integradedose.h
    headers/interp.hh
    headers/mainwindow.h
    )
set(UI
    forms/Brachytherapy.ui
    forms/CTDosimetry.ui
    forms/NMDosimetry.ui
    forms/mainwindow.ui)
set(RCC resources.qrc )


#file(GLOB_RECURSE vv VV/common/"*.cxx" "*.hxx" "*.cxx")

#file(GLOB_RECURSE vv VV/common/"*.cxx" "*.hxx" "*.h")

#file(GLOB_RECURSE cc VV/common/"*.cxx" "*.hxx" "*.txx")

#file(GLOB_RECURSE tt VV/common/"*.cxx" "*.hxx" "*.hxx")

#file(GLOB_RECURSE tt VV/vv/q_ui/"*.ui" "*.hxx" "*.ui")

#set(vv
#    VV/common/*".cxx"
#    VV/itk/"*.h"
#    VV/itk/"*.cxx"
#    VV/itk/"*.txx"
#    VV/vv/"*.cxx"
#    )

qt5_wrap_cpp(MOC_GENERATED ${MOC})
qt5_wrap_ui(UI_GENERATED ${UI})
qt5_add_resources(RCC_GENERATED ${RCC})

source_group("Form Files" FILES ${UI} )
source_group("Resource Files" FILES ${RCC} )
source_group("VV opensource files" FILES ${vv} )
source_group("Generated Files" FILES ${MOC_GENERATED}   ${UI_GENERATED}  ${RCC_GENERATED} )

add_executable(Error-Dosi
    ${SOURCES}
    ${MOC_GENERATED}   ${UI_GENERATED}  ${RCC_GENERATED} )




include_directories(${QT_USE_FILE})
include_directories(${VTK_USE_FILE})
include_directories(${ITK_USE_FILE})




# Tell CMake to create the helloworld executable
#add_executable(Error-Dosi WIN32 ${SOURCES})
# Use the Widgets module from Qt 5


find_package(Qt5Core)

get_target_property(QtCore_location Qt5::Core LOCATION)

find_package(Qt5Widgets)
get_target_property(QtWidgets_location Qt5::Widgets LOCATION)

find_package(Qt5Network)
get_target_property(QtNetwork_location Qt5::Network LOCATION)

find_package(Qt5Designer)
get_target_property(QtDesigner_location Qt5::Designer LOCATION)

find_package(Qt5PrintSupport)
get_target_property(QtPrintSupport_location Qt5::PrintSupport LOCATION)


find_package(ITK_LIBRARIES)
find_package(VTK_LIBRARIES)

#QT5_WRAP_UI( SAMPLE_UI_HDRS ${SAMPLE_UIS} )

#QT5_WRAP_CPP( SAMPLE_MOC_SRCS ${SOURCES} )

INCLUDE_DIRECTORIES( ${QT_INCLUDE_DIR} ${CMAKE_BINARY_DIR} )

#ADD_EXECUTABLE( Error-Dosi ${SOURCES} )

 #TARGET_LINK_LIBRARIES(Error-Dosi QVTK ${QT_LIBRARIES} )
#target_link_libraries(Error-Dosi ${QT_LIBRARIES} ${VTK_LIBRARIES} )
target_link_libraries(Error-Dosi Qt5::Widgets Qt5::PrintSupport ${VTK_LIBRARIES} ${ITK_LIBRARIES})


if(VTK_VERSION VERSION_GREATER "6.2.0")
set(Error-Dosi ${ITK_LIBRARIES} ${VTK_LIBRARIES})
else()
set(Error-Dosi ${ITK_LIBRARIES} QVTK vtkHybrid)
endif()

foreach(plugin ${Qt5Network_PLUGINS} ${Qt5SQL_PLUGINS} ${Qt5GUI_PLUGINS} ${Qt5Widgets_PLUGINS} ${Qt5PrintSuppport_PLUGINS})
  get_target_property(_loc ${plugin} LOCATION)
  message("Plugin ${plugin} is at location ${_loc}")
endforeach()



#=========================================================
#Add Foundation Libraries (this should be after our libraries, since we depend
#on them)


