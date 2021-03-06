#ifndef Rectangulo_H
#define Rectangulo_H

#include <iostream>
#include "FiguraGeometrica.h"

using std::cout;

class Rectangulo : public FiguraGeometrica
{
private:
    float altura;
    float base;

public:
    Rectangulo();
    Rectangulo(float base, float altura);
    float averiguarPerimetro();
    float averiguarArea();
    void dibujarFigura();
    void nombreFigura();
};

#endif
