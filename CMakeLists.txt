CMAKE_MINIMUM_REQUIRED (VERSION 3.0)
PROJECT (main)

# files
INCLUDE_DIRECTORIES(/usr/include/yaml-cpp include)
FILE (GLOB SOURCES "src/*.cpp")

# Compiler flags
SET (CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")
SET (CMAKE_CXX_COMPILER             "/usr/bin/clang++")
SET (CMAKE_CXX_FLAGS                "-std=c++11 -stdlib=libc++ -Wall")
SET (CMAKE_CXX_FLAGS_DEBUG          "-g")
SET (CMAKE_CXX_FLAGS_MINSIZEREL     "-Os -DNDEBUG")
SET (CMAKE_CXX_FLAGS_RELEASE        "-O4 -DNDEBUG")
SET (CMAKE_CXX_FLAGS_RELWITHDEBINFO "-O2 -g")

SET (CMAKE_AR      "/usr/bin/llvm-ar")
SET (CMAKE_LINKER  "/usr/bin/llvm-ld")
SET (CMAKE_NM      "/usr/bin/llvm-nm")
SET (CMAKE_OBJDUMP "/usr/bin/llvm-objdump")
SET (CMAKE_RANLIB  "/usr/bin/llvm-ranlib")

# Building
ADD_EXECUTABLE (main ${SOURCES})
TARGET_LINK_LIBRARIES (main yaml-cpp)
