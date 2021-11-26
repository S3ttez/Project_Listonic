cmake_minimum_required(VERSION 3.20)
project(Listonic)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++0x")
add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

set(TEST_SOURCE_FILES RunALL.cpp ItemsTesting.cpp ItemMgrTesting.cpp ListMgrTesting.cpp)
add_executable(ListonicTests ${TEST_SOURCE_FILES})
target_link_libraries(ListonicTests gtest gtest_main)