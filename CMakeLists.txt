cmake_minimum_required(VERSION 3.17)
project(Listonic)

set(CMAKE_CXX_STANDARD 14)

add_executable(Listonic main.cpp header.h Program.h Observer.h Subject.h ListMgr.h List.h Items.h Client.h PurchaseMgr.h ItemMgr.h)