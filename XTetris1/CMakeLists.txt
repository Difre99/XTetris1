cmake_minimum_required(VERSION 3.20)
project(XTetris1 C)

set(CMAKE_C_STANDARD 99)

add_executable(XTetris1 main.c tetrisField.c tetrisField.h tetrisFigure.h tetrisFigure.c gameManager.c gameManager.h)
