# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/ar-han/CLionProjects/task

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ar-han/CLionProjects/task/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/task.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/task.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/task.dir/flags.make

CMakeFiles/task.dir/hello.c.o: CMakeFiles/task.dir/flags.make
CMakeFiles/task.dir/hello.c.o: ../hello.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ar-han/CLionProjects/task/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/task.dir/hello.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/task.dir/hello.c.o   -c /home/ar-han/CLionProjects/task/hello.c

CMakeFiles/task.dir/hello.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/task.dir/hello.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ar-han/CLionProjects/task/hello.c > CMakeFiles/task.dir/hello.c.i

CMakeFiles/task.dir/hello.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/task.dir/hello.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ar-han/CLionProjects/task/hello.c -o CMakeFiles/task.dir/hello.c.s

CMakeFiles/task.dir/hello.c.o.requires:

.PHONY : CMakeFiles/task.dir/hello.c.o.requires

CMakeFiles/task.dir/hello.c.o.provides: CMakeFiles/task.dir/hello.c.o.requires
	$(MAKE) -f CMakeFiles/task.dir/build.make CMakeFiles/task.dir/hello.c.o.provides.build
.PHONY : CMakeFiles/task.dir/hello.c.o.provides

CMakeFiles/task.dir/hello.c.o.provides.build: CMakeFiles/task.dir/hello.c.o


# Object files for target task
task_OBJECTS = \
"CMakeFiles/task.dir/hello.c.o"

# External object files for target task
task_EXTERNAL_OBJECTS =

task: CMakeFiles/task.dir/hello.c.o
task: CMakeFiles/task.dir/build.make
task: CMakeFiles/task.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ar-han/CLionProjects/task/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable task"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/task.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/task.dir/build: task

.PHONY : CMakeFiles/task.dir/build

CMakeFiles/task.dir/requires: CMakeFiles/task.dir/hello.c.o.requires

.PHONY : CMakeFiles/task.dir/requires

CMakeFiles/task.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/task.dir/cmake_clean.cmake
.PHONY : CMakeFiles/task.dir/clean

CMakeFiles/task.dir/depend:
	cd /home/ar-han/CLionProjects/task/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ar-han/CLionProjects/task /home/ar-han/CLionProjects/task /home/ar-han/CLionProjects/task/cmake-build-debug /home/ar-han/CLionProjects/task/cmake-build-debug /home/ar-han/CLionProjects/task/cmake-build-debug/CMakeFiles/task.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/task.dir/depend

