# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/aarch64/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/aarch64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/jjie/Desktop/GitHub/Code_for_c_cpp/Jjie_3_17

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jjie/Desktop/GitHub/Code_for_c_cpp/Jjie_3_17/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Jjie_3_17.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Jjie_3_17.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Jjie_3_17.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Jjie_3_17.dir/flags.make

CMakeFiles/Jjie_3_17.dir/main.c.o: CMakeFiles/Jjie_3_17.dir/flags.make
CMakeFiles/Jjie_3_17.dir/main.c.o: /Users/jjie/Desktop/GitHub/Code_for_c_cpp/Jjie_3_17/main.c
CMakeFiles/Jjie_3_17.dir/main.c.o: CMakeFiles/Jjie_3_17.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/jjie/Desktop/GitHub/Code_for_c_cpp/Jjie_3_17/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Jjie_3_17.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Jjie_3_17.dir/main.c.o -MF CMakeFiles/Jjie_3_17.dir/main.c.o.d -o CMakeFiles/Jjie_3_17.dir/main.c.o -c /Users/jjie/Desktop/GitHub/Code_for_c_cpp/Jjie_3_17/main.c

CMakeFiles/Jjie_3_17.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/Jjie_3_17.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/jjie/Desktop/GitHub/Code_for_c_cpp/Jjie_3_17/main.c > CMakeFiles/Jjie_3_17.dir/main.c.i

CMakeFiles/Jjie_3_17.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/Jjie_3_17.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/jjie/Desktop/GitHub/Code_for_c_cpp/Jjie_3_17/main.c -o CMakeFiles/Jjie_3_17.dir/main.c.s

# Object files for target Jjie_3_17
Jjie_3_17_OBJECTS = \
"CMakeFiles/Jjie_3_17.dir/main.c.o"

# External object files for target Jjie_3_17
Jjie_3_17_EXTERNAL_OBJECTS =

Jjie_3_17: CMakeFiles/Jjie_3_17.dir/main.c.o
Jjie_3_17: CMakeFiles/Jjie_3_17.dir/build.make
Jjie_3_17: CMakeFiles/Jjie_3_17.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/jjie/Desktop/GitHub/Code_for_c_cpp/Jjie_3_17/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Jjie_3_17"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Jjie_3_17.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Jjie_3_17.dir/build: Jjie_3_17
.PHONY : CMakeFiles/Jjie_3_17.dir/build

CMakeFiles/Jjie_3_17.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Jjie_3_17.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Jjie_3_17.dir/clean

CMakeFiles/Jjie_3_17.dir/depend:
	cd /Users/jjie/Desktop/GitHub/Code_for_c_cpp/Jjie_3_17/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jjie/Desktop/GitHub/Code_for_c_cpp/Jjie_3_17 /Users/jjie/Desktop/GitHub/Code_for_c_cpp/Jjie_3_17 /Users/jjie/Desktop/GitHub/Code_for_c_cpp/Jjie_3_17/cmake-build-debug /Users/jjie/Desktop/GitHub/Code_for_c_cpp/Jjie_3_17/cmake-build-debug /Users/jjie/Desktop/GitHub/Code_for_c_cpp/Jjie_3_17/cmake-build-debug/CMakeFiles/Jjie_3_17.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Jjie_3_17.dir/depend

