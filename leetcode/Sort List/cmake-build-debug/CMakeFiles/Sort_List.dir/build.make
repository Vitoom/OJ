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
CMAKE_SOURCE_DIR = "/home/vito/Seafile/Repository/research/Git/OJ/leetcode/Sort List"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/vito/Seafile/Repository/research/Git/OJ/leetcode/Sort List/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Sort_List.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Sort_List.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Sort_List.dir/flags.make

CMakeFiles/Sort_List.dir/main.cpp.o: CMakeFiles/Sort_List.dir/flags.make
CMakeFiles/Sort_List.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/vito/Seafile/Repository/research/Git/OJ/leetcode/Sort List/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Sort_List.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Sort_List.dir/main.cpp.o -c "/home/vito/Seafile/Repository/research/Git/OJ/leetcode/Sort List/main.cpp"

CMakeFiles/Sort_List.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sort_List.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/vito/Seafile/Repository/research/Git/OJ/leetcode/Sort List/main.cpp" > CMakeFiles/Sort_List.dir/main.cpp.i

CMakeFiles/Sort_List.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sort_List.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/vito/Seafile/Repository/research/Git/OJ/leetcode/Sort List/main.cpp" -o CMakeFiles/Sort_List.dir/main.cpp.s

# Object files for target Sort_List
Sort_List_OBJECTS = \
"CMakeFiles/Sort_List.dir/main.cpp.o"

# External object files for target Sort_List
Sort_List_EXTERNAL_OBJECTS =

Sort_List: CMakeFiles/Sort_List.dir/main.cpp.o
Sort_List: CMakeFiles/Sort_List.dir/build.make
Sort_List: CMakeFiles/Sort_List.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/vito/Seafile/Repository/research/Git/OJ/leetcode/Sort List/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Sort_List"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Sort_List.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Sort_List.dir/build: Sort_List

.PHONY : CMakeFiles/Sort_List.dir/build

CMakeFiles/Sort_List.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Sort_List.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Sort_List.dir/clean

CMakeFiles/Sort_List.dir/depend:
	cd "/home/vito/Seafile/Repository/research/Git/OJ/leetcode/Sort List/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/vito/Seafile/Repository/research/Git/OJ/leetcode/Sort List" "/home/vito/Seafile/Repository/research/Git/OJ/leetcode/Sort List" "/home/vito/Seafile/Repository/research/Git/OJ/leetcode/Sort List/cmake-build-debug" "/home/vito/Seafile/Repository/research/Git/OJ/leetcode/Sort List/cmake-build-debug" "/home/vito/Seafile/Repository/research/Git/OJ/leetcode/Sort List/cmake-build-debug/CMakeFiles/Sort_List.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Sort_List.dir/depend

