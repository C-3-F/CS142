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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\c3far\Documents\Code\CS142\Final_Exam

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\c3far\Documents\Code\CS142\Final_Exam\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Final_Exam.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Final_Exam.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Final_Exam.dir/flags.make

CMakeFiles/Final_Exam.dir/main.cpp.obj: CMakeFiles/Final_Exam.dir/flags.make
CMakeFiles/Final_Exam.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\c3far\Documents\Code\CS142\Final_Exam\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Final_Exam.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Final_Exam.dir\main.cpp.obj -c C:\Users\c3far\Documents\Code\CS142\Final_Exam\main.cpp

CMakeFiles/Final_Exam.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Final_Exam.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\c3far\Documents\Code\CS142\Final_Exam\main.cpp > CMakeFiles\Final_Exam.dir\main.cpp.i

CMakeFiles/Final_Exam.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Final_Exam.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\c3far\Documents\Code\CS142\Final_Exam\main.cpp -o CMakeFiles\Final_Exam.dir\main.cpp.s

CMakeFiles/Final_Exam.dir/ToyNew.cpp.obj: CMakeFiles/Final_Exam.dir/flags.make
CMakeFiles/Final_Exam.dir/ToyNew.cpp.obj: ../ToyNew.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\c3far\Documents\Code\CS142\Final_Exam\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Final_Exam.dir/ToyNew.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Final_Exam.dir\ToyNew.cpp.obj -c C:\Users\c3far\Documents\Code\CS142\Final_Exam\ToyNew.cpp

CMakeFiles/Final_Exam.dir/ToyNew.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Final_Exam.dir/ToyNew.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\c3far\Documents\Code\CS142\Final_Exam\ToyNew.cpp > CMakeFiles\Final_Exam.dir\ToyNew.cpp.i

CMakeFiles/Final_Exam.dir/ToyNew.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Final_Exam.dir/ToyNew.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\c3far\Documents\Code\CS142\Final_Exam\ToyNew.cpp -o CMakeFiles\Final_Exam.dir\ToyNew.cpp.s

# Object files for target Final_Exam
Final_Exam_OBJECTS = \
"CMakeFiles/Final_Exam.dir/main.cpp.obj" \
"CMakeFiles/Final_Exam.dir/ToyNew.cpp.obj"

# External object files for target Final_Exam
Final_Exam_EXTERNAL_OBJECTS =

Final_Exam.exe: CMakeFiles/Final_Exam.dir/main.cpp.obj
Final_Exam.exe: CMakeFiles/Final_Exam.dir/ToyNew.cpp.obj
Final_Exam.exe: CMakeFiles/Final_Exam.dir/build.make
Final_Exam.exe: CMakeFiles/Final_Exam.dir/linklibs.rsp
Final_Exam.exe: CMakeFiles/Final_Exam.dir/objects1.rsp
Final_Exam.exe: CMakeFiles/Final_Exam.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\c3far\Documents\Code\CS142\Final_Exam\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Final_Exam.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Final_Exam.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Final_Exam.dir/build: Final_Exam.exe
.PHONY : CMakeFiles/Final_Exam.dir/build

CMakeFiles/Final_Exam.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Final_Exam.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Final_Exam.dir/clean

CMakeFiles/Final_Exam.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\c3far\Documents\Code\CS142\Final_Exam C:\Users\c3far\Documents\Code\CS142\Final_Exam C:\Users\c3far\Documents\Code\CS142\Final_Exam\cmake-build-debug C:\Users\c3far\Documents\Code\CS142\Final_Exam\cmake-build-debug C:\Users\c3far\Documents\Code\CS142\Final_Exam\cmake-build-debug\CMakeFiles\Final_Exam.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Final_Exam.dir/depend
