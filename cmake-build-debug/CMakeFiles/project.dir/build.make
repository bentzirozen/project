# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /opt/clion-2018.2.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2018.2.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/bentzirozen/Desktop/project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bentzirozen/Desktop/project/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/project.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/project.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/project.dir/flags.make

CMakeFiles/project.dir/main.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/project.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/main.cpp.o -c /home/bentzirozen/Desktop/project/main.cpp

CMakeFiles/project.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/main.cpp > CMakeFiles/project.dir/main.cpp.i

CMakeFiles/project.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/main.cpp -o CMakeFiles/project.dir/main.cpp.s

CMakeFiles/project.dir/OpenServerCommand.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/OpenServerCommand.cpp.o: ../OpenServerCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/project.dir/OpenServerCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/OpenServerCommand.cpp.o -c /home/bentzirozen/Desktop/project/OpenServerCommand.cpp

CMakeFiles/project.dir/OpenServerCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/OpenServerCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/OpenServerCommand.cpp > CMakeFiles/project.dir/OpenServerCommand.cpp.i

CMakeFiles/project.dir/OpenServerCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/OpenServerCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/OpenServerCommand.cpp -o CMakeFiles/project.dir/OpenServerCommand.cpp.s

CMakeFiles/project.dir/Lexer.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Lexer.cpp.o: ../Lexer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/project.dir/Lexer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Lexer.cpp.o -c /home/bentzirozen/Desktop/project/Lexer.cpp

CMakeFiles/project.dir/Lexer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Lexer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/Lexer.cpp > CMakeFiles/project.dir/Lexer.cpp.i

CMakeFiles/project.dir/Lexer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Lexer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/Lexer.cpp -o CMakeFiles/project.dir/Lexer.cpp.s

CMakeFiles/project.dir/Parser.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Parser.cpp.o: ../Parser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/project.dir/Parser.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Parser.cpp.o -c /home/bentzirozen/Desktop/project/Parser.cpp

CMakeFiles/project.dir/Parser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Parser.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/Parser.cpp > CMakeFiles/project.dir/Parser.cpp.i

CMakeFiles/project.dir/Parser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Parser.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/Parser.cpp -o CMakeFiles/project.dir/Parser.cpp.s

CMakeFiles/project.dir/ConnectCommand.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/ConnectCommand.cpp.o: ../ConnectCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/project.dir/ConnectCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/ConnectCommand.cpp.o -c /home/bentzirozen/Desktop/project/ConnectCommand.cpp

CMakeFiles/project.dir/ConnectCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/ConnectCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/ConnectCommand.cpp > CMakeFiles/project.dir/ConnectCommand.cpp.i

CMakeFiles/project.dir/ConnectCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/ConnectCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/ConnectCommand.cpp -o CMakeFiles/project.dir/ConnectCommand.cpp.s

CMakeFiles/project.dir/DataReaderServer.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/DataReaderServer.cpp.o: ../DataReaderServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/project.dir/DataReaderServer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/DataReaderServer.cpp.o -c /home/bentzirozen/Desktop/project/DataReaderServer.cpp

CMakeFiles/project.dir/DataReaderServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/DataReaderServer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/DataReaderServer.cpp > CMakeFiles/project.dir/DataReaderServer.cpp.i

CMakeFiles/project.dir/DataReaderServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/DataReaderServer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/DataReaderServer.cpp -o CMakeFiles/project.dir/DataReaderServer.cpp.s

CMakeFiles/project.dir/DefineVarCommand.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/DefineVarCommand.cpp.o: ../DefineVarCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/project.dir/DefineVarCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/DefineVarCommand.cpp.o -c /home/bentzirozen/Desktop/project/DefineVarCommand.cpp

CMakeFiles/project.dir/DefineVarCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/DefineVarCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/DefineVarCommand.cpp > CMakeFiles/project.dir/DefineVarCommand.cpp.i

CMakeFiles/project.dir/DefineVarCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/DefineVarCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/DefineVarCommand.cpp -o CMakeFiles/project.dir/DefineVarCommand.cpp.s

CMakeFiles/project.dir/MapDB.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/MapDB.cpp.o: ../MapDB.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/project.dir/MapDB.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/MapDB.cpp.o -c /home/bentzirozen/Desktop/project/MapDB.cpp

CMakeFiles/project.dir/MapDB.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/MapDB.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/MapDB.cpp > CMakeFiles/project.dir/MapDB.cpp.i

CMakeFiles/project.dir/MapDB.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/MapDB.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/MapDB.cpp -o CMakeFiles/project.dir/MapDB.cpp.s

