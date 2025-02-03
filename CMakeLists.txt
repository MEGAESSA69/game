cmake_minimum_required(VERSION 3.10)
project(essa)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Building source
file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(essa ${SRC_FILES})

# Deleteing main and building tests
file(GLOB_RECURSE MAIN_SRC_FILES src/main.cpp src/DisplayManager.cpp src/PlayerController.cpp)
list(REMOVE_ITEM SRC_FILES ${MAIN_SRC_FILES})
file(GLOB_RECURSE TEST_FILES tests/*.cpp)
add_executable(essa_tests ${TEST_FILES} ${SRC_FILES})

# Find and link SFML
find_package(SFML 2.5 COMPONENTS graphics audio window system REQUIRED)
target_link_libraries(essa PRIVATE sfml-graphics sfml-audio sfml-window sfml-system)

# Link with Google Test
find_package(GTest REQUIRED)
target_link_libraries(essa_tests GTest::GTest GTest::Main)
