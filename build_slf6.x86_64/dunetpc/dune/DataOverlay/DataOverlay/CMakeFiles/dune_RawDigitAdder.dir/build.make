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

# Include any dependencies generated for this target.
include dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/depend.make

# Include the progress variables for this target.
include dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/progress.make

# Include the compile flags for this target's objects.
include dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/flags.make

dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder.cxx.o: dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/flags.make
dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder.cxx.o: /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay/RawDigitAdder.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder.cxx.o"
	cd /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/DataOverlay/DataOverlay && /cvmfs/fermilab.opensciencegrid.org/products/larsoft/gcc/v6_3_0/Linux64bit+2.6-2.12/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder.cxx.o -c /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay/RawDigitAdder.cxx

dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder.cxx.i"
	cd /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/DataOverlay/DataOverlay && /cvmfs/fermilab.opensciencegrid.org/products/larsoft/gcc/v6_3_0/Linux64bit+2.6-2.12/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay/RawDigitAdder.cxx > CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder.cxx.i

dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder.cxx.s"
	cd /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/DataOverlay/DataOverlay && /cvmfs/fermilab.opensciencegrid.org/products/larsoft/gcc/v6_3_0/Linux64bit+2.6-2.12/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay/RawDigitAdder.cxx -o CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder.cxx.s

dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder.cxx.o.requires:

.PHONY : dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder.cxx.o.requires

dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder.cxx.o.provides: dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder.cxx.o.requires
	$(MAKE) -f dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/build.make dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder.cxx.o.provides.build
.PHONY : dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder.cxx.o.provides

dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder.cxx.o.provides.build: dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder.cxx.o


dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_HardSaturate.cxx.o: dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/flags.make
dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_HardSaturate.cxx.o: /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay/RawDigitAdder_HardSaturate.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_HardSaturate.cxx.o"
	cd /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/DataOverlay/DataOverlay && /cvmfs/fermilab.opensciencegrid.org/products/larsoft/gcc/v6_3_0/Linux64bit+2.6-2.12/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_HardSaturate.cxx.o -c /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay/RawDigitAdder_HardSaturate.cxx

dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_HardSaturate.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_HardSaturate.cxx.i"
	cd /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/DataOverlay/DataOverlay && /cvmfs/fermilab.opensciencegrid.org/products/larsoft/gcc/v6_3_0/Linux64bit+2.6-2.12/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay/RawDigitAdder_HardSaturate.cxx > CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_HardSaturate.cxx.i

dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_HardSaturate.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_HardSaturate.cxx.s"
	cd /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/DataOverlay/DataOverlay && /cvmfs/fermilab.opensciencegrid.org/products/larsoft/gcc/v6_3_0/Linux64bit+2.6-2.12/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay/RawDigitAdder_HardSaturate.cxx -o CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_HardSaturate.cxx.s

dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_HardSaturate.cxx.o.requires:

.PHONY : dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_HardSaturate.cxx.o.requires

dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_HardSaturate.cxx.o.provides: dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_HardSaturate.cxx.o.requires
	$(MAKE) -f dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/build.make dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_HardSaturate.cxx.o.provides.build
.PHONY : dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_HardSaturate.cxx.o.provides

dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_HardSaturate.cxx.o.provides.build: dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_HardSaturate.cxx.o


dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_35t.cxx.o: dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/flags.make
dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_35t.cxx.o: /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay/RawDigitAdder_35t.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_35t.cxx.o"
	cd /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/DataOverlay/DataOverlay && /cvmfs/fermilab.opensciencegrid.org/products/larsoft/gcc/v6_3_0/Linux64bit+2.6-2.12/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_35t.cxx.o -c /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay/RawDigitAdder_35t.cxx

dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_35t.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_35t.cxx.i"
	cd /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/DataOverlay/DataOverlay && /cvmfs/fermilab.opensciencegrid.org/products/larsoft/gcc/v6_3_0/Linux64bit+2.6-2.12/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay/RawDigitAdder_35t.cxx > CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_35t.cxx.i

dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_35t.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_35t.cxx.s"
	cd /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/DataOverlay/DataOverlay && /cvmfs/fermilab.opensciencegrid.org/products/larsoft/gcc/v6_3_0/Linux64bit+2.6-2.12/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay/RawDigitAdder_35t.cxx -o CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_35t.cxx.s

dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_35t.cxx.o.requires:

.PHONY : dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_35t.cxx.o.requires

dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_35t.cxx.o.provides: dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_35t.cxx.o.requires
	$(MAKE) -f dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/build.make dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_35t.cxx.o.provides.build
.PHONY : dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_35t.cxx.o.provides

dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_35t.cxx.o.provides.build: dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_35t.cxx.o


# Object files for target dune_RawDigitAdder
dune_RawDigitAdder_OBJECTS = \
"CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder.cxx.o" \
"CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_HardSaturate.cxx.o" \
"CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_35t.cxx.o"

# External object files for target dune_RawDigitAdder
dune_RawDigitAdder_EXTERNAL_OBJECTS =