CMakeFiles/project.dir/ConditionParser.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/ConditionParser.cpp.o: ../ConditionParser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/project.dir/ConditionParser.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/ConditionParser.cpp.o -c /home/bentzirozen/Desktop/project/ConditionParser.cpp

CMakeFiles/project.dir/ConditionParser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/ConditionParser.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/ConditionParser.cpp > CMakeFiles/project.dir/ConditionParser.cpp.i

CMakeFiles/project.dir/ConditionParser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/ConditionParser.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/ConditionParser.cpp -o CMakeFiles/project.dir/ConditionParser.cpp.s

CMakeFiles/project.dir/IfCommand.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/IfCommand.cpp.o: ../IfCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/project.dir/IfCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/IfCommand.cpp.o -c /home/bentzirozen/Desktop/project/IfCommand.cpp

CMakeFiles/project.dir/IfCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/IfCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/IfCommand.cpp > CMakeFiles/project.dir/IfCommand.cpp.i

CMakeFiles/project.dir/IfCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/IfCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/IfCommand.cpp -o CMakeFiles/project.dir/IfCommand.cpp.s

CMakeFiles/project.dir/LoopCommand.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/LoopCommand.cpp.o: ../LoopCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/project.dir/LoopCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/LoopCommand.cpp.o -c /home/bentzirozen/Desktop/project/LoopCommand.cpp

CMakeFiles/project.dir/LoopCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/LoopCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/LoopCommand.cpp > CMakeFiles/project.dir/LoopCommand.cpp.i

CMakeFiles/project.dir/LoopCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/LoopCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/LoopCommand.cpp -o CMakeFiles/project.dir/LoopCommand.cpp.s

CMakeFiles/project.dir/DataWriterClient.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/DataWriterClient.cpp.o: ../DataWriterClient.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/project.dir/DataWriterClient.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/DataWriterClient.cpp.o -c /home/bentzirozen/Desktop/project/DataWriterClient.cpp

CMakeFiles/project.dir/DataWriterClient.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/DataWriterClient.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/DataWriterClient.cpp > CMakeFiles/project.dir/DataWriterClient.cpp.i

CMakeFiles/project.dir/DataWriterClient.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/DataWriterClient.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/DataWriterClient.cpp -o CMakeFiles/project.dir/DataWriterClient.cpp.s

CMakeFiles/project.dir/Div.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Div.cpp.o: ../Div.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/project.dir/Div.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Div.cpp.o -c /home/bentzirozen/Desktop/project/Div.cpp

CMakeFiles/project.dir/Div.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Div.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/Div.cpp > CMakeFiles/project.dir/Div.cpp.i

CMakeFiles/project.dir/Div.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Div.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/Div.cpp -o CMakeFiles/project.dir/Div.cpp.s

CMakeFiles/project.dir/Plus.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Plus.cpp.o: ../Plus.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/project.dir/Plus.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Plus.cpp.o -c /home/bentzirozen/Desktop/project/Plus.cpp

CMakeFiles/project.dir/Plus.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Plus.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/Plus.cpp > CMakeFiles/project.dir/Plus.cpp.i

CMakeFiles/project.dir/Plus.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Plus.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/Plus.cpp -o CMakeFiles/project.dir/Plus.cpp.s

CMakeFiles/project.dir/Minus.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Minus.cpp.o: ../Minus.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/project.dir/Minus.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Minus.cpp.o -c /home/bentzirozen/Desktop/project/Minus.cpp

CMakeFiles/project.dir/Minus.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Minus.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/Minus.cpp > CMakeFiles/project.dir/Minus.cpp.i

CMakeFiles/project.dir/Minus.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Minus.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/Minus.cpp -o CMakeFiles/project.dir/Minus.cpp.s

CMakeFiles/project.dir/Mul.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Mul.cpp.o: ../Mul.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/project.dir/Mul.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Mul.cpp.o -c /home/bentzirozen/Desktop/project/Mul.cpp

CMakeFiles/project.dir/Mul.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Mul.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/Mul.cpp > CMakeFiles/project.dir/Mul.cpp.i

CMakeFiles/project.dir/Mul.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Mul.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/Mul.cpp -o CMakeFiles/project.dir/Mul.cpp.s

CMakeFiles/project.dir/SleepCommand.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/SleepCommand.cpp.o: ../SleepCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/project.dir/SleepCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/SleepCommand.cpp.o -c /home/bentzirozen/Desktop/project/SleepCommand.cpp

CMakeFiles/project.dir/SleepCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/SleepCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/SleepCommand.cpp > CMakeFiles/project.dir/SleepCommand.cpp.i

CMakeFiles/project.dir/SleepCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/SleepCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/SleepCommand.cpp -o CMakeFiles/project.dir/SleepCommand.cpp.s

