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

CMakeFiles/project.dir/Commands/OpenServerCommand.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Commands/OpenServerCommand.cpp.o: ../Commands/OpenServerCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/project.dir/Commands/OpenServerCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Commands/OpenServerCommand.cpp.o -c /home/bentzirozen/Desktop/project/Commands/OpenServerCommand.cpp

CMakeFiles/project.dir/Commands/OpenServerCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Commands/OpenServerCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/Commands/OpenServerCommand.cpp > CMakeFiles/project.dir/Commands/OpenServerCommand.cpp.i

CMakeFiles/project.dir/Commands/OpenServerCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Commands/OpenServerCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/Commands/OpenServerCommand.cpp -o CMakeFiles/project.dir/Commands/OpenServerCommand.cpp.s

CMakeFiles/project.dir/Interpeter/Lexer.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Interpeter/Lexer.cpp.o: ../Interpeter/Lexer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/project.dir/Interpeter/Lexer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Interpeter/Lexer.cpp.o -c /home/bentzirozen/Desktop/project/Interpeter/Lexer.cpp

CMakeFiles/project.dir/Interpeter/Lexer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Interpeter/Lexer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/Interpeter/Lexer.cpp > CMakeFiles/project.dir/Interpeter/Lexer.cpp.i

CMakeFiles/project.dir/Interpeter/Lexer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Interpeter/Lexer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/Interpeter/Lexer.cpp -o CMakeFiles/project.dir/Interpeter/Lexer.cpp.s

CMakeFiles/project.dir/Interpeter/Parser.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Interpeter/Parser.cpp.o: ../Interpeter/Parser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/project.dir/Interpeter/Parser.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Interpeter/Parser.cpp.o -c /home/bentzirozen/Desktop/project/Interpeter/Parser.cpp

CMakeFiles/project.dir/Interpeter/Parser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Interpeter/Parser.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/Interpeter/Parser.cpp > CMakeFiles/project.dir/Interpeter/Parser.cpp.i

CMakeFiles/project.dir/Interpeter/Parser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Interpeter/Parser.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/Interpeter/Parser.cpp -o CMakeFiles/project.dir/Interpeter/Parser.cpp.s

CMakeFiles/project.dir/Commands/ConnectCommand.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Commands/ConnectCommand.cpp.o: ../Commands/ConnectCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/project.dir/Commands/ConnectCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Commands/ConnectCommand.cpp.o -c /home/bentzirozen/Desktop/project/Commands/ConnectCommand.cpp

CMakeFiles/project.dir/Commands/ConnectCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Commands/ConnectCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/Commands/ConnectCommand.cpp > CMakeFiles/project.dir/Commands/ConnectCommand.cpp.i

CMakeFiles/project.dir/Commands/ConnectCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Commands/ConnectCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/Commands/ConnectCommand.cpp -o CMakeFiles/project.dir/Commands/ConnectCommand.cpp.s

CMakeFiles/project.dir/Server_and_Client/DataReaderServer.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Server_and_Client/DataReaderServer.cpp.o: ../Server\ and\ Client/DataReaderServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/project.dir/Server_and_Client/DataReaderServer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Server_and_Client/DataReaderServer.cpp.o -c "/home/bentzirozen/Desktop/project/Server and Client/DataReaderServer.cpp"

CMakeFiles/project.dir/Server_and_Client/DataReaderServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Server_and_Client/DataReaderServer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/bentzirozen/Desktop/project/Server and Client/DataReaderServer.cpp" > CMakeFiles/project.dir/Server_and_Client/DataReaderServer.cpp.i

CMakeFiles/project.dir/Server_and_Client/DataReaderServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Server_and_Client/DataReaderServer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/bentzirozen/Desktop/project/Server and Client/DataReaderServer.cpp" -o CMakeFiles/project.dir/Server_and_Client/DataReaderServer.cpp.s

CMakeFiles/project.dir/Commands/DefineVarCommand.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Commands/DefineVarCommand.cpp.o: ../Commands/DefineVarCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/project.dir/Commands/DefineVarCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Commands/DefineVarCommand.cpp.o -c /home/bentzirozen/Desktop/project/Commands/DefineVarCommand.cpp

CMakeFiles/project.dir/Commands/DefineVarCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Commands/DefineVarCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/Commands/DefineVarCommand.cpp > CMakeFiles/project.dir/Commands/DefineVarCommand.cpp.i

CMakeFiles/project.dir/Commands/DefineVarCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Commands/DefineVarCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/Commands/DefineVarCommand.cpp -o CMakeFiles/project.dir/Commands/DefineVarCommand.cpp.s

CMakeFiles/project.dir/Commands/ConditionParser.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Commands/ConditionParser.cpp.o: ../Commands/ConditionParser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/project.dir/Commands/ConditionParser.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Commands/ConditionParser.cpp.o -c /home/bentzirozen/Desktop/project/Commands/ConditionParser.cpp

