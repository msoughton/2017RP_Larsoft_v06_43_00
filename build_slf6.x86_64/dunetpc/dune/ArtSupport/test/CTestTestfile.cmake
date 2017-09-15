# CMake generated Testfile for 
# Source directory: /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/ArtSupport/test
# Build directory: /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/ArtSupport/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_ArtServiceHelper "/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cetbuildtools/v5_09_01/bin/cet_exec_test" "--wd" "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/ArtSupport/test/test_ArtServiceHelper.d" "--required-files" "" "--datafiles" "" "--skip-return-code" "247" "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/bin/test_ArtServiceHelper")
set_tests_properties(test_ArtServiceHelper PROPERTIES  SKIP_RETURN_CODE "247" WORKING_DIRECTORY "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/ArtSupport/test/test_ArtServiceHelper.d")
add_test(test_DuneToolManager "/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cetbuildtools/v5_09_01/bin/cet_exec_test" "--wd" "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/ArtSupport/test/test_DuneToolManager.d" "--required-files" "" "--datafiles" "" "--skip-return-code" "247" "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/bin/test_DuneToolManager")
set_tests_properties(test_DuneToolManager PROPERTIES  SKIP_RETURN_CODE "247" WORKING_DIRECTORY "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/ArtSupport/test/test_DuneToolManager.d")
