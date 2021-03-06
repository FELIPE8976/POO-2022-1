#ifndef Cuadrado_H
#define Cuadrado_H

#include <iostream>
#include <cmath>
#include "FiguraGeometrica.h"

using std::cout;
using std::pow;

class Cuadrado : public FiguraGeometrica
{
private:
    float lado;

public:
    Cuadrado();
    Cuadrado(float lado);
    float averiguarPerimetro();
    float averiguarArea();
    void dibujarFigura();
    void nombreFigura();
};

#endif
