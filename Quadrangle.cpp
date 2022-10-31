#include "Quadrangle.h"

Figures::Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = 360 - A - B - C;
    name = "Четырехугольник";
};
std::string Figures::Quadrangle::getSides() {
    return "a = " + std::to_string(a) + ", b = " + std::to_string(b) + ", c = " + std::to_string(c) + ", d = " + std::to_string(d);
};
std::string Figures::Quadrangle::getAngles(){
    return "A = " + std::to_string(A) + ", B = " + std::to_string(B) + ", C = " + std::to_string(C) + ", D = " + std::to_string(D);
};