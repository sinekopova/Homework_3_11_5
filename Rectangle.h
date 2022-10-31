#pragma once

#include "Parallelogram.h"

#ifdef FIGURES_EXPORTS
#define FIGURES_API __declspec(dllexport)
#else
#define FIGURES_API __declspec(dllimport)
#endif // FIGURES_EXPORTS

namespace Figures {

    FIGURES_API class Rectangle : public Parallelogram {
    public:
        FIGURES_API Rectangle(int a, int b);
    };

}