CMakeFiles/project.dir/Commands/ConditionParser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Commands/ConditionParser.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/Commands/ConditionParser.cpp > CMakeFiles/project.dir/Commands/ConditionParser.cpp.i

CMakeFiles/project.dir/Commands/ConditionParser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Commands/ConditionParser.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/Commands/ConditionParser.cpp -o CMakeFiles/project.dir/Commands/ConditionParser.cpp.s

CMakeFiles/project.dir/Commands/IfCommand.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Commands/IfCommand.cpp.o: ../Commands/IfCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/project.dir/Commands/IfCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Commands/IfCommand.cpp.o -c /home/bentzirozen/Desktop/project/Commands/IfCommand.cpp

CMakeFiles/project.dir/Commands/IfCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Commands/IfCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/Commands/IfCommand.cpp > CMakeFiles/project.dir/Commands/IfCommand.cpp.i

CMakeFiles/project.dir/Commands/IfCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Commands/IfCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/Commands/IfCommand.cpp -o CMakeFiles/project.dir/Commands/IfCommand.cpp.s

CMakeFiles/project.dir/Commands/LoopCommand.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Commands/LoopCommand.cpp.o: ../Commands/LoopCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/project.dir/Commands/LoopCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Commands/LoopCommand.cpp.o -c /home/bentzirozen/Desktop/project/Commands/LoopCommand.cpp

CMakeFiles/project.dir/Commands/LoopCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Commands/LoopCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/Commands/LoopCommand.cpp > CMakeFiles/project.dir/Commands/LoopCommand.cpp.i

CMakeFiles/project.dir/Commands/LoopCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Commands/LoopCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/Commands/LoopCommand.cpp -o CMakeFiles/project.dir/Commands/LoopCommand.cpp.s

CMakeFiles/project.dir/Server_and_Client/DataWriterClient.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Server_and_Client/DataWriterClient.cpp.o: ../Server\ and\ Client/DataWriterClient.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/project.dir/Server_and_Client/DataWriterClient.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Server_and_Client/DataWriterClient.cpp.o -c "/home/bentzirozen/Desktop/project/Server and Client/DataWriterClient.cpp"

CMakeFiles/project.dir/Server_and_Client/DataWriterClient.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Server_and_Client/DataWriterClient.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/bentzirozen/Desktop/project/Server and Client/DataWriterClient.cpp" > CMakeFiles/project.dir/Server_and_Client/DataWriterClient.cpp.i

CMakeFiles/project.dir/Server_and_Client/DataWriterClient.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Server_and_Client/DataWriterClient.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/bentzirozen/Desktop/project/Server and Client/DataWriterClient.cpp" -o CMakeFiles/project.dir/Server_and_Client/DataWriterClient.cpp.s

CMakeFiles/project.dir/Expression/Div.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Expression/Div.cpp.o: ../Expression/Div.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/project.dir/Expression/Div.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Expression/Div.cpp.o -c /home/bentzirozen/Desktop/project/Expression/Div.cpp

CMakeFiles/project.dir/Expression/Div.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Expression/Div.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/Expression/Div.cpp > CMakeFiles/project.dir/Expression/Div.cpp.i

CMakeFiles/project.dir/Expression/Div.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Expression/Div.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/Expression/Div.cpp -o CMakeFiles/project.dir/Expression/Div.cpp.s

CMakeFiles/project.dir/Expression/Plus.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Expression/Plus.cpp.o: ../Expression/Plus.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/project.dir/Expression/Plus.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Expression/Plus.cpp.o -c /home/bentzirozen/Desktop/project/Expression/Plus.cpp

CMakeFiles/project.dir/Expression/Plus.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Expression/Plus.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/Expression/Plus.cpp > CMakeFiles/project.dir/Expression/Plus.cpp.i

CMakeFiles/project.dir/Expression/Plus.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Expression/Plus.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/Expression/Plus.cpp -o CMakeFiles/project.dir/Expression/Plus.cpp.s

CMakeFiles/project.dir/Expression/Minus.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Expression/Minus.cpp.o: ../Expression/Minus.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/project.dir/Expression/Minus.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Expression/Minus.cpp.o -c /home/bentzirozen/Desktop/project/Expression/Minus.cpp

CMakeFiles/project.dir/Expression/Minus.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Expression/Minus.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/Expression/Minus.cpp > CMakeFiles/project.dir/Expression/Minus.cpp.i

CMakeFiles/project.dir/Expression/Minus.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Expression/Minus.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/Expression/Minus.cpp -o CMakeFiles/project.dir/Expression/Minus.cpp.s

