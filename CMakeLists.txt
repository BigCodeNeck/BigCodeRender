cmake_minimum_required(VERSION 3.10)
project(BigCodeRender)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add source files
file(GLOB_RECURSE SRC_FILES src/*.cpp)
file(GLOB_RECURSE HEADER_FILES include/*.h)

# Create the library target
add_library(BigCodeRender STATIC ${SRC_FILES} ${HEADER_FILES})

# Include directories
target_include_directories(BigCodeRender PUBLIC include)

# Add examples (optional: adjust as you add them)
add_executable(example_basic examples/basic_example.cpp)
target_link_libraries(example_basic BigCodeRender)
