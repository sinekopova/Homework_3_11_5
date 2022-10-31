#pragma once

#include "IsoscelesTriangle.h"

#ifdef FIGURES_EXPORTS
#define FIGURES_API __declspec(dllexport)
#else
#define FIGURES_API __declspec(dllimport)
#endif // FIGURES_EXPORTS

namespace Figures {
    FIGURES_API class EquilateralTriangle : public IsoscelesTriangle {
    public:
        FIGURES_API EquilateralTriangle(int a);
    };
}