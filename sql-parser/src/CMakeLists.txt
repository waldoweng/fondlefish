include_directories(${CMAKE_SOURCE_DIR}/include/ast)
include_directories(${CMAKE_SOURCE_DIR}/build/src)

AUX_SOURCE_DIRECTORY(${CMAKE_CURRENT_SOURCE_DIR} source)

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

target_compile_options(pymsql PUBLIC -Wall -Wextra)
target_link_libraries(pymsql PUBLIC libast)
target_link_libraries(pymsql PUBLIC coverage_config)