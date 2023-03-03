cmake_minimum_required(VERSION 3.24)
project(OnlineBookReader)

set(CMAKE_CXX_STANDARD 17)

add_executable(OnlineBookReader main.cpp SourceFiles/UtilitieFunctions.cpp HeaderFiles/UtilitieFunctions.h SourceFiles/User.cpp HeaderFiles/User.h SourceFiles/Book.cpp HeaderFiles/Book.h SourceFiles/UserManager.cpp HeaderFiles/UserManager.h SourceFiles/BookManager.cpp HeaderFiles/BookManager.h SourceFiles/OnlineReader.cpp HeaderFiles/OnlineReader.h)
