#include "Rey.h"

Rey::Rey(Posicion P, Color C){
    posicionActual = P;
    miColor = C;
}

bool Rey::mover(Posicion P){
    char nuevaX, actualX;
    int nuevaY, actualY, diferenciaX, diferenciaY;

    nuevaX = P.getX();
    nuevaY = P.getY();
    actualX = posicionActual.getX();
    actualY = posicionActual.getY();

    diferenciaX = nuevaX - actualX;
    diferenciaY = nuevaY - actualY;

    //Si la diferencia es negativa, se multiplica por -1
    if(diferenciaX < 0){
        diferenciaX = diferenciaX *(-1);
    }
    if(diferenciaY < 0){
        diferenciaY = diferenciaY *(-1);
    }

    if(nuevaX <= 'H' && nuevaX >= 'A' && nuevaY >= 1 && nuevaY < 8){ //Se verifica que la nueva posición esté dentro del tablero.
        if(diferenciaY <= 1 && diferenciaX <= 1){
            P.setY(nuevaY);
            P.setX(nuevaX);
            return true;
        }
    }
    return false;
}

Posicion Rey::getPosicionActual(){
    return posicionActual;
}

Color Rey::getmiColor(){
    return miColor;
}
