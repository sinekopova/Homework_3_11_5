#pragma once

#include "Triangle.h"

#ifdef FIGURES_EXPORTS
#define FIGURES_API __declspec(dllexport)
#else
#define FIGURES_API __declspec(dllimport)
#endif // FIGURES_EXPORTS

namespace Figures {
    FIGURES_API class RightTriangle : public Triangle {
    public:
        FIGURES_API RightTriangle(int a, int b, int c, int A);
    };
}