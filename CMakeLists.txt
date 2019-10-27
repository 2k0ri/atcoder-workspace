cmake_minimum_required(VERSION 3.15)
project(atcoder_workspace CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-g -Wall -pedantic-errors -fsanitize=undefined -Wno-deprecated -Wno-unneeded-internal-declaration")

# use ccache
option(CCACHE_ENABLE "If the command ccache is avilable, use it for compile." ON)
find_program(CCACHE_EXE ccache)
if(CCACHE_EXE)
  if(CCACHE_ENABLE)
    message(STATUS "Enable ccache")
    set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE "${CCACHE_EXE}")
  endif()
endif()

MACRO(CREATE_BINARY target_dir)
    FILE(GLOB_RECURSE paths RELATIVE ${target_dir} ${target_dir}/*/*.cpp)
    FOREACH(path ${paths})
        SET(binary_name "")
        STRING(REGEX MATCH [^\/]+\/[^\/]+\/[^\/]+\.cpp$ binary_name ${path})
        STRING(REGEX REPLACE "\/" "_" binary_name ${binary_name})
        STRING(REGEX REPLACE "\.cpp" "" binary_name ${binary_name})
        get_filename_component(src_dir ${path} DIRECTORY)
        ADD_EXECUTABLE(${binary_name} ${path})
        # copy binary to src dir for evaluating with `atcoder-tools test`
        add_custom_command(TARGET ${binary_name} POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy "$<TARGET_FILE_DIR:${binary_name}>/${binary_name}" "${PROJECT_SOURCE_DIR}/${src_dir}/a.out")
    ENDFOREACH()
ENDMACRO()

CREATE_BINARY(${CMAKE_CURRENT_SOURCE_DIR})
