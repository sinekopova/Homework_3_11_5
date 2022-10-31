cmake_minimum_required(VERSION 3.16)

project(Homework_3_11_5)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

set (FIGURES_SRC 
		Figure.cpp
		Triangle.cpp
		Quadrangle.cpp
		RightTriangle.cpp
		IsoscelesTriangle.cpp
		EquilateralTriangle.cpp
		Parallelogram.cpp
		Rectangle.cpp
		Rhomb.cpp
		Square.cpp
)

set (FIGURES_HDR
		Figure.h
		Triangle.h
		Quadrangle.h
		RightTriangle.h
		IsoscelesTriangle.h
		EquilateralTriangle.h
		Parallelogram.h
		Rectangle.h
		Rhomb.h
		Square.h
		Figures.h
)


add_library(Figures SHARED ${FIGURES_SRC} ${FIGURES_HDR})

set (SOURCES 
		Functions.cpp
		Homework_3_11_5.cpp
)

set (HEADERS
		Functions.h
)
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
target_link_libraries(${PROJECT_NAME} Figures)