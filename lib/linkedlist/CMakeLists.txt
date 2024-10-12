cmake_minimum_required(VERSION 3.10...3.21)

project(linkedlist)

set(CMAKE_C_STANDARD 17)

add_library(linkedlist STATIC
    include/linkedlist.h
    src/linkedlist.c
)

# target_include_directories 
#[=[ 

헤더파일들이 위치한 폴더는 제각기 다를 수 있습니다. 
C 혹은 C++ 프로젝트에서 외부에 공개되는 헤더파일과 공개되지 않는 헤더파일이 다른 위치에 배치되는 것은 흔한 일입니다.

#=]=]

target_include_directories(linkedlist
PUBLIC
    include
)
# 여기서 허들 걸린것. CMake 빌드 하는법.

#[=[

https://sonseungha.tistory.com/373
https://gist.github.com/yuntaek/589a16002ccaf07cdcabf8bdd132f71f


# CMAKE_SOURCE_DIR : 최상위 CMakeLists.txt가 위치한 폴더를 의미한다.
# CMAKE_CURRENT_SOURCE_DIR 는 현재 해석 중인 CMakeLists.txt가 위치한 폴더를 의미한다.
# PROJECT_NAME[설명]project() 명령으로 정의한 프로젝트 이름이다.
# PROJECT_SOURCE_DIR : 가장 최근 PROJECT() 명령의 source directory이다.
#]=]