#include "Peon.h"

Peon::Peon(Posicion P, Color C){
    posicionActual = P;
    miColor = C;
}

bool Peon::mover(Posicion P){
    char nuevaX, actualX;
    int nuevaY, actualY, diferenciaX, diferenciaY;

    nuevaX = P.getX();
    nuevaY = P.getY();
    actualX = posicionActual.getX();
    actualY = posicionActual.getY();

    diferenciaX = nuevaX - actualX;
    diferenciaY = nuevaY - actualY;
    //No se corrige si la diferencia es negativa ya que el Peón sólo puede avanzar, y de corregirlo supone que también retrocede.

    if(nuevaX <= 'H' && nuevaX >= 'A' && nuevaY >= 1 && nuevaY < 8){ //Se verifica que la nueva posición esté dentro del tablero.
        if(diferenciaY == 1 && diferenciaX == 0){
            P.setY(nuevaY);
            return true;
        }
        //Considerando que el Peón puede comer en diagonal:
        if(diferenciaY == 1 && diferenciaX == 1){
            P.setY(nuevaY);
            return true;
        }
        if(diferenciaY == 1 && diferenciaX == -1){
            P.setY(nuevaY);
            return true;
        }
    }
    return false;
}

Posicion Peon::getPosicionActual(){
    return posicionActual;
}

Color Peon::getmiColor(){
    return miColor;
}
