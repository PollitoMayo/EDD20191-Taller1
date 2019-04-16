#include "Reina.h"

Reina::Reina(Posicion P, Color C){
    posicionActual = P;
    miColor = C;
}

bool Reina::mover(Posicion P){
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
        //Si la Reina se mueve en diagonal:
        if(diferenciaX == diferenciaY){
            P.setY(nuevaY);
            P.setX(nuevaX);
            return true;
        }
        //Si la Reina se mueve horizontal o vertical:
        if((diferenciaX == 0 && diferenciaY < 8) || (diferenciaY == 0 && diferenciaX < 8)){
            P.setY(nuevaY);
            P.setX(nuevaX);
            return true;
        }
    }
    return false;
}

Posicion Reina::getPosicionActual(){
    return posicionActual;
}

Color Reina::getmiColor(){
    return miColor;
}
