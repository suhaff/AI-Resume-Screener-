cmake_minimum_required(VERSION 3.10)
project(AI_Resume_Screener)

set(CMAKE_CXX_STANDARD 17)

find_package(Boost REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})

add_executable(resume_screener src/main.cpp src/resume_parser.cpp src/scoring.cpp src/database.cpp)

target_link_libraries(resume_screener sqlite3)
