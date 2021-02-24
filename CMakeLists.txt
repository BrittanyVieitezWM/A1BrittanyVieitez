cmake_minimum_required(VERSION 3.17)
project(a1_figures)

set(CMAKE_CXX_STANDARD 14)

add_executable(a1_figures src/main.cpp src/FigurePrinter.cpp include/FigurePrinter.h src/TrianglePrinter.cpp include/TrianglePrinter.h src/DiamondPrinter.cpp include/DiamondPrinter.h)