#include "Parallelogram.h"

Figures::Parallelogram::Parallelogram(int a, int b, int A) : Quadrangle(a, b, a, b, A, 180 - A, A) {
    name = "Параллелограм";
};
