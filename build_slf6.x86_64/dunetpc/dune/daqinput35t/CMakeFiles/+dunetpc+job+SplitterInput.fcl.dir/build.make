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

# Utility rule file for +dunetpc+job+SplitterInput.fcl.

# Include the progress variables for this target.
include dunetpc/dune/daqinput35t/CMakeFiles/+dunetpc+job+SplitterInput.fcl.dir/progress.make

dunetpc/dune/daqinput35t/CMakeFiles/+dunetpc+job+SplitterInput.fcl: dunetpc/job/SplitterInput.fcl


dunetpc/job/SplitterInput.fcl: /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/daqinput35t/SplitterInput.fcl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Copying /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/daqinput35t/SplitterInput.fcl to /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/job/SplitterInput.fcl"
	cd /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/daqinput35t && /cvmfs/fermilab.opensciencegrid.org/products/larsoft/cmake/v3_7_1/Linux64bit+2.6-2.12/bin/cmake -E make_directory /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/job
	cd /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/daqinput35t && /cvmfs/fermilab.opensciencegrid.org/products/larsoft/cmake/v3_7_1/Linux64bit+2.6-2.12/bin/cmake -E copy /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/daqinput35t/SplitterInput.fcl /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/job/SplitterInput.fcl

+dunetpc+job+SplitterInput.fcl: dunetpc/dune/daqinput35t/CMakeFiles/+dunetpc+job+SplitterInput.fcl
+dunetpc+job+SplitterInput.fcl: dunetpc/job/SplitterInput.fcl
+dunetpc+job+SplitterInput.fcl: dunetpc/dune/daqinput35t/CMakeFiles/+dunetpc+job+SplitterInput.fcl.dir/build.make

.PHONY : +dunetpc+job+SplitterInput.fcl

# Rule to build all files generated by this target.
dunetpc/dune/daqinput35t/CMakeFiles/+dunetpc+job+SplitterInput.fcl.dir/build: +dunetpc+job+SplitterInput.fcl

.PHONY : dunetpc/dune/daqinput35t/CMakeFiles/+dunetpc+job+SplitterInput.fcl.dir/build

dunetpc/dune/daqinput35t/CMakeFiles/+dunetpc+job+SplitterInput.fcl.dir/clean:
	cd /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/daqinput35t && $(CMAKE_COMMAND) -P CMakeFiles/+dunetpc+job+SplitterInput.fcl.dir/cmake_clean.cmake
.PHONY : dunetpc/dune/daqinput35t/CMakeFiles/+dunetpc+job+SplitterInput.fcl.dir/clean

dunetpc/dune/daqinput35t/CMakeFiles/+dunetpc+job+SplitterInput.fcl.dir/depend:
	cd /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /dune/app/users/soughton/larsoft_v06_43_00/srcs /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/daqinput35t /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64 /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/daqinput35t /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/daqinput35t/CMakeFiles/+dunetpc+job+SplitterInput.fcl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : dunetpc/dune/daqinput35t/CMakeFiles/+dunetpc+job+SplitterInput.fcl.dir/depend