CMakeFiles/project.dir/Expression/Mul.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Expression/Mul.cpp.o: ../Expression/Mul.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/project.dir/Expression/Mul.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Expression/Mul.cpp.o -c /home/bentzirozen/Desktop/project/Expression/Mul.cpp

CMakeFiles/project.dir/Expression/Mul.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Expression/Mul.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/Expression/Mul.cpp > CMakeFiles/project.dir/Expression/Mul.cpp.i

CMakeFiles/project.dir/Expression/Mul.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Expression/Mul.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/Expression/Mul.cpp -o CMakeFiles/project.dir/Expression/Mul.cpp.s

CMakeFiles/project.dir/Commands/SleepCommand.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Commands/SleepCommand.cpp.o: ../Commands/SleepCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/project.dir/Commands/SleepCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Commands/SleepCommand.cpp.o -c /home/bentzirozen/Desktop/project/Commands/SleepCommand.cpp

CMakeFiles/project.dir/Commands/SleepCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Commands/SleepCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/Commands/SleepCommand.cpp > CMakeFiles/project.dir/Commands/SleepCommand.cpp.i

CMakeFiles/project.dir/Commands/SleepCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Commands/SleepCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/Commands/SleepCommand.cpp -o CMakeFiles/project.dir/Commands/SleepCommand.cpp.s

CMakeFiles/project.dir/Commands/PrintCommand.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Commands/PrintCommand.cpp.o: ../Commands/PrintCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/project.dir/Commands/PrintCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Commands/PrintCommand.cpp.o -c /home/bentzirozen/Desktop/project/Commands/PrintCommand.cpp

CMakeFiles/project.dir/Commands/PrintCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Commands/PrintCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/Commands/PrintCommand.cpp > CMakeFiles/project.dir/Commands/PrintCommand.cpp.i

CMakeFiles/project.dir/Commands/PrintCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Commands/PrintCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/Commands/PrintCommand.cpp -o CMakeFiles/project.dir/Commands/PrintCommand.cpp.s

CMakeFiles/project.dir/Commands/ExpressionCommand.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Commands/ExpressionCommand.cpp.o: ../Commands/ExpressionCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building CXX object CMakeFiles/project.dir/Commands/ExpressionCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Commands/ExpressionCommand.cpp.o -c /home/bentzirozen/Desktop/project/Commands/ExpressionCommand.cpp

CMakeFiles/project.dir/Commands/ExpressionCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Commands/ExpressionCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/Commands/ExpressionCommand.cpp > CMakeFiles/project.dir/Commands/ExpressionCommand.cpp.i

CMakeFiles/project.dir/Commands/ExpressionCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Commands/ExpressionCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/Commands/ExpressionCommand.cpp -o CMakeFiles/project.dir/Commands/ExpressionCommand.cpp.s

CMakeFiles/project.dir/Expression/Shuntingyard.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Expression/Shuntingyard.cpp.o: ../Expression/Shuntingyard.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Building CXX object CMakeFiles/project.dir/Expression/Shuntingyard.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Expression/Shuntingyard.cpp.o -c /home/bentzirozen/Desktop/project/Expression/Shuntingyard.cpp

CMakeFiles/project.dir/Expression/Shuntingyard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Expression/Shuntingyard.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/Expression/Shuntingyard.cpp > CMakeFiles/project.dir/Expression/Shuntingyard.cpp.i

CMakeFiles/project.dir/Expression/Shuntingyard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Expression/Shuntingyard.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/Expression/Shuntingyard.cpp -o CMakeFiles/project.dir/Expression/Shuntingyard.cpp.s

CMakeFiles/project.dir/Expression/Number.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Expression/Number.cpp.o: ../Expression/Number.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Building CXX object CMakeFiles/project.dir/Expression/Number.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Expression/Number.cpp.o -c /home/bentzirozen/Desktop/project/Expression/Number.cpp

CMakeFiles/project.dir/Expression/Number.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Expression/Number.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/Expression/Number.cpp > CMakeFiles/project.dir/Expression/Number.cpp.i

CMakeFiles/project.dir/Expression/Number.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Expression/Number.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/Expression/Number.cpp -o CMakeFiles/project.dir/Expression/Number.cpp.s

CMakeFiles/project.dir/Commands/AssignCommand.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Commands/AssignCommand.cpp.o: ../Commands/AssignCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_21) "Building CXX object CMakeFiles/project.dir/Commands/AssignCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Commands/AssignCommand.cpp.o -c /home/bentzirozen/Desktop/project/Commands/AssignCommand.cpp

CMakeFiles/project.dir/Commands/AssignCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Commands/AssignCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/Commands/AssignCommand.cpp > CMakeFiles/project.dir/Commands/AssignCommand.cpp.i

CMakeFiles/project.dir/Commands/AssignCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Commands/AssignCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/Commands/AssignCommand.cpp -o CMakeFiles/project.dir/Commands/AssignCommand.cpp.s

