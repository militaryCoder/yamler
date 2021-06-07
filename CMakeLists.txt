cmake_minimum_required(VERSION 3.1)

project(yamler)

add_library(yamler STATIC
    Expression.hpp
    Pair.hpp
    Value.hpp
)
set_target_properties(yamler PROPERTIES LINKER_LANGUAGE CXX)