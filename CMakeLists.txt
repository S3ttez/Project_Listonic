cmake_minimum_required(VERSION 3.17)
project(Listonic)

set(CMAKE_CXX_STANDARD 14)

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