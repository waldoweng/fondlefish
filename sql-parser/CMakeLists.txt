if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR})
    message(FATAL_ERROR "DO NOT BUILD in-tree.")
endif()

cmake_minimum_required (VERSION 3.5.0)

project(sql-parser)

set( CMAKE_EXPORT_COMPILE_COMMANDS ON )
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O0 -ggdb -Wall -Wno-deprecated-register")

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../include/ast)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

AUX_SOURCE_DIRECTORY(${CMAKE_SOURCE_DIR} source)

add_subdirectory(ast)

find_program(FLEX "flex")
if(FLEX)
    add_custom_command(
        OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/pmysql.cc ${CMAKE_CURRENT_BINARY_DIR}/pmysql.hh
        COMMAND flex -o ${CMAKE_CURRENT_BINARY_DIR}/pmysql.cc --header-file=${CMAKE_CURRENT_BINARY_DIR}/pmysql.hh ${CMAKE_CURRENT_SOURCE_DIR}/pmysql.l
        DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/pmysql.l
        )
else()
    message(FATAL_ERROR "FLEX NOT FOUND.")
endif()

find_program(BISON "bison")
if(BISON)
    add_custom_command(
        OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/pmysql.tab.cc ${CMAKE_CURRENT_BINARY_DIR}/pmysql.tab.hh
        COMMAND bison -vd ${CMAKE_CURRENT_SOURCE_DIR}/pmysql.yy
        DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/pmysql.yy
        )
else()
    message(FATAL_ERROR "BISON NOT FOUND.")
endif()
 
add_executable(pymsql 
    ${source} 
    ${CMAKE_CURRENT_BINARY_DIR}/pmysql.tab.cc 
    ${CMAKE_CURRENT_BINARY_DIR}/pmysql.tab.hh
    ${CMAKE_CURRENT_BINARY_DIR}/pmysql.cc 
    ${CMAKE_CURRENT_BINARY_DIR}/pmysql.hh
    )

target_link_libraries(pymsql LINK_PUBLIC libast)
