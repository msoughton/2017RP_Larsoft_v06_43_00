# Install script for directory: /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/PhotonPropagation/LibraryBuildTools

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/job" TYPE FILE FILES
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/PhotonPropagation/LibraryBuildTools/dune10kt_v1_1x2x6_buildopticallibrary_grid.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/PhotonPropagation/LibraryBuildTools/dune10kt_v1_1x2x6_buildopticallibrary_test.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/PhotonPropagation/LibraryBuildTools/dune10kt_workspace_buildopticallibrary_grid.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/PhotonPropagation/LibraryBuildTools/dune10kt_workspace_buildopticallibrary_test.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/PhotonPropagation/LibraryBuildTools/dune35t_buildopticallibrary_grid.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/PhotonPropagation/LibraryBuildTools/dune35t_buildopticallibrary_grid_test.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/PhotonPropagation/LibraryBuildTools/dune35t_buildopticallibrary_test.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/PhotonPropagation/LibraryBuildTools/dune4APA_buildopticallibrary_grid.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/PhotonPropagation/LibraryBuildTools/dune4APA_buildopticallibrary_test.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/PhotonPropagation/LibraryBuildTools/libanalysis_fulllib.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/PhotonPropagation/LibraryBuildTools/libanalysis_interactive_test.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/PhotonPropagation/LibraryBuildTools/libanalysis_protodune_full.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/PhotonPropagation/LibraryBuildTools/protoDune_buildopticallibrary_grid.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/PhotonPropagation/LibraryBuildTools/protoDune_buildopticallibrary_test.fcl"
    )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/source/dune/PhotonPropagation/LibraryBuildTools" TYPE FILE FILES
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/PhotonPropagation/LibraryBuildTools/AssembleSingleFile.C"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/PhotonPropagation/LibraryBuildTools/CombineIntoLibrary.sh"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/PhotonPropagation/LibraryBuildTools/OpticalLibraryBuild_Grid_dune.sh"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/PhotonPropagation/LibraryBuildTools/SubmitCommand.sh"
    )
endif()

