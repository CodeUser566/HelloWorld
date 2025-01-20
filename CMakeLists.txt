cmake_minimum_required(VERSION 3.21)
project(HelloWorld LANGUAGES CXX)


#глобальные настройки с++ стандарта :
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED on)
set(CMAKE_C_EXTENSIONS off)

add_subdirectory(src/librarys)
add_subdirectory(src/executables)
