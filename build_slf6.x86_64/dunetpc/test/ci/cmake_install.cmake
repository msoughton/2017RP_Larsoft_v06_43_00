# Install script for directory: /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/test" TYPE PROGRAM FILES
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci/ci_regression_seq_test_dunetpc.sh"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci/ci_regression_test.sh"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci/ci_regression_test_dunetpc.sh"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci/ci_regression_test_dunetpc_v2.sh"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci/duneopenold_detsim.sh"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci/duneopenold_reco.sh"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci/prodsingletest_dune.sh"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci/ci_tests.cfg"
    )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/job" TYPE FILE FILES
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci/ci_test_ana_dunetpc.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci/ci_test_detsim_dune35t.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci/ci_test_detsim_dunefd.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci/ci_test_detsim_dunetpc.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci/ci_test_detsim_protoDUNE.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci/ci_test_g4_dune35t.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci/ci_test_g4_dunefd.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci/ci_test_g4_protoDUNE.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci/ci_test_geant_dunetpc.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci/ci_test_gen_dune35t.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci/ci_test_gen_dunefd.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci/ci_test_gen_dunetpc.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci/ci_test_gen_protoDUNE.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci/ci_test_mergeana_dune35t.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci/ci_test_mergeana_dunefd.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci/ci_test_mergeana_protoDUNE.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci/ci_test_reco_dune35t.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci/ci_test_reco_dunefd.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci/ci_test_reco_dunetpc.fcl"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci/ci_test_reco_protoDUNE.fcl"
    )
endif()

