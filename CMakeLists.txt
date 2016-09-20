cmake_minimum_required (VERSION 3.0)
project (hello)
include_directories(include)
file(GLOB SOURCES "src/*.cpp")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

add_executable (hello ${SOURCES})


