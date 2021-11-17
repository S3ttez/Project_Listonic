cmake_minimum_required(VERSION 3.20)
project(Listonic)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
add_subdirectory(test)

set(PROJECT_HEADERS
        header.h
        Observer.h
        Subject.h
        ListMgr.h
        ListMgr.cpp
        Items.h
        Items.cpp
        ItemMgr.h
        ItemMgr.cpp
        )
set(PROJECT_SOURCES
        main.cpp
        ListMgr.cpp ItemMgr.cpp Items.cpp)
add_executable(Listonic ${PROJECT_SOURCES} ${PROJECT_HEADERS})