# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/edsel_/learn/c++_learn/c++_learn/t.o/example

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/edsel_/learn/c++_learn/c++_learn/t.o/example/build

# Include any dependencies generated for this target.
include CMakeFiles/oop.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/oop.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/oop.dir/flags.make

CMakeFiles/oop.dir/main.cpp.o: CMakeFiles/oop.dir/flags.make
CMakeFiles/oop.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/edsel_/learn/c++_learn/c++_learn/t.o/example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/oop.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/oop.dir/main.cpp.o -c /home/edsel_/learn/c++_learn/c++_learn/t.o/example/main.cpp

CMakeFiles/oop.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/oop.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/edsel_/learn/c++_learn/c++_learn/t.o/example/main.cpp > CMakeFiles/oop.dir/main.cpp.i

CMakeFiles/oop.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/oop.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/edsel_/learn/c++_learn/c++_learn/t.o/example/main.cpp -o CMakeFiles/oop.dir/main.cpp.s

CMakeFiles/oop.dir/Vehicle.cpp.o: CMakeFiles/oop.dir/flags.make
CMakeFiles/oop.dir/Vehicle.cpp.o: ../Vehicle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/edsel_/learn/c++_learn/c++_learn/t.o/example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/oop.dir/Vehicle.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/oop.dir/Vehicle.cpp.o -c /home/edsel_/learn/c++_learn/c++_learn/t.o/example/Vehicle.cpp

CMakeFiles/oop.dir/Vehicle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/oop.dir/Vehicle.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/edsel_/learn/c++_learn/c++_learn/t.o/example/Vehicle.cpp > CMakeFiles/oop.dir/Vehicle.cpp.i

CMakeFiles/oop.dir/Vehicle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/oop.dir/Vehicle.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/edsel_/learn/c++_learn/c++_learn/t.o/example/Vehicle.cpp -o CMakeFiles/oop.dir/Vehicle.cpp.s

# Object files for target oop
oop_OBJECTS = \
"CMakeFiles/oop.dir/main.cpp.o" \
"CMakeFiles/oop.dir/Vehicle.cpp.o"

# External object files for target oop
oop_EXTERNAL_OBJECTS =

oop: CMakeFiles/oop.dir/main.cpp.o
oop: CMakeFiles/oop.dir/Vehicle.cpp.o
oop: CMakeFiles/oop.dir/build.make
oop: CMakeFiles/oop.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/edsel_/learn/c++_learn/c++_learn/t.o/example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable oop"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/oop.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/oop.dir/build: oop

.PHONY : CMakeFiles/oop.dir/build

CMakeFiles/oop.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/oop.dir/cmake_clean.cmake
.PHONY : CMakeFiles/oop.dir/clean

CMakeFiles/oop.dir/depend:
	cd /home/edsel_/learn/c++_learn/c++_learn/t.o/example/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/edsel_/learn/c++_learn/c++_learn/t.o/example /home/edsel_/learn/c++_learn/c++_learn/t.o/example /home/edsel_/learn/c++_learn/c++_learn/t.o/example/build /home/edsel_/learn/c++_learn/c++_learn/t.o/example/build /home/edsel_/learn/c++_learn/c++_learn/t.o/example/build/CMakeFiles/oop.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/oop.dir/depend

