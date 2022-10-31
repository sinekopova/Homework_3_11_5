#pragma once

#include "Quadrangle.h"

#ifdef FIGURES_EXPORTS
#define FIGURES_API __declspec(dllexport)
#else
#define FIGURES_API __declspec(dllimport)
#endif // FIGURES_EXPORTS

namespace Figures {
    FIGURES_API class Parallelogram : public Quadrangle {
    public:
        FIGURES_API Parallelogram(int a, int b, int A);
    };
}