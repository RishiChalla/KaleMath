cmake_minimum_required(VERSION 3.0.0)
project(KaleMath VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB_RECURSE sources CONFIGURE_DEPENDS src/*.cpp src/*.hpp)
add_library(KaleMath STATIC ${sources})
source_group(TREE "${CMAKE_CURRENT_LIST_DIR}" FILES ${sources})

target_include_directories(KaleMath PUBLIC src/)
target_include_directories(KaleMath INTERFACE src/)

# Debug Macros
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
	target_compile_definitions(KaleMath PUBLIC KLMATH_DEBUG)
endif()
