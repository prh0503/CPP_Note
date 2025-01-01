cmake_minimum_required(VERSION 3.16)

# 定义项目名称、版本号和使用的语言
project(LinkedListProject VERSION 1.0 LANGUAGES CXX)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 添加 include 目录，用于头文件
include_directories(${PROJECT_SOURCE_DIR}/include)

# 自动获取 src 目录下的所有 .cpp 文件
file(GLOB_RECURSE SOURCES "src/*.cpp")

# 添加 main.cpp 文件到编译目标
add_executable(LinkedList ${SOURCES})