dunetpc/lib/libdune_RawDigitAdder.so: dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder.cxx.o
dunetpc/lib/libdune_RawDigitAdder.so: dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_HardSaturate.cxx.o
dunetpc/lib/libdune_RawDigitAdder.so: dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_35t.cxx.o
dunetpc/lib/libdune_RawDigitAdder.so: dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/build.make
dunetpc/lib/libdune_RawDigitAdder.so: /cvmfs/fermilab.opensciencegrid.org/products/larsoft/root/v6_08_06g/Linux64bit+2.6-2.12-e14-nu-debug/lib/libCore.so
dunetpc/lib/libdune_RawDigitAdder.so: /cvmfs/fermilab.opensciencegrid.org/products/larsoft/root/v6_08_06g/Linux64bit+2.6-2.12-e14-nu-debug/lib/libRIO.so
dunetpc/lib/libdune_RawDigitAdder.so: /cvmfs/fermilab.opensciencegrid.org/products/larsoft/root/v6_08_06g/Linux64bit+2.6-2.12-e14-nu-debug/lib/libNet.so
dunetpc/lib/libdune_RawDigitAdder.so: /cvmfs/fermilab.opensciencegrid.org/products/larsoft/root/v6_08_06g/Linux64bit+2.6-2.12-e14-nu-debug/lib/libHist.so
dunetpc/lib/libdune_RawDigitAdder.so: /cvmfs/fermilab.opensciencegrid.org/products/larsoft/root/v6_08_06g/Linux64bit+2.6-2.12-e14-nu-debug/lib/libGraf.so
dunetpc/lib/libdune_RawDigitAdder.so: /cvmfs/fermilab.opensciencegrid.org/products/larsoft/root/v6_08_06g/Linux64bit+2.6-2.12-e14-nu-debug/lib/libGraf3d.so
dunetpc/lib/libdune_RawDigitAdder.so: /cvmfs/fermilab.opensciencegrid.org/products/larsoft/root/v6_08_06g/Linux64bit+2.6-2.12-e14-nu-debug/lib/libGpad.so
dunetpc/lib/libdune_RawDigitAdder.so: /cvmfs/fermilab.opensciencegrid.org/products/larsoft/root/v6_08_06g/Linux64bit+2.6-2.12-e14-nu-debug/lib/libTree.so
dunetpc/lib/libdune_RawDigitAdder.so: /cvmfs/fermilab.opensciencegrid.org/products/larsoft/root/v6_08_06g/Linux64bit+2.6-2.12-e14-nu-debug/lib/libRint.so
dunetpc/lib/libdune_RawDigitAdder.so: /cvmfs/fermilab.opensciencegrid.org/products/larsoft/root/v6_08_06g/Linux64bit+2.6-2.12-e14-nu-debug/lib/libPostscript.so
dunetpc/lib/libdune_RawDigitAdder.so: /cvmfs/fermilab.opensciencegrid.org/products/larsoft/root/v6_08_06g/Linux64bit+2.6-2.12-e14-nu-debug/lib/libMatrix.so
dunetpc/lib/libdune_RawDigitAdder.so: /cvmfs/fermilab.opensciencegrid.org/products/larsoft/root/v6_08_06g/Linux64bit+2.6-2.12-e14-nu-debug/lib/libPhysics.so
dunetpc/lib/libdune_RawDigitAdder.so: /cvmfs/fermilab.opensciencegrid.org/products/larsoft/root/v6_08_06g/Linux64bit+2.6-2.12-e14-nu-debug/lib/libMathCore.so
dunetpc/lib/libdune_RawDigitAdder.so: /cvmfs/fermilab.opensciencegrid.org/products/larsoft/root/v6_08_06g/Linux64bit+2.6-2.12-e14-nu-debug/lib/libThread.so
dunetpc/lib/libdune_RawDigitAdder.so: dunetpc/lib/libdune_DetSim.so
dunetpc/lib/libdune_RawDigitAdder.so: dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared library ../../../lib/libdune_RawDigitAdder.so"
	cd /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/DataOverlay/DataOverlay && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dune_RawDigitAdder.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/build: dunetpc/lib/libdune_RawDigitAdder.so

.PHONY : dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/build

dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/requires: dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder.cxx.o.requires
dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/requires: dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_HardSaturate.cxx.o.requires
dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/requires: dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/RawDigitAdder_35t.cxx.o.requires

.PHONY : dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/requires

dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/clean:
	cd /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/DataOverlay/DataOverlay && $(CMAKE_COMMAND) -P CMakeFiles/dune_RawDigitAdder.dir/cmake_clean.cmake
.PHONY : dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/clean

dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/depend:
	cd /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /dune/app/users/soughton/larsoft_v06_43_00/srcs /dune/app/users/soughton/larsoft_v06_43_00/srcs/dunetpc/dune/DataOverlay/DataOverlay /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64 /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/DataOverlay/DataOverlay /dune/app/users/soughton/larsoft_v06_43_00/build_slf6.x86_64/dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : dunetpc/dune/DataOverlay/DataOverlay/CMakeFiles/dune_RawDigitAdder.dir/depend
