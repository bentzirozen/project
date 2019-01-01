cmake_minimum_required(VERSION 3.9)
project(project)

set(CMAKE_CXX_STANDARD 14)
SET(CMAKE_CXX_FLAGS -pthread)

add_executable(project main.cpp Command.h OpenServerCommand.h OpenServerCommand.cpp Lexer.h Lexer.cpp Parser.h Parser.cpp ConnectCommand.h ConnectCommand.cpp DataReaderServer.h DataReaderServer.cpp DefineVarCommand.h DefineVarCommand.cpp ConditionParser.h ConditionParser.cpp IfCommand.h IfCommand.cpp LoopCommand.h LoopCommand.cpp DataWriterClient.h DataWriterClient.cpp BindTable.h BinaryExpression.h Expression.h Div.h Div.cpp Plus.cpp Plus.h Minus.h Minus.cpp Mul.h Mul.cpp SymbolTable.h PathsTable.h SleepCommand.h SleepCommand.cpp PrintCommand.h PrintCommand.cpp ExpressionCommand.h ExpressionCommand.cpp Shuntingyard.h Shuntingyard.cpp Number.h Number.cpp AssignCommand.h AssignCommand.cpp BinaryExpression.cpp)