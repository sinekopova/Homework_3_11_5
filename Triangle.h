#pragma once

#include <string>

#include "Figure.h"

#ifdef FIGURES_EXPORTS
#define FIGURES_API __declspec(dllexport)
#else
#define FIGURES_API __declspec(dllimport)
#endif // FIGURES_EXPORTS

namespace Figures {
    FIGURES_API class Triangle : public Figure {
    public:
        FIGURES_API Triangle(int a, int b, int c, int A, int B);
        FIGURES_API std::string getSides() override;
        FIGURES_API std::string getAngles() override;
    protected:
        int A, B, C;
        int a, b, c;
    };
}