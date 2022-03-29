
#ifndef FIGURASPOO_FIGURA_H
#define FIGURASPOO_FIGURA_H

#include <iostream>
#include <stdlib.h>

using namespace std;

class Figura {
protected:
    float area;
public:
    virtual void mostraArea() = 0;
    virtual void mostraPerimetro() = 0;
    virtual void mostraFigura() = 0;
    virtual float getArea() = 0;
    void mostraFigura(int color);
};


#endif //FIGURASPOO_FIGURA_H
