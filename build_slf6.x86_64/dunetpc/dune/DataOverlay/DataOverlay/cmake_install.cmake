# Install script for directory: /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_RawDigitAdderAna.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_RawDigitAdderAna.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_RawDigitAdderAna.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib" TYPE SHARED_LIBRARY FILES "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/lib/libdune_RawDigitAdderAna.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_RawDigitAdderAna.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_RawDigitAdderAna.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_RawDigitAdderAna.so"
         OLD_RPATH "/cvmfs/fermilab.opensciencegrid.org/products/larsoft/lardataobj/v1_18_00/slf6.x86_64.e14.debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/root/v6_08_06g/Linux64bit+2.6-2.12-e14-nu-debug/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_RawDigitAdderAna.so")
    endif()
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_RawDigitAdder.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_RawDigitAdder.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_RawDigitAdder.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib" TYPE SHARED_LIBRARY FILES "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/lib/libdune_RawDigitAdder.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_RawDigitAdder.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_RawDigitAdder.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_RawDigitAdder.so"
         OLD_RPATH "/cvmfs/fermilab.opensciencegrid.org/products/larsoft/root/v6_08_06g/Linux64bit+2.6-2.12-e14-nu-debug/lib:/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_RawDigitAdder.so")
    endif()
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_RawDigitMixer.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_RawDigitMixer.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_RawDigitMixer.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib" TYPE SHARED_LIBRARY FILES "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/lib/libdune_RawDigitMixer.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_RawDigitMixer.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_RawDigitMixer.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_RawDigitMixer.so"
         OLD_RPATH "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/lardataobj/v1_18_00/slf6.x86_64.e14.debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/root/v6_08_06g/Linux64bit+2.6-2.12-e14-nu-debug/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_RawDigitMixer.so")
    endif()
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_OpDetWaveformMixer.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_OpDetWaveformMixer.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_OpDetWaveformMixer.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib" TYPE SHARED_LIBRARY FILES "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/lib/libdune_OpDetWaveformMixer.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_OpDetWaveformMixer.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_OpDetWaveformMixer.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_OpDetWaveformMixer.so"
         OLD_RPATH "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/lardataobj/v1_18_00/slf6.x86_64.e14.debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/root/v6_08_06g/Linux64bit+2.6-2.12-e14-nu-debug/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/lib/libdune_OpDetWaveformMixer.so")
    endif()
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/include/dune/DataOverlay/DataOverlay" TYPE FILE FILES
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay/OpDetWaveformMixer.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay/RawDigitAdder.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay/RawDigitAdder_35t.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay/RawDigitAdder_HardSaturate.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay/RawDigitMixer.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay/RawDigitAdderAna.hh"
    )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/source/dune/DataOverlay/DataOverlay" TYPE FILE FILES
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay/OpDetWaveformMixer.cxx"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay/RawDigitAdder.cxx"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay/RawDigitAdderAna.cxx"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay/RawDigitAdder_35t.cxx"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay/RawDigitAdder_HardSaturate.cxx"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay/RawDigitMixer.cxx"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay/OpDetWaveformMixer.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay/RawDigitAdder.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay/RawDigitAdder_35t.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay/RawDigitAdder_HardSaturate.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay/RawDigitMixer.h"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay/RawDigitAdderAna.hh"
    )
endif()

