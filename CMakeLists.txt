cmake_minimum_required(VERSION 3.25)
project(OOP)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


include (FetchContent)
FetchContent_Declare(
    fmt
    GIT_REPOSITORY https://github.com/fmtlib/fmt.git
    GIT_TAG 10.1.1
)

FetchContent_MakeAvailable(fmt)

add_executable(OOP main.cpp machine.h machine.cpp mercedes.h mercedes.cpp amg.h amg.cpp maybach.h maybach.cpp)
target_link_libraries(OOP PRIVATE fmt::fmt)