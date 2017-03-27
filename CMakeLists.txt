project(ViSP-Projection)

cmake_minimum_required(VERSION 2.6)

find_package(VISP REQUIRED visp_core)

include_directories(${VISP_INCLUDE_DIRS})

add_library(test-point-projection SHARED test-point-projection.cpp)
target_link_libraries(test-point-projection ${VISP_LIBRARIES})
