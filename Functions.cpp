#include "Functions.h"

void printFigureInfo(Figures::Figure* fig) {
    std::cout << fig->getName() << " : " << std::endl;
    std::cout << "Стороны : " << fig->getSides() << std::endl;
    std::cout << "Углы : " << fig->getAngles() << std::endl << std::endl;
};