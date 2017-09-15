# Install script for directory: /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/include/dune/DuneInterface" TYPE FILE FILES
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/AdcChannelData.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/AdcChannelDataCopyService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/AdcChannelNoiseRemovalService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/AdcCompressService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/AdcCountSelection.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/AdcDeconvolutionService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/AdcDistortionService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/AdcMitigationService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/AdcNoiseRemovalService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/AdcRoiBuildingService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/AdcSignalFindingService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/AdcSimulator.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/AdcSuppressService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/AdcTypes.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/AdcWireBuildingService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/BaseTriggerService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/ChannelGroupService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/ChannelMappingService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/ChannelNoiseService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/MultiAdcSuppressService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/PedestalAdditionService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/PedestalEvaluationService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/RawDigitExtractService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/RawDigitPrepService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/SignalShapingService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/SimChannelExtractService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/WiredAdcChannelDataMap.h"
    )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/source/dune/DuneInterface" TYPE FILE FILES
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/AdcChannelData.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/AdcChannelDataCopyService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/AdcChannelNoiseRemovalService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/AdcCompressService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/AdcCountSelection.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/AdcDeconvolutionService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/AdcDistortionService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/AdcMitigationService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/AdcNoiseRemovalService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/AdcRoiBuildingService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/AdcSignalFindingService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/AdcSimulator.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/AdcSuppressService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/AdcTypes.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/AdcWireBuildingService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/BaseTriggerService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/ChannelGroupService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/ChannelMappingService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/ChannelNoiseService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/MultiAdcSuppressService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/PedestalAdditionService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/PedestalEvaluationService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/RawDigitExtractService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/RawDigitPrepService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/SignalShapingService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/SimChannelExtractService.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DuneInterface/WiredAdcChannelDataMap.h"
    )
endif()

