#pragma once
#include <string>

#ifdef FIGURES_EXPORTS
#define FIGURES_API __declspec(dllexport)
#else
#define FIGURES_API __declspec(dllimport)
#endif // FIGURES_EXPORTS

namespace Figures {
    FIGURES_API class Figure {
    public:
        FIGURES_API Figure();
        FIGURES_API virtual std::string getSides();
        FIGURES_API virtual std::string getAngles();
        FIGURES_API std::string getName();

    protected:
        std::string name;
    };
}