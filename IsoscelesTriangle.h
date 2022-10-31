#pragma once

#include "Triangle.h"

#ifdef FIGURES_EXPORTS
#define FIGURES_API __declspec(dllexport)
#else
#define FIGURES_API __declspec(dllimport)
#endif // FIGURES_EXPORTS

namespace Figures {
    FIGURES_API class IsoscelesTriangle : public Triangle {
    public:
        FIGURES_API IsoscelesTriangle(int a, int c, int A);
    };
}