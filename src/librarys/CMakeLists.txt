add_library(lib)

target_sources(lib
PRIVATE
 Lib.cpp
PUBLIC
 includes/Lib/Lib.hpp
)

target_include_directories(lib PUBLIC includes)

add_library(Cmake_example::lib ALIAS lib)