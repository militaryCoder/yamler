cmake_minimum_required(VERSION 3.1)

project(yamler LANGUAGES CXX)

add_library(yamler STATIC
    Array.hpp
    Expression.hpp
    Pair.hpp
    Value.hpp
)