# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /cvmfs/fermilab.opensciencegrid.org/products/larsoft/cmake/v3_7_1/Linux64bit+2.6-2.12/bin/cmake

# The command to remove a file.
RM = /cvmfs/fermilab.opensciencegrid.org/products/larsoft/cmake/v3_7_1/Linux64bit+2.6-2.12/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /dune/app/users/soughton/larsoft_v06_43_00/srcs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64

# Utility rule file for +dunetpc+job+ci_test_g4_protoDUNE.fcl.

# Include the progress variables for this target.
include dunetpc/test/ci/CMakeFiles/+dunetpc+job+ci_test_g4_protoDUNE.fcl.dir/progress.make

dunetpc/test/ci/CMakeFiles/+dunetpc+job+ci_test_g4_protoDUNE.fcl: dunetpc/job/ci_test_g4_protoDUNE.fcl


dunetpc/job/ci_test_g4_protoDUNE.fcl: /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci/ci_test_g4_protoDUNE.fcl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Copying /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci/ci_test_g4_protoDUNE.fcl to /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/job/ci_test_g4_protoDUNE.fcl"
	cd /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/test/ci && /cvmfs/fermilab.opensciencegrid.org/products/larsoft/cmake/v3_7_1/Linux64bit+2.6-2.12/bin/cmake -E make_directory /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/job
	cd /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/test/ci && /cvmfs/fermilab.opensciencegrid.org/products/larsoft/cmake/v3_7_1/Linux64bit+2.6-2.12/bin/cmake -E copy /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci/ci_test_g4_protoDUNE.fcl /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/job/ci_test_g4_protoDUNE.fcl

+dunetpc+job+ci_test_g4_protoDUNE.fcl: dunetpc/test/ci/CMakeFiles/+dunetpc+job+ci_test_g4_protoDUNE.fcl
+dunetpc+job+ci_test_g4_protoDUNE.fcl: dunetpc/job/ci_test_g4_protoDUNE.fcl
+dunetpc+job+ci_test_g4_protoDUNE.fcl: dunetpc/test/ci/CMakeFiles/+dunetpc+job+ci_test_g4_protoDUNE.fcl.dir/build.make

.PHONY : +dunetpc+job+ci_test_g4_protoDUNE.fcl

# Rule to build all files generated by this target.
dunetpc/test/ci/CMakeFiles/+dunetpc+job+ci_test_g4_protoDUNE.fcl.dir/build: +dunetpc+job+ci_test_g4_protoDUNE.fcl

.PHONY : dunetpc/test/ci/CMakeFiles/+dunetpc+job+ci_test_g4_protoDUNE.fcl.dir/build

dunetpc/test/ci/CMakeFiles/+dunetpc+job+ci_test_g4_protoDUNE.fcl.dir/clean:
	cd /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/test/ci && $(CMAKE_COMMAND) -P CMakeFiles/+dunetpc+job+ci_test_g4_protoDUNE.fcl.dir/cmake_clean.cmake
.PHONY : dunetpc/test/ci/CMakeFiles/+dunetpc+job+ci_test_g4_protoDUNE.fcl.dir/clean

dunetpc/test/ci/CMakeFiles/+dunetpc+job+ci_test_g4_protoDUNE.fcl.dir/depend:
	cd /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /dune/app/users/soughton/larsoft_v06_43_00/srcs /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/test/ci /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64 /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/test/ci /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/test/ci/CMakeFiles/+dunetpc+job+ci_test_g4_protoDUNE.fcl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : dunetpc/test/ci/CMakeFiles/+dunetpc+job+ci_test_g4_protoDUNE.fcl.dir/depend

