cmake_minimum_required (VERSION 3.0)

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_EXPORT_COMPILE_COMMANDS ON)

include (CMakePrintHelpers)

project (main)

set (PROJECT_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set (SRC_DIR "${PROJECT_DIR}/src")
set (LIB_DIR "${PROJECT_DIR}/lib")
set (BIN_DIR "${PROJECT_DIR}/bin")
set (RES_DIR "${PROJECT_DIR}/res")
set (INC_DIR "${PROJECT_DIR}/inc")
set (VEN_DIR "${PROJECT_DIR}/ven")

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

file (GLOB SOURCES "${SRC_DIR}/*.cpp")
file (GLOB VENDOR "${VEN_DIR}/*.cpp")

add_executable (
	main
	${SOURCES}
	${VENDOR}
)

find_package (OpenGL REQUIRED)
#find_package (CURL REQUIRED)

#add_subdirectory ("${LIB_DIR}/glfw")

target_link_libraries (main CURL::libcurl)

include_directories (INC_DIR)
