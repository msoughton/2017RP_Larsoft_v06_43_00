# CMake generated Testfile for 
# Source directory: /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test
# Build directory: /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(donothing_dune35t "/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cetbuildtools/v5_09_01/bin/cet_exec_test" "--wd" "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/test/donothing_dune35t.d" "--required-files" "" "--datafiles" "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/test_donothing_dune35t.fcl" "--skip-return-code" "247" "lar" "--rethrow-all" "--config" "./test_donothing_dune35t.fcl")
set_tests_properties(donothing_dune35t PROPERTIES  SKIP_RETURN_CODE "247" WORKING_DIRECTORY "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/test/donothing_dune35t.d")
add_test(donothing_simul_dune35t "/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cetbuildtools/v5_09_01/bin/cet_exec_test" "--wd" "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/test/donothing_simul_dune35t.d" "--required-files" "" "--datafiles" "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/test_donothing_simul_dune35t.fcl" "--skip-return-code" "247" "lar" "--rethrow-all" "--config" "./test_donothing_simul_dune35t.fcl")
set_tests_properties(donothing_simul_dune35t PROPERTIES  SKIP_RETURN_CODE "247" WORKING_DIRECTORY "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/test/donothing_simul_dune35t.d")
add_test(donothing_dunefd "/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cetbuildtools/v5_09_01/bin/cet_exec_test" "--wd" "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/test/donothing_dunefd.d" "--required-files" "" "--datafiles" "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/test_donothing_dunefd.fcl" "--skip-return-code" "247" "lar" "--rethrow-all" "--config" "./test_donothing_dunefd.fcl")
set_tests_properties(donothing_dunefd PROPERTIES  SKIP_RETURN_CODE "247" WORKING_DIRECTORY "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/test/donothing_dunefd.d")
add_test(donothing_simul_dunefd "/cvmfs/fermilab.opensciencegrid.org/products/larsoft/cetbuildtools/v5_09_01/bin/cet_exec_test" "--wd" "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/test/donothing_simul_dunefd.d" "--required-files" "" "--datafiles" "/dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/test_donothing_simul_dunefd.fcl" "--skip-return-code" "247" "lar" "--rethrow-all" "--config" "./test_donothing_simul_dunefd.fcl")
set_tests_properties(donothing_simul_dunefd PROPERTIES  SKIP_RETURN_CODE "247" WORKING_DIRECTORY "/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/test/donothing_simul_dunefd.d")
subdirs("daqinput35t")
subdirs("EventGenerator")
subdirs("Geometry")
subdirs("ci")
subdirs("OpDet")
subdirs("ArtServices")
