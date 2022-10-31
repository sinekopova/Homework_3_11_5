#pragma once

#include "Rhomb.h"

#ifdef FIGURES_EXPORTS
#define FIGURES_API __declspec(dllexport)
#else
#define FIGURES_API __declspec(dllimport)
#endif // FIGURES_EXPORTS

namespace Figures {
    FIGURES_API class Square : public Rhomb {
    public:
        FIGURES_API Square(int a);
    };
}