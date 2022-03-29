#ifndef FIGURASPOO_TRIANGULORECTANGULO_H
#define FIGURASPOO_TRIANGULORECTANGULO_H


#include "Figura.h"

class TrianguloRectangulo: public Figura {
private:
    float base;
    float altura;
    float hipotenusa;
public:
    TrianguloRectangulo();
    TrianguloRectangulo(float base, float altura, float hipotenusa);
    void mostraArea() override;
    void mostraPerimetro() override;
    void mostraFigura() override;
    float getArea() override;
};




#endif //FIGURASPOO_TRIANGULORECTANGULO_H
