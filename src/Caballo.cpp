#include "Caballo.h"

Caballo::Caballo(Posicion P, Color C){
    posicionActual = P;
    miColor = C;
}

bool Caballo::mover(Posicion P){
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
        //Si el Caballo se mueve dos casillas horizontales y una vertical:
        if(diferenciaX == 2 && diferenciaY == 1){
            P.setY(nuevaY);
            P.setX(nuevaX);
            return true;
        }
        //Si el Caballo se mueve dos casillas verticales y una horizontal:
        if(diferenciaY == 2 && diferenciaX == 1){
            P.setY(nuevaY);
            P.setX(nuevaX);
            return true;
        }
    }
    return false;
}

Posicion Caballo::getPosicionActual(){
    return posicionActual;
}

Color Caballo::getmiColor(){
    return miColor;
}
