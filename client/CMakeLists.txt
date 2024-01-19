cmake_minimum_required(VERSION 3.10)
project(ClientApp)
set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE CLIENT_SOURCES "src/*.cpp")

add_executable(ClientMain ${CLIENT_SOURCES})