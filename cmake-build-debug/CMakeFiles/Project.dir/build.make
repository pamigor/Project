# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\C++\Project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\C++\Project\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Project.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Project.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Project.dir/flags.make

CMakeFiles/Project.dir/Project.cpp.obj: CMakeFiles/Project.dir/flags.make
CMakeFiles/Project.dir/Project.cpp.obj: CMakeFiles/Project.dir/includes_CXX.rsp
CMakeFiles/Project.dir/Project.cpp.obj: ../Project.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\C++\Project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Project.dir/Project.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Project.dir\Project.cpp.obj -c C:\C++\Project\Project.cpp

CMakeFiles/Project.dir/Project.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project.dir/Project.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\C++\Project\Project.cpp > CMakeFiles\Project.dir\Project.cpp.i

CMakeFiles/Project.dir/Project.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project.dir/Project.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\C++\Project\Project.cpp -o CMakeFiles\Project.dir\Project.cpp.s

CMakeFiles/Project.dir/src/kbd.cpp.obj: CMakeFiles/Project.dir/flags.make
CMakeFiles/Project.dir/src/kbd.cpp.obj: CMakeFiles/Project.dir/includes_CXX.rsp
CMakeFiles/Project.dir/src/kbd.cpp.obj: ../src/kbd.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\C++\Project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Project.dir/src/kbd.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Project.dir\src\kbd.cpp.obj -c C:\C++\Project\src\kbd.cpp

CMakeFiles/Project.dir/src/kbd.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project.dir/src/kbd.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\C++\Project\src\kbd.cpp > CMakeFiles\Project.dir\src\kbd.cpp.i

CMakeFiles/Project.dir/src/kbd.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project.dir/src/kbd.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\C++\Project\src\kbd.cpp -o CMakeFiles\Project.dir\src\kbd.cpp.s

CMakeFiles/Project.dir/src/disk.cpp.obj: CMakeFiles/Project.dir/flags.make
CMakeFiles/Project.dir/src/disk.cpp.obj: CMakeFiles/Project.dir/includes_CXX.rsp
CMakeFiles/Project.dir/src/disk.cpp.obj: ../src/disk.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\C++\Project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Project.dir/src/disk.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Project.dir\src\disk.cpp.obj -c C:\C++\Project\src\disk.cpp

CMakeFiles/Project.dir/src/disk.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project.dir/src/disk.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\C++\Project\src\disk.cpp > CMakeFiles\Project.dir\src\disk.cpp.i

CMakeFiles/Project.dir/src/disk.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project.dir/src/disk.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\C++\Project\src\disk.cpp -o CMakeFiles\Project.dir\src\disk.cpp.s

CMakeFiles/Project.dir/src/cpu.cpp.obj: CMakeFiles/Project.dir/flags.make
CMakeFiles/Project.dir/src/cpu.cpp.obj: CMakeFiles/Project.dir/includes_CXX.rsp
CMakeFiles/Project.dir/src/cpu.cpp.obj: ../src/cpu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\C++\Project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Project.dir/src/cpu.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Project.dir\src\cpu.cpp.obj -c C:\C++\Project\src\cpu.cpp

CMakeFiles/Project.dir/src/cpu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project.dir/src/cpu.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\C++\Project\src\cpu.cpp > CMakeFiles\Project.dir\src\cpu.cpp.i

CMakeFiles/Project.dir/src/cpu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project.dir/src/cpu.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\C++\Project\src\cpu.cpp -o CMakeFiles\Project.dir\src\cpu.cpp.s

CMakeFiles/Project.dir/src/gpu.cpp.obj: CMakeFiles/Project.dir/flags.make
CMakeFiles/Project.dir/src/gpu.cpp.obj: CMakeFiles/Project.dir/includes_CXX.rsp
CMakeFiles/Project.dir/src/gpu.cpp.obj: ../src/gpu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\C++\Project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Project.dir/src/gpu.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Project.dir\src\gpu.cpp.obj -c C:\C++\Project\src\gpu.cpp

CMakeFiles/Project.dir/src/gpu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project.dir/src/gpu.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\C++\Project\src\gpu.cpp > CMakeFiles\Project.dir\src\gpu.cpp.i

CMakeFiles/Project.dir/src/gpu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project.dir/src/gpu.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\C++\Project\src\gpu.cpp -o CMakeFiles\Project.dir\src\gpu.cpp.s

CMakeFiles/Project.dir/src/ram.cpp.obj: CMakeFiles/Project.dir/flags.make
CMakeFiles/Project.dir/src/ram.cpp.obj: CMakeFiles/Project.dir/includes_CXX.rsp
CMakeFiles/Project.dir/src/ram.cpp.obj: ../src/ram.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\C++\Project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Project.dir/src/ram.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Project.dir\src\ram.cpp.obj -c C:\C++\Project\src\ram.cpp

CMakeFiles/Project.dir/src/ram.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project.dir/src/ram.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\C++\Project\src\ram.cpp > CMakeFiles\Project.dir\src\ram.cpp.i

CMakeFiles/Project.dir/src/ram.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project.dir/src/ram.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\C++\Project\src\ram.cpp -o CMakeFiles\Project.dir\src\ram.cpp.s

# Object files for target Project
Project_OBJECTS = \
"CMakeFiles/Project.dir/Project.cpp.obj" \
"CMakeFiles/Project.dir/src/kbd.cpp.obj" \
"CMakeFiles/Project.dir/src/disk.cpp.obj" \
"CMakeFiles/Project.dir/src/cpu.cpp.obj" \
"CMakeFiles/Project.dir/src/gpu.cpp.obj" \
"CMakeFiles/Project.dir/src/ram.cpp.obj"

# External object files for target Project
Project_EXTERNAL_OBJECTS =

Project.exe: CMakeFiles/Project.dir/Project.cpp.obj
Project.exe: CMakeFiles/Project.dir/src/kbd.cpp.obj
Project.exe: CMakeFiles/Project.dir/src/disk.cpp.obj
Project.exe: CMakeFiles/Project.dir/src/cpu.cpp.obj
Project.exe: CMakeFiles/Project.dir/src/gpu.cpp.obj
Project.exe: CMakeFiles/Project.dir/src/ram.cpp.obj
Project.exe: CMakeFiles/Project.dir/build.make
Project.exe: CMakeFiles/Project.dir/linklibs.rsp
Project.exe: CMakeFiles/Project.dir/objects1.rsp
Project.exe: CMakeFiles/Project.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\C++\Project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable Project.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Project.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Project.dir/build: Project.exe
.PHONY : CMakeFiles/Project.dir/build

CMakeFiles/Project.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Project.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Project.dir/clean

CMakeFiles/Project.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\C++\Project C:\C++\Project C:\C++\Project\cmake-build-debug C:\C++\Project\cmake-build-debug C:\C++\Project\cmake-build-debug\CMakeFiles\Project.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Project.dir/depend

