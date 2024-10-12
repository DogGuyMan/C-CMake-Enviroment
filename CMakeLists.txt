cmake_minimum_required(VERSION 3.14.0)
project(Project)
set(CMAKE_C_STANDARD 17)

add_subdirectory(./lib/linkedlist)

add_executable(Project
    src/main.c
)
target_link_libraries(Project
    linkedlist
)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_custom_target(run_with_leaks
        DEPENDS Project
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    )
endif()