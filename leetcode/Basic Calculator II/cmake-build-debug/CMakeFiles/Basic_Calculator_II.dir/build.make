# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /home/vito/clion/clion-2019.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/vito/clion/clion-2019.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/vito/Seafile/Repository/research/Git/OJ/leetcode/Basic Calculator II"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/vito/Seafile/Repository/research/Git/OJ/leetcode/Basic Calculator II/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Basic_Calculator_II.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Basic_Calculator_II.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Basic_Calculator_II.dir/flags.make

CMakeFiles/Basic_Calculator_II.dir/main.cpp.o: CMakeFiles/Basic_Calculator_II.dir/flags.make
CMakeFiles/Basic_Calculator_II.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/vito/Seafile/Repository/research/Git/OJ/leetcode/Basic Calculator II/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Basic_Calculator_II.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Basic_Calculator_II.dir/main.cpp.o -c "/home/vito/Seafile/Repository/research/Git/OJ/leetcode/Basic Calculator II/main.cpp"

CMakeFiles/Basic_Calculator_II.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Basic_Calculator_II.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/vito/Seafile/Repository/research/Git/OJ/leetcode/Basic Calculator II/main.cpp" > CMakeFiles/Basic_Calculator_II.dir/main.cpp.i

CMakeFiles/Basic_Calculator_II.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Basic_Calculator_II.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/vito/Seafile/Repository/research/Git/OJ/leetcode/Basic Calculator II/main.cpp" -o CMakeFiles/Basic_Calculator_II.dir/main.cpp.s

# Object files for target Basic_Calculator_II
Basic_Calculator_II_OBJECTS = \
"CMakeFiles/Basic_Calculator_II.dir/main.cpp.o"

# External object files for target Basic_Calculator_II
Basic_Calculator_II_EXTERNAL_OBJECTS =

Basic_Calculator_II: CMakeFiles/Basic_Calculator_II.dir/main.cpp.o
Basic_Calculator_II: CMakeFiles/Basic_Calculator_II.dir/build.make
Basic_Calculator_II: CMakeFiles/Basic_Calculator_II.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/vito/Seafile/Repository/research/Git/OJ/leetcode/Basic Calculator II/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Basic_Calculator_II"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Basic_Calculator_II.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Basic_Calculator_II.dir/build: Basic_Calculator_II

.PHONY : CMakeFiles/Basic_Calculator_II.dir/build

CMakeFiles/Basic_Calculator_II.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Basic_Calculator_II.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Basic_Calculator_II.dir/clean

CMakeFiles/Basic_Calculator_II.dir/depend:
	cd "/home/vito/Seafile/Repository/research/Git/OJ/leetcode/Basic Calculator II/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/vito/Seafile/Repository/research/Git/OJ/leetcode/Basic Calculator II" "/home/vito/Seafile/Repository/research/Git/OJ/leetcode/Basic Calculator II" "/home/vito/Seafile/Repository/research/Git/OJ/leetcode/Basic Calculator II/cmake-build-debug" "/home/vito/Seafile/Repository/research/Git/OJ/leetcode/Basic Calculator II/cmake-build-debug" "/home/vito/Seafile/Repository/research/Git/OJ/leetcode/Basic Calculator II/cmake-build-debug/CMakeFiles/Basic_Calculator_II.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Basic_Calculator_II.dir/depend

