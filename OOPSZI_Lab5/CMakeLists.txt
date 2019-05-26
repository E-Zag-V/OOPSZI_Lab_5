# CMakeList.txt: проект CMake для OOPSZI_Lab5; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

set(HEADERS "headers/Queue.hpp")
set(SOURCES "src/main.cpp")

add_executable(main ${HEADERS} ${SOURCES})
