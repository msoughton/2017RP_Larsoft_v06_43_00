# This file will be configured to contain variables for CPack. These variables
# should be set in the CMake list file of the project before CPack module is
# included. The list of available CPACK_xxx variables and their associated
# documentation may be obtained using
#  cpack --help-variable-list
#
# Some variables are common to all generators (e.g. CPACK_PACKAGE_NAME)
# and some are specific to a generator
# (e.g. CPACK_NSIS_EXTRA_INSTALL_COMMANDS). The generator specific variables
# usually begin with CPACK_<GENNAME>_xxxx.


SET(CPACK_BINARY_7Z "")
SET(CPACK_BINARY_BUNDLE "")
SET(CPACK_BINARY_CYGWIN "")
SET(CPACK_BINARY_DEB "")
SET(CPACK_BINARY_DRAGNDROP "")
SET(CPACK_BINARY_IFW "")
SET(CPACK_BINARY_NSIS "")
SET(CPACK_BINARY_OSXX11 "")
SET(CPACK_BINARY_PACKAGEMAKER "")
SET(CPACK_BINARY_PRODUCTBUILD "")
SET(CPACK_BINARY_RPM "")
SET(CPACK_BINARY_STGZ "")
SET(CPACK_BINARY_TBZ2 "")
SET(CPACK_BINARY_TGZ "")
SET(CPACK_BINARY_TXZ "")
SET(CPACK_BINARY_TZ "")
SET(CPACK_BINARY_WIX "")
SET(CPACK_BINARY_ZIP "")
SET(CPACK_BUILD_SOURCE_DIRS "/dune/app/users/soughton/larsoft_v06_43_00/srcs;/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64")
SET(CPACK_CMAKE_GENERATOR "Unix Makefiles")
SET(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
SET(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
SET(CPACK_GENERATOR "TBZ2")
SET(CPACK_INCLUDE_TOPLEVEL_DIRECTORY "0")
SET(CPACK_INSTALL_CMAKE_PROJECTS "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64;Project;ALL;/")
SET(CPACK_INSTALL_PREFIX "/dune/app/users/soughton/larsoft_v06_43_00/localProducts_larsoft_v06_43_00_debug_e14")
SET(CPACK_MODULE_PATH "/cvmfs/fermilab.opensciencegrid.org/products/larsoft/canvas/v2_00_02/Modules;/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cetbuildtools/v5_09_01/Modules;/cvmfs/fermilab.opensciencegrid.org/products/larsoft/canvas/v2_00_02/Modules;/cvmfs/fermilab.opensciencegrid.org/products/larsoft/art/v2_07_03/Modules;/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cetbuildtools/v5_09_01/Modules")
SET(CPACK_NSIS_DISPLAY_NAME "larsoft 06.43.00")
SET(CPACK_NSIS_INSTALLER_ICON_CODE "")
SET(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
SET(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES")
SET(CPACK_NSIS_PACKAGE_NAME "larsoft 06.43.00")
SET(CPACK_OUTPUT_CONFIG_FILE "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/CPackConfig.cmake")
SET(CPACK_PACKAGE_DEFAULT_LOCATION "/")
SET(CPACK_PACKAGE_DESCRIPTION_FILE "/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cmake/v3_7_1/Linux64bit+2.6-2.12/share/cmake-3.7/Templates/CPack.GenericDescription.txt")
SET(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Project built using CMake")
SET(CPACK_PACKAGE_FILE_NAME "larsoft-06.43.00-slf6-x86_64-debug-e14")
SET(CPACK_PACKAGE_INSTALL_DIRECTORY "larsoft 06.43.00")
SET(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "larsoft 06.43.00")
SET(CPACK_PACKAGE_NAME "larsoft")
SET(CPACK_PACKAGE_RELOCATABLE "true")
SET(CPACK_PACKAGE_VENDOR "Humanity")
SET(CPACK_PACKAGE_VERSION "06.43.00")
SET(CPACK_PACKAGE_VERSION_MAJOR "0")
SET(CPACK_PACKAGE_VERSION_MINOR "1")
SET(CPACK_PACKAGE_VERSION_PATCH "1")
SET(CPACK_RESOURCE_FILE_LICENSE "/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cmake/v3_7_1/Linux64bit+2.6-2.12/share/cmake-3.7/Templates/CPack.GenericLicense.txt")
SET(CPACK_RESOURCE_FILE_README "/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cmake/v3_7_1/Linux64bit+2.6-2.12/share/cmake-3.7/Templates/CPack.GenericDescription.txt")
SET(CPACK_RESOURCE_FILE_WELCOME "/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cmake/v3_7_1/Linux64bit+2.6-2.12/share/cmake-3.7/Templates/CPack.GenericWelcome.txt")
SET(CPACK_SET_DESTDIR "OFF")
SET(CPACK_SOURCE_7Z "")
SET(CPACK_SOURCE_CYGWIN "")
SET(CPACK_SOURCE_GENERATOR "TBZ2;TGZ;TXZ;TZ")
SET(CPACK_SOURCE_OUTPUT_CONFIG_FILE "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/CPackSourceConfig.cmake")
SET(CPACK_SOURCE_RPM "OFF")
SET(CPACK_SOURCE_TBZ2 "ON")
SET(CPACK_SOURCE_TGZ "ON")
SET(CPACK_SOURCE_TXZ "ON")
SET(CPACK_SOURCE_TZ "ON")
SET(CPACK_SOURCE_ZIP "OFF")
SET(CPACK_SYSTEM_NAME "slf6-x86_64-debug-e14")
SET(CPACK_TOPLEVEL_TAG "slf6-x86_64-debug-e14")
SET(CPACK_WIX_SIZEOF_VOID_P "8")

if(NOT CPACK_PROPERTIES_FILE)
  set(CPACK_PROPERTIES_FILE "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/CPackProperties.cmake")
endif()

if(EXISTS ${CPACK_PROPERTIES_FILE})
  include(${CPACK_PROPERTIES_FILE})
endif()
