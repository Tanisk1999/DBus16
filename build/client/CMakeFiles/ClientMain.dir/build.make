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
CMAKE_SOURCE_DIR = /home/kpit/DBus_Code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kpit/DBus_Code/build

# Include any dependencies generated for this target.
include client/CMakeFiles/ClientMain.dir/depend.make

# Include the progress variables for this target.
include client/CMakeFiles/ClientMain.dir/progress.make

# Include the compile flags for this target's objects.
include client/CMakeFiles/ClientMain.dir/flags.make

client/CMakeFiles/ClientMain.dir/src/main.cpp.o: client/CMakeFiles/ClientMain.dir/flags.make
client/CMakeFiles/ClientMain.dir/src/main.cpp.o: ../client/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kpit/DBus_Code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object client/CMakeFiles/ClientMain.dir/src/main.cpp.o"
	cd /home/kpit/DBus_Code/build/client && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ClientMain.dir/src/main.cpp.o -c /home/kpit/DBus_Code/client/src/main.cpp

client/CMakeFiles/ClientMain.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ClientMain.dir/src/main.cpp.i"
	cd /home/kpit/DBus_Code/build/client && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kpit/DBus_Code/client/src/main.cpp > CMakeFiles/ClientMain.dir/src/main.cpp.i

client/CMakeFiles/ClientMain.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ClientMain.dir/src/main.cpp.s"
	cd /home/kpit/DBus_Code/build/client && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kpit/DBus_Code/client/src/main.cpp -o CMakeFiles/ClientMain.dir/src/main.cpp.s

# Object files for target ClientMain
ClientMain_OBJECTS = \
"CMakeFiles/ClientMain.dir/src/main.cpp.o"

# External object files for target ClientMain
ClientMain_EXTERNAL_OBJECTS =

client/ClientMain: client/CMakeFiles/ClientMain.dir/src/main.cpp.o
client/ClientMain: client/CMakeFiles/ClientMain.dir/build.make
client/ClientMain: client/CMakeFiles/ClientMain.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kpit/DBus_Code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ClientMain"
	cd /home/kpit/DBus_Code/build/client && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ClientMain.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
client/CMakeFiles/ClientMain.dir/build: client/ClientMain

.PHONY : client/CMakeFiles/ClientMain.dir/build

client/CMakeFiles/ClientMain.dir/clean:
	cd /home/kpit/DBus_Code/build/client && $(CMAKE_COMMAND) -P CMakeFiles/ClientMain.dir/cmake_clean.cmake
.PHONY : client/CMakeFiles/ClientMain.dir/clean

client/CMakeFiles/ClientMain.dir/depend:
	cd /home/kpit/DBus_Code/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kpit/DBus_Code /home/kpit/DBus_Code/client /home/kpit/DBus_Code/build /home/kpit/DBus_Code/build/client /home/kpit/DBus_Code/build/client/CMakeFiles/ClientMain.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : client/CMakeFiles/ClientMain.dir/depend

