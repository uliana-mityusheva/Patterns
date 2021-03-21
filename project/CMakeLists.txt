cmake_minimum_required(VERSION 3.17)
project(project)

set(CMAKE_CXX_STANDARD 14)

add_executable(project main.cpp Food.cpp Food.h MyPet.cpp MyPet.h Commands.cpp Commands.h Toy.cpp Toy.h Print.cpp Print.h)