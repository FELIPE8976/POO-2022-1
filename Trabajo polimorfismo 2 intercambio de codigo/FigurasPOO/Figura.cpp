#include "Figura.h"

void Figura::mostraFigura(int color) {
    switch (color) {
        case 1:
            system("Color 01");
            break;
        case 2:
            system("Color 02");
            break;
        case 3:
            system("Color 03");
            break;
        case 4:
            system("Color 04");
            break;
        case 5:
            system("Color 05");
            break;
        case 6:
            system("Color 06");
            break;
        case 7:
            system("Color 07");
            break;
        case 8:
            system("Color 08");
            break;
        default:
            break;
        }
}