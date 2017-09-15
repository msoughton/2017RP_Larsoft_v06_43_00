# Install script for directory: /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/ArtSupport/exe

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/bin/fcldump" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/bin/fcldump")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/bin/fcldump"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/bin" TYPE EXECUTABLE FILES "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/bin/fcldump")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/bin/fcldump" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/bin/fcldump")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/bin/fcldump"
         OLD_RPATH "/cvmfs/fermilab.opensciencegrid.org/products/larsoft/fhiclcpp/v4_05_01/slf6.x86_64.e14.debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cetlib/v3_00_01/slf6.x86_64.e14.debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cetlib_except/v1_01_02/slf6.x86_64.e14.debug/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/bin/fcldump")
    endif()
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/bin/liblist" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/bin/liblist")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/bin/liblist"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/bin" TYPE EXECUTABLE FILES "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/bin/liblist")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/bin/liblist" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/bin/liblist")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/bin/liblist"
         OLD_RPATH "/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cetlib/v3_00_01/slf6.x86_64.e14.debug/lib:/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cetlib_except/v1_01_02/slf6.x86_64.e14.debug/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/slf6.x86_64.e14.debug/bin/liblist")
    endif()
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/dunetpc/v06_43_00/source/dune/ArtSupport/exe" TYPE FILE FILES
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/ArtSupport/exe/fcldump.cxx"
    "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/ArtSupport/exe/liblist.cxx"
    )
endif()

