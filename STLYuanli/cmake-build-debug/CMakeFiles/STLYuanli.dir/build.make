# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/sniper/CLionProjects/C++/STLYuanli

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/sniper/CLionProjects/C++/STLYuanli/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/STLYuanli.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/STLYuanli.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/STLYuanli.dir/flags.make

CMakeFiles/STLYuanli.dir/main.cpp.o: CMakeFiles/STLYuanli.dir/flags.make
CMakeFiles/STLYuanli.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sniper/CLionProjects/C++/STLYuanli/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/STLYuanli.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/STLYuanli.dir/main.cpp.o -c /Users/sniper/CLionProjects/C++/STLYuanli/main.cpp

CMakeFiles/STLYuanli.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/STLYuanli.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sniper/CLionProjects/C++/STLYuanli/main.cpp > CMakeFiles/STLYuanli.dir/main.cpp.i

CMakeFiles/STLYuanli.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/STLYuanli.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sniper/CLionProjects/C++/STLYuanli/main.cpp -o CMakeFiles/STLYuanli.dir/main.cpp.s

# Object files for target STLYuanli
STLYuanli_OBJECTS = \
"CMakeFiles/STLYuanli.dir/main.cpp.o"

# External object files for target STLYuanli
STLYuanli_EXTERNAL_OBJECTS =

STLYuanli: CMakeFiles/STLYuanli.dir/main.cpp.o
STLYuanli: CMakeFiles/STLYuanli.dir/build.make
STLYuanli: CMakeFiles/STLYuanli.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/sniper/CLionProjects/C++/STLYuanli/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable STLYuanli"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/STLYuanli.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/STLYuanli.dir/build: STLYuanli

.PHONY : CMakeFiles/STLYuanli.dir/build

CMakeFiles/STLYuanli.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/STLYuanli.dir/cmake_clean.cmake
.PHONY : CMakeFiles/STLYuanli.dir/clean

CMakeFiles/STLYuanli.dir/depend:
	cd /Users/sniper/CLionProjects/C++/STLYuanli/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sniper/CLionProjects/C++/STLYuanli /Users/sniper/CLionProjects/C++/STLYuanli /Users/sniper/CLionProjects/C++/STLYuanli/cmake-build-debug /Users/sniper/CLionProjects/C++/STLYuanli/cmake-build-debug /Users/sniper/CLionProjects/C++/STLYuanli/cmake-build-debug/CMakeFiles/STLYuanli.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/STLYuanli.dir/depend
