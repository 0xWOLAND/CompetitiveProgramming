# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /snap/clion/164/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/164/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/bhargav/Desktop/dev/CP/USACO/Feb2021

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bhargav/Desktop/dev/CP/USACO/Feb2021/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/RectangularPasture.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/RectangularPasture.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RectangularPasture.dir/flags.make

CMakeFiles/RectangularPasture.dir/RectangularPasture.cpp.o: CMakeFiles/RectangularPasture.dir/flags.make
CMakeFiles/RectangularPasture.dir/RectangularPasture.cpp.o: ../RectangularPasture.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bhargav/Desktop/dev/CP/USACO/Feb2021/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RectangularPasture.dir/RectangularPasture.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RectangularPasture.dir/RectangularPasture.cpp.o -c /home/bhargav/Desktop/dev/CP/USACO/Feb2021/RectangularPasture.cpp

CMakeFiles/RectangularPasture.dir/RectangularPasture.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RectangularPasture.dir/RectangularPasture.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bhargav/Desktop/dev/CP/USACO/Feb2021/RectangularPasture.cpp > CMakeFiles/RectangularPasture.dir/RectangularPasture.cpp.i

CMakeFiles/RectangularPasture.dir/RectangularPasture.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RectangularPasture.dir/RectangularPasture.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bhargav/Desktop/dev/CP/USACO/Feb2021/RectangularPasture.cpp -o CMakeFiles/RectangularPasture.dir/RectangularPasture.cpp.s

# Object files for target RectangularPasture
RectangularPasture_OBJECTS = \
"CMakeFiles/RectangularPasture.dir/RectangularPasture.cpp.o"

# External object files for target RectangularPasture
RectangularPasture_EXTERNAL_OBJECTS =

RectangularPasture: CMakeFiles/RectangularPasture.dir/RectangularPasture.cpp.o
RectangularPasture: CMakeFiles/RectangularPasture.dir/build.make
RectangularPasture: CMakeFiles/RectangularPasture.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/bhargav/Desktop/dev/CP/USACO/Feb2021/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable RectangularPasture"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RectangularPasture.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RectangularPasture.dir/build: RectangularPasture
.PHONY : CMakeFiles/RectangularPasture.dir/build

CMakeFiles/RectangularPasture.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/RectangularPasture.dir/cmake_clean.cmake
.PHONY : CMakeFiles/RectangularPasture.dir/clean

CMakeFiles/RectangularPasture.dir/depend:
	cd /home/bhargav/Desktop/dev/CP/USACO/Feb2021/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bhargav/Desktop/dev/CP/USACO/Feb2021 /home/bhargav/Desktop/dev/CP/USACO/Feb2021 /home/bhargav/Desktop/dev/CP/USACO/Feb2021/cmake-build-debug /home/bhargav/Desktop/dev/CP/USACO/Feb2021/cmake-build-debug /home/bhargav/Desktop/dev/CP/USACO/Feb2021/cmake-build-debug/CMakeFiles/RectangularPasture.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RectangularPasture.dir/depend
