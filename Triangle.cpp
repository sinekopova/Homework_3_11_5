#include "Triangle.h"

Figures::Triangle::Triangle(int a, int b, int c, int A, int B) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = 180 - A - B;
    name = "Треугольник";
};

std::string Figures::Triangle::getSides() {
    return "a = " + std::to_string(a) + ", b = " + std::to_string(b) + ", c = " + std::to_string(c);
};

std::string Figures::Triangle::getAngles() {
    return "A = " + std::to_string(A) + ", B = " + std::to_string(B) + ", C = " + std::to_string(C);
};
