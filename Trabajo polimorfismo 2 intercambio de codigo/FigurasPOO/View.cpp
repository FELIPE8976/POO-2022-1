
#include "View.h"

void View::combinarReferencias(){
    //Figura figuraObj;
    //Circulo circuloObj;
    //Cuadrado cuadradoObj;
    //Rectangulo rectanguloObj;
}

void View::agregarCirculo(){
    float radio;
    cout << "Digita el radio del circulo: \n:";
    cin >> radio;
    Circulo circulo(radio);
    figurasVector.push_back(new Circulo(circulo));
}
void View::agregarCuadrado(){
    float lado;
    cout << "Digita el lado del cuadrado: \n:";
    cin >> lado;
    Cuadrado cuadrado(lado);
    figurasVector.push_back(new Cuadrado(cuadrado));
}
void View::agregarRectangulo(){
    float base, altura;
    cout << "Digita la base del rectangulo: \n:";
    cin >> base;
    cout << "Digita la altura del rectangulo: \n:";
    cin >> altura;
    Rectangulo rectangulo(base, altura);
    figurasVector.push_back(new Rectangulo(rectangulo));
}

void View::agregarTrianguloRectangulo(){
    float base, altura, hipotenusa;
    cout << "Digita la base del triangulo rectangulo: \n:";
    cin >> base;
    cout << "Digita la altura del triangulo rectangulo: \n:";
    cin >> altura;
    cout << "Digita la hipotenusa del triangulo rectangulo: \n:";
    cin >> hipotenusa;
    TrianguloRectangulo trianguloRectangulo(base, altura, hipotenusa);
    figurasVector.push_back(new TrianguloRectangulo(trianguloRectangulo));
}

void View::mostrarAreas(){
    for (int i=0; i<figurasVector.size(); i++){
        figurasVector[i]->mostraArea();
    }
}
void View::mostrarPerimetros(){
    for (int i=0; i<figurasVector.size(); i++){
        figurasVector[i]->mostraPerimetro();
    }
}
void View::mostrarFiguras(){
    int opcion = 0, opcion2 = 0;
    cout << "Desea la figura con color (1) o sin color (0):";
    cin >> opcion;
    for (int i=0; i<figurasVector.size(); i++){
        if(opcion == 1){
            cout << "1.  Azul\n";
            cout << "2.  Verde\n";
            cout << "3.  Aqua\n";
            cout << "4.  Rojo\n";
            cout << "5.  Morado\n";
            cout << "6.  Amarillo\n";
            cout << "7.  Blanco\n";
            cout << "8.  Gris\n";
            cout << "0.  Salir \n";
            cin >> opcion2;
            figurasVector[i]->mostraFigura(opcion2);
        }
        figurasVector[i]->mostraFigura();
    }
}
void View::mostrarSumaAreas(){
    float sumaAreas = 0;
    for (int i=0; i<figurasVector.size(); i++){
        sumaAreas += figurasVector[i]->getArea();
    }
    cout << "La suma de todas las areas es: " << sumaAreas << "\n";
}