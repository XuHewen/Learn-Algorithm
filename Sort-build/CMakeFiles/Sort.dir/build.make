# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/xu/work/algorithm/Sort

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xu/work/algorithm/Sort-build

# Include any dependencies generated for this target.
include CMakeFiles/Sort.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Sort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Sort.dir/flags.make

CMakeFiles/Sort.dir/main.cpp.o: CMakeFiles/Sort.dir/flags.make
CMakeFiles/Sort.dir/main.cpp.o: /home/xu/work/algorithm/Sort/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xu/work/algorithm/Sort-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Sort.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Sort.dir/main.cpp.o -c /home/xu/work/algorithm/Sort/main.cpp

CMakeFiles/Sort.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sort.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xu/work/algorithm/Sort/main.cpp > CMakeFiles/Sort.dir/main.cpp.i

CMakeFiles/Sort.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sort.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xu/work/algorithm/Sort/main.cpp -o CMakeFiles/Sort.dir/main.cpp.s

CMakeFiles/Sort.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Sort.dir/main.cpp.o.requires

CMakeFiles/Sort.dir/main.cpp.o.provides: CMakeFiles/Sort.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Sort.dir/build.make CMakeFiles/Sort.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Sort.dir/main.cpp.o.provides

CMakeFiles/Sort.dir/main.cpp.o.provides.build: CMakeFiles/Sort.dir/main.cpp.o


# Object files for target Sort
Sort_OBJECTS = \
"CMakeFiles/Sort.dir/main.cpp.o"

# External object files for target Sort
Sort_EXTERNAL_OBJECTS =

Sort: CMakeFiles/Sort.dir/main.cpp.o
Sort: CMakeFiles/Sort.dir/build.make
Sort: CMakeFiles/Sort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xu/work/algorithm/Sort-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Sort"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Sort.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Sort.dir/build: Sort

.PHONY : CMakeFiles/Sort.dir/build

CMakeFiles/Sort.dir/requires: CMakeFiles/Sort.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Sort.dir/requires

CMakeFiles/Sort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Sort.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Sort.dir/clean

CMakeFiles/Sort.dir/depend:
	cd /home/xu/work/algorithm/Sort-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xu/work/algorithm/Sort /home/xu/work/algorithm/Sort /home/xu/work/algorithm/Sort-build /home/xu/work/algorithm/Sort-build /home/xu/work/algorithm/Sort-build/CMakeFiles/Sort.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Sort.dir/depend

