# Install script for directory: /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/dune/app/users/soughton/larsoft_v06_43_00/localProducts_larsoft_v06_43_00_debug_e14")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_Geometry.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_Geometry.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_Geometry.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib" TYPE SHARED_LIBRARY FILES "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/lib/libdune_Geometry.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_Geometry.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_Geometry.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_Geometry.so"
         OLD_RPATH "/cvmfs/fermilab.opensciencegrid.org/products/larsoft/larcorealg/v1_05_00/slf6.x86_64.e14.debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/messagefacility/v2_00_02/slf6.x86_64.e14.debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cetlib/v3_00_01/slf6.x86_64.e14.debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cetlib_except/v1_01_02/slf6.x86_64.e14.debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/fhiclcpp/v4_05_01/slf6.x86_64.e14.debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/root/v6_08_06g/Linux64bit+2.6-2.12-e14-nu-debug/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_Geometry.so")
    endif()
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libDUNEGeometryHelper_service.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libDUNEGeometryHelper_service.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libDUNEGeometryHelper_service.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib" TYPE SHARED_LIBRARY FILES "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/lib/libDUNEGeometryHelper_service.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libDUNEGeometryHelper_service.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libDUNEGeometryHelper_service.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libDUNEGeometryHelper_service.so"
         OLD_RPATH "/cvmfs/fermilab.opensciencegrid.org/products/larsoft/art/v2_07_03/slf6.x86_64.e14.nu.debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/canvas/v2_00_02/slf6.x86_64.e14.nu.debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/fhiclcpp/v4_05_01/slf6.x86_64.e14.debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cetlib/v3_00_01/slf6.x86_64.e14.debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cetlib_except/v1_01_02/slf6.x86_64.e14.debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/boost/v1_63_0b/Linux64bit+2.6-2.12-e14-debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/larcorealg/v1_05_00/slf6.x86_64.e14.debug/lib:/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/messagefacility/v2_00_02/slf6.x86_64.e14.debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/root/v6_08_06g/Linux64bit+2.6-2.12-e14-nu-debug/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libDUNEGeometryHelper_service.so")
    endif()
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libCheckGeometry_module.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libCheckGeometry_module.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libCheckGeometry_module.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib" TYPE SHARED_LIBRARY FILES "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/lib/libCheckGeometry_module.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libCheckGeometry_module.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libCheckGeometry_module.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libCheckGeometry_module.so"
         OLD_RPATH "/cvmfs/fermilab.opensciencegrid.org/products/larsoft/art/v2_07_03/slf6.x86_64.e14.nu.debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/canvas/v2_00_02/slf6.x86_64.e14.nu.debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/fhiclcpp/v4_05_01/slf6.x86_64.e14.debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cetlib/v3_00_01/slf6.x86_64.e14.debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cetlib_except/v1_01_02/slf6.x86_64.e14.debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/root/v6_08_06g/Linux64bit+2.6-2.12-e14-nu-debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/boost/v1_63_0b/Linux64bit+2.6-2.12-e14-debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/larcorealg/v1_05_00/slf6.x86_64.e14.debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/larcore/v06_13_00/slf6.x86_64.e14.debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/messagefacility/v2_00_02/slf6.x86_64.e14.debug/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libCheckGeometry_module.so")
    endif()
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libCheckDPhaseGeometry_module.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libCheckDPhaseGeometry_module.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libCheckDPhaseGeometry_module.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib" TYPE SHARED_LIBRARY FILES "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/lib/libCheckDPhaseGeometry_module.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libCheckDPhaseGeometry_module.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libCheckDPhaseGeometry_module.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libCheckDPhaseGeometry_module.so"
         OLD_RPATH "/cvmfs/fermilab.opensciencegrid.org/products/larsoft/art/v2_07_03/slf6.x86_64.e14.nu.debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/canvas/v2_00_02/slf6.x86_64.e14.nu.debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/fhiclcpp/v4_05_01/slf6.x86_64.e14.debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cetlib/v3_00_01/slf6.x86_64.e14.debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cetlib_except/v1_01_02/slf6.x86_64.e14.debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/root/v6_08_06g/Linux64bit+2.6-2.12-e14-nu-debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/boost/v1_63_0b/Linux64bit+2.6-2.12-e14-debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/larcorealg/v1_05_00/slf6.x86_64.e14.debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/larcore/v06_13_00/slf6.x86_64.e14.debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/messagefacility/v2_00_02/slf6.x86_64.e14.debug/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libCheckDPhaseGeometry_module.so")
    endif()
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/include/dune/Geometry" TYPE FILE FILES
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/ChannelMap35Alg.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/ChannelMap35OptAlg.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/ChannelMapAPAAlg.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/ChannelMapCRMAlg.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/DUNEGeometryHelper.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/DuneApaChannelMapAlg.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/GeoObjectSorter35.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/GeoObjectSorterAPA.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/GeoObjectSorterCRM.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/MuonCounter35Alg.h"
    )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/job" TYPE FILE FILES
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/checkgeodphase.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/checkwires.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/geometry_dune.fcl"
    )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/source/dune/Geometry" TYPE FILE FILES
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/CheckDPhaseGeometry_module.cc"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/CheckGeometry_module.cc"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/DUNEGeometryHelper_service.cc"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/ChannelMap35Alg.cxx"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/ChannelMap35OptAlg.cxx"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/ChannelMapAPAAlg.cxx"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/ChannelMapCRMAlg.cxx"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/DuneApaChannelMapAlg.cxx"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/GeoObjectSorter35.cxx"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/GeoObjectSorterAPA.cxx"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/GeoObjectSorterCRM.cxx"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/MuonCounter35Alg.cxx"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/ChannelMap35Alg.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/ChannelMap35OptAlg.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/ChannelMapAPAAlg.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/ChannelMapCRMAlg.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/DUNEGeometryHelper.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/DuneApaChannelMapAlg.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/GeoObjectSorter35.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/GeoObjectSorterAPA.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/GeoObjectSorterCRM.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/MuonCounter35Alg.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/Geometry/muoncounters.py"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/Geometry/gdml/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/Geometry/test/cmake_install.cmake")

endif()

