#include "Dama.h"

Dama::Dama(Posicion P, Color C){
    posicionActual = P;
    miColor = C;
}

bool Dama::mover(Posicion P){
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
        //La Dama se mueve una casilla en diagonal.
        if(diferenciaX == diferenciaY && diferenciaX == 1){
            P.setY(nuevaY);
            P.setX(nuevaX);
            return true;
        }
    }
    return false;
}

Posicion Dama::getPosicionActual(){
    return posicionActual;
}

Color Dama::getmiColor(){
    return miColor;
}
