#include "Torre.h"

Torre::Torre(Posicion P, Color C){
    posicionActual = P;
    miColor = C;
}

bool Torre::mover(Posicion P){
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
        //Si se mueve sólo en el eje X:
        if(diferenciaY == 0 && diferenciaX < 8){
            P.setY(nuevaY);
            P.setX(nuevaX);
            return true;
        }
        //Si se mueve sólo en el eje Y:
        if(diferenciaX == 0 && diferenciaY < 8){
            P.setY(nuevaY);
            P.setX(nuevaX);
            return true;
        }
    }
    return false;
}

Posicion Torre::getPosicionActual(){
    return posicionActual;
}

Color Torre::getmiColor(){
    return miColor;
}
