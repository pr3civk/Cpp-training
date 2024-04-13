cmake_minimum_required(VERSION 3.25)
project(Test)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


include (FetchContent)
FetchContent_Declare(
    fmt
    GIT_REPOSITORY https://github.com/fmtlib/fmt.git
    GIT_TAG 10.1.1
)

FetchContent_MakeAvailable(fmt)

add_executable(Test main.cpp car.cpp car.h ferrari.cpp ferrari.h)
target_link_libraries(Test PRIVATE fmt::fmt)