CMakeFiles/project.dir/Expression/BinaryExpression.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Expression/BinaryExpression.cpp.o: ../Expression/BinaryExpression.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_22) "Building CXX object CMakeFiles/project.dir/Expression/BinaryExpression.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Expression/BinaryExpression.cpp.o -c /home/bentzirozen/Desktop/project/Expression/BinaryExpression.cpp

CMakeFiles/project.dir/Expression/BinaryExpression.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Expression/BinaryExpression.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bentzirozen/Desktop/project/Expression/BinaryExpression.cpp > CMakeFiles/project.dir/Expression/BinaryExpression.cpp.i

CMakeFiles/project.dir/Expression/BinaryExpression.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Expression/BinaryExpression.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bentzirozen/Desktop/project/Expression/BinaryExpression.cpp -o CMakeFiles/project.dir/Expression/BinaryExpression.cpp.s

# Object files for target project
project_OBJECTS = \
"CMakeFiles/project.dir/main.cpp.o" \
"CMakeFiles/project.dir/Commands/OpenServerCommand.cpp.o" \
"CMakeFiles/project.dir/Interpeter/Lexer.cpp.o" \
"CMakeFiles/project.dir/Interpeter/Parser.cpp.o" \
"CMakeFiles/project.dir/Commands/ConnectCommand.cpp.o" \
"CMakeFiles/project.dir/Server_and_Client/DataReaderServer.cpp.o" \
"CMakeFiles/project.dir/Commands/DefineVarCommand.cpp.o" \
"CMakeFiles/project.dir/Commands/ConditionParser.cpp.o" \
"CMakeFiles/project.dir/Commands/IfCommand.cpp.o" \
"CMakeFiles/project.dir/Commands/LoopCommand.cpp.o" \
"CMakeFiles/project.dir/Server_and_Client/DataWriterClient.cpp.o" \
"CMakeFiles/project.dir/Expression/Div.cpp.o" \
"CMakeFiles/project.dir/Expression/Plus.cpp.o" \
"CMakeFiles/project.dir/Expression/Minus.cpp.o" \
"CMakeFiles/project.dir/Expression/Mul.cpp.o" \
"CMakeFiles/project.dir/Commands/SleepCommand.cpp.o" \
"CMakeFiles/project.dir/Commands/PrintCommand.cpp.o" \
"CMakeFiles/project.dir/Commands/ExpressionCommand.cpp.o" \
"CMakeFiles/project.dir/Expression/Shuntingyard.cpp.o" \
"CMakeFiles/project.dir/Expression/Number.cpp.o" \
"CMakeFiles/project.dir/Commands/AssignCommand.cpp.o" \
"CMakeFiles/project.dir/Expression/BinaryExpression.cpp.o"

# External object files for target project
project_EXTERNAL_OBJECTS =

project: CMakeFiles/project.dir/main.cpp.o
project: CMakeFiles/project.dir/Commands/OpenServerCommand.cpp.o
project: CMakeFiles/project.dir/Interpeter/Lexer.cpp.o
project: CMakeFiles/project.dir/Interpeter/Parser.cpp.o
project: CMakeFiles/project.dir/Commands/ConnectCommand.cpp.o
project: CMakeFiles/project.dir/Server_and_Client/DataReaderServer.cpp.o
project: CMakeFiles/project.dir/Commands/DefineVarCommand.cpp.o
project: CMakeFiles/project.dir/Commands/ConditionParser.cpp.o
project: CMakeFiles/project.dir/Commands/IfCommand.cpp.o
project: CMakeFiles/project.dir/Commands/LoopCommand.cpp.o
project: CMakeFiles/project.dir/Server_and_Client/DataWriterClient.cpp.o
project: CMakeFiles/project.dir/Expression/Div.cpp.o
project: CMakeFiles/project.dir/Expression/Plus.cpp.o
project: CMakeFiles/project.dir/Expression/Minus.cpp.o
project: CMakeFiles/project.dir/Expression/Mul.cpp.o
project: CMakeFiles/project.dir/Commands/SleepCommand.cpp.o
project: CMakeFiles/project.dir/Commands/PrintCommand.cpp.o
project: CMakeFiles/project.dir/Commands/ExpressionCommand.cpp.o
project: CMakeFiles/project.dir/Expression/Shuntingyard.cpp.o
project: CMakeFiles/project.dir/Expression/Number.cpp.o
project: CMakeFiles/project.dir/Commands/AssignCommand.cpp.o
project: CMakeFiles/project.dir/Expression/BinaryExpression.cpp.o
project: CMakeFiles/project.dir/build.make
project: CMakeFiles/project.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/bentzirozen/Desktop/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_23) "Linking CXX executable project"
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

