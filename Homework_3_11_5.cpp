#include <windows.h>
#include "Figures.h"
#include "Functions.h"



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Figures::Triangle triangle(10, 20, 30, 50, 60);
    printFigureInfo(&triangle);

    Figures::RightTriangle rightTriangle(10, 20, 30, 50);
    printFigureInfo(&rightTriangle);

    Figures::IsoscelesTriangle isoscelesTriangle(10, 20, 50);
    printFigureInfo(&isoscelesTriangle);

    Figures::EquilateralTriangle equilateralTriangle(30);
    printFigureInfo(&equilateralTriangle);

    Figures::Quadrangle quadrangle(10, 20, 30, 40, 80, 110, 70);
    printFigureInfo(&quadrangle);

    Figures::Parallelogram parallelogram(20, 30, 120);
    printFigureInfo(&parallelogram);

    Figures::Rectangle rectangle(10, 20);
    printFigureInfo(&rectangle);

    Figures::Rhomb rhomb(10, 40);
    printFigureInfo(&rhomb);

    Figures::Square square(30);
    printFigureInfo(&square);

}
