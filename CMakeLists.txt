cmake_minimum_required (VERSION 3.20)

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_EXPORT_COMPILE_COMMANDS ON)

include (CMakePrintHelpers)

project (main)

set (PROJECT_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set (SRC_DIR "${PROJECT_DIR}/src")
set (BIN_DIR "${PROJECT_DIR}/bin")
set (RES_DIR "${PROJECT_DIR}/res")

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

file (GLOB SOURCES "${SRC_DIR}/*.cpp")

find_package (OpenGL REQUIRED)
find_package (unofficial-curlpp CONFIG REQUIRED)

add_executable (
	main
	${SOURCES}
)

target_link_libraries (main PRIVATE unofficial::curlpp::curlpp)
