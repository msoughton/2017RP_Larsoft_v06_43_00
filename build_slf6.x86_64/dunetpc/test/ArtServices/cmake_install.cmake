# Install script for directory: /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ArtServices

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/source/test/ArtServices" TYPE FILE FILES
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ArtServices/test_DetectorClocksService.cxx"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ArtServices/test_DetectorProperties.cxx"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ArtServices/test_Geometry.cxx"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ArtServices/test_LArProperties.cxx"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ArtServices/test_LArSeedService.cxx"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ArtServices/test_RandomNumberGenerator.cxx"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ArtServices/test_SignalShapingServiceDUNE.cxx"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ArtServices/test_TFileService.cxx"
    )
endif()

