# Install script for directory: /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/ArtSupport/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/DuneInterface/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/DuneServiceAccess/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/DuneCommon/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/Geometry/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/Utilities/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/Simulation/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/LArG4/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/PhotonPropagation/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/OpticalDetector/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/DetSim/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/EventGenerator/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/Daq/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/CalData/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/DataPrep/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/RawdataDisplay/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/EnergyStudies/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/AnaTree/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/daqinput35t/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/OnlineMonitor/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/HitFinderDUNE/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/TrackFinderDUNE/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/DUNEPandora/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/CTree/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/T0Reco/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/SimFilter/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/FDSensOpt/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/Gaps/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/TrackingAna/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/ShowerAna/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/RunHistory/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/NearlineMonitor/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/MuonCounters/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/MuonCounterTimes/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/HitAnalysis/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/EventFilters/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/ClusterFinderDUNE/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/RecoAlgDUNE/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/Protodune/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/DAQTriggerSim/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/SpaceCharge/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/SpaceChargeServices/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/SupernovaAna/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/DataOverlay/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/DAQSimAna/cmake_install.cmake")
  include("/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/DataImport/cmake_install.cmake")

endif()

