#ifndef FIGURASPOO_CIRCULO_H
#define FIGURASPOO_CIRCULO_H

#include "Figura.h"
#include <math.h>

class Circulo : public Figura{
private:
    float radio;
public:
    Circulo();
    Circulo(float radio);
    void mostraArea() override;
    void mostraPerimetro() override;
    void mostraFigura() override;
    float getArea() override;
};


#endif //FIGURASPOO_CIRCULO_H
