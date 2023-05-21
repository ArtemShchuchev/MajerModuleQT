cmake_minimum_required(VERSION 3.14)

project(MajerModuleQT LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core)
find_package(Qt6 REQUIRED COMPONENTS Network)
find_package(Qt6 REQUIRED COMPONENTS Sql)

add_executable(MajerModuleQT
  main.cpp
)
target_link_libraries(MajerModuleQT PRIVATE
    Qt6::Core
    Qt6::Network
    Qt6::Sql
)

#install(TARGETS MajerModuleQT
#    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
