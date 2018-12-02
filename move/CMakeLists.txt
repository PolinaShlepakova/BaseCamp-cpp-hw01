cmake_minimum_required(VERSION 3.0)

set(PROJECT_NAME "move")
set(LIB_NAME "move_lib")

project(${PROJECT_NAME} VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic")

add_executable(${PROJECT_NAME}
	${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)
set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE CXX)

add_library(${LIB_NAME} STATIC ${CMAKE_CURRENT_SOURCE_DIR}/src/move.h
	${CMAKE_CURRENT_SOURCE_DIR}/src/move.cpp)
set_target_properties(${LIB_NAME} PROPERTIES LINKER_LANGUAGE CXX)

target_link_libraries(${PROJECT_NAME} ${LIB_NAME})
