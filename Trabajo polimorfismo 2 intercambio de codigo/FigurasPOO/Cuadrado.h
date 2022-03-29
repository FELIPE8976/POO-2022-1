//
// Created by Admin on 20/03/2022.
//

#ifndef FIGURASPOO_CUADRADO_H
#define FIGURASPOO_CUADRADO_H

#include "Figura.h"

class Cuadrado : public Figura {
private:
    float lado;
public:
    Cuadrado();
    Cuadrado(float lado);
    void mostraArea() override;
    void mostraPerimetro() override;
    void mostraFigura() override;
    float getArea() override;
};


#endif //FIGURASPOO_CUADRADO_H