CMakeFiles/project.dir/PrintCommand.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/PrintCommand.cpp.o: ../PrintCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building CXX object CMakeFiles/project.dir/PrintCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/PrintCommand.cpp.o -c /home/bentzirozen/Desktop/project/PrintCommand.cpp

CMakeFiles/project.dir/PrintCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/PrintCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/PrintCommand.cpp > CMakeFiles/project.dir/PrintCommand.cpp.i

CMakeFiles/project.dir/PrintCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/PrintCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/PrintCommand.cpp -o CMakeFiles/project.dir/PrintCommand.cpp.s

CMakeFiles/project.dir/ExpressionCommand.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/ExpressionCommand.cpp.o: ../ExpressionCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Building CXX object CMakeFiles/project.dir/ExpressionCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/ExpressionCommand.cpp.o -c /home/bentzirozen/Desktop/project/ExpressionCommand.cpp

CMakeFiles/project.dir/ExpressionCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/ExpressionCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/ExpressionCommand.cpp > CMakeFiles/project.dir/ExpressionCommand.cpp.i

CMakeFiles/project.dir/ExpressionCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/ExpressionCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/ExpressionCommand.cpp -o CMakeFiles/project.dir/ExpressionCommand.cpp.s

# Object files for target project
project_OBJECTS = \
"CMakeFiles/project.dir/main.cpp.o" \
"CMakeFiles/project.dir/OpenServerCommand.cpp.o" \
"CMakeFiles/project.dir/Lexer.cpp.o" \
"CMakeFiles/project.dir/Parser.cpp.o" \
"CMakeFiles/project.dir/ConnectCommand.cpp.o" \
"CMakeFiles/project.dir/DataReaderServer.cpp.o" \
"CMakeFiles/project.dir/DefineVarCommand.cpp.o" \
"CMakeFiles/project.dir/MapDB.cpp.o" \
"CMakeFiles/project.dir/ConditionParser.cpp.o" \
"CMakeFiles/project.dir/IfCommand.cpp.o" \
"CMakeFiles/project.dir/LoopCommand.cpp.o" \
"CMakeFiles/project.dir/DataWriterClient.cpp.o" \
"CMakeFiles/project.dir/Div.cpp.o" \
"CMakeFiles/project.dir/Plus.cpp.o" \
"CMakeFiles/project.dir/Minus.cpp.o" \
"CMakeFiles/project.dir/Mul.cpp.o" \
"CMakeFiles/project.dir/SleepCommand.cpp.o" \
"CMakeFiles/project.dir/PrintCommand.cpp.o" \
"CMakeFiles/project.dir/ExpressionCommand.cpp.o"

# External object files for target project
project_EXTERNAL_OBJECTS =

project: CMakeFiles/project.dir/main.cpp.o
project: CMakeFiles/project.dir/OpenServerCommand.cpp.o
project: CMakeFiles/project.dir/Lexer.cpp.o
project: CMakeFiles/project.dir/Parser.cpp.o
project: CMakeFiles/project.dir/ConnectCommand.cpp.o
project: CMakeFiles/project.dir/DataReaderServer.cpp.o
project: CMakeFiles/project.dir/DefineVarCommand.cpp.o
project: CMakeFiles/project.dir/MapDB.cpp.o
project: CMakeFiles/project.dir/ConditionParser.cpp.o
project: CMakeFiles/project.dir/IfCommand.cpp.o
project: CMakeFiles/project.dir/LoopCommand.cpp.o
project: CMakeFiles/project.dir/DataWriterClient.cpp.o
project: CMakeFiles/project.dir/Div.cpp.o
project: CMakeFiles/project.dir/Plus.cpp.o
project: CMakeFiles/project.dir/Minus.cpp.o
project: CMakeFiles/project.dir/Mul.cpp.o
project: CMakeFiles/project.dir/SleepCommand.cpp.o
project: CMakeFiles/project.dir/PrintCommand.cpp.o
project: CMakeFiles/project.dir/ExpressionCommand.cpp.o
project: CMakeFiles/project.dir/build.make
project: CMakeFiles/project.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Linking CXX executable project"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/project.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/project.dir/build: project

.PHONY : CMakeFiles/project.dir/build

CMakeFiles/project.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/project.dir/cmake_clean.cmake
.PHONY : CMakeFiles/project.dir/clean

CMakeFiles/project.dir/depend:
	cd /home/bentzirozen/Desktop/project/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bentzirozen/Desktop/project /home/bentzirozen/Desktop/project /home/bentzirozen/Desktop/project/cmake-build-debug /home/bentzirozen/Desktop/project/cmake-build-debug /home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles/project.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/project.dir/depend

