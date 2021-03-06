#include "Rectangulo.h"

Rectangulo::Rectangulo(){
    base = 0;
    altura = 0;
    area = 0;
}
Rectangulo::Rectangulo(float base, float altura){
    this -> base = base;
    this -> altura = altura;
}
void Rectangulo::mostraArea(){
    float areaRectangulo = base*altura;
    area = areaRectangulo;
    cout << "Rectangulo: " << base << "x" << altura << "\n";
    cout << "El area del rectangulo es: " << areaRectangulo << "\n\n";
}
void Rectangulo::mostraPerimetro(){
    float perimetroRectangulo = (base*2) + (altura*2);
    cout << "Rectangulo: " << base << "x" << altura << "\n";
    cout << "El perimetro del rectangulo es: " << perimetroRectangulo << "\n\n";
}
void Rectangulo::mostraFigura(){
    cout << "Figura del rectangulo: " << base << "x" << altura << "\n\n";
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= base; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    system("Color 07");
    cout << "\n";
}

float Rectangulo::getArea(){
    return this->area;
}
