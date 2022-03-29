#include "TrianguloRectangulo.h"

TrianguloRectangulo::TrianguloRectangulo(){
    base = 0;
    altura = 0;
    hipotenusa = 0;
    area = 0;
}
TrianguloRectangulo::TrianguloRectangulo(float base, float altura, float hipotenusa){
    this -> base = base;
    this -> altura = altura;
    this -> hipotenusa = hipotenusa;
}
void TrianguloRectangulo::mostraArea(){
    float areaTrianguloRectangulo = (base*altura)/2;
    area = areaTrianguloRectangulo;
    cout << "El area del Triangulo rectangulo es: " << areaTrianguloRectangulo << "\n\n";
}
void TrianguloRectangulo::mostraPerimetro(){
    float perimetroTrianguloRectangulo = base + altura + hipotenusa;
    cout << "El perimetro del rectangulo es: " << perimetroTrianguloRectangulo << "\n\n";
}
void TrianguloRectangulo::mostraFigura(){
    cout << "Figura del triangulo rectangulo: \n\n";
    int contador = 1;
    for( int j = 1; contador <= altura; j++ ) {
        for (int i = 1; i <= contador; i++) {
            cout << "*";
        }
        cout << "\n";
        contador++;
    }
    system("Color 07");
}

float TrianguloRectangulo::getArea(){
    return this->area;
}


