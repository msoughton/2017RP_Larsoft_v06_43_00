# CMake generated Testfile for 
# Source directory: /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataPrep/Tool/test
# Build directory: /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/DataPrep/Tool/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_AdcDataDumper "/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cetbuildtools/v5_09_01/bin/cet_exec_test" "--wd" "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/DataPrep/Tool/test/test_AdcDataDumper.d" "--required-files" "" "--datafiles" "" "--skip-return-code" "247" "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/bin/test_AdcDataDumper")
set_tests_properties(test_AdcDataDumper PROPERTIES  SKIP_RETURN_CODE "247" WORKING_DIRECTORY "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/DataPrep/Tool/test/test_AdcDataDumper.d")
