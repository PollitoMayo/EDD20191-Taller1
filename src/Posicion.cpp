#include "Posicion.h"

Posicion::Posicion(){
}

Posicion::Posicion(char C, int I){
    setX(C);
    setY(I);
}
void Posicion::setX(char C){
    if(C >= 'A' && C <= 'H'){
        X = C;
    }
}

void Posicion::setY(int I){
    if(I >= 1 && I <= 8){
        Y = I;
    }
}

char Posicion::getX(){
    return X;
}

int Posicion::getY(){
    return Y;
}
