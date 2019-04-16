#include "Color.h"
Color::Color(){
}

Color::Color(Posicion P){
    if((P.getX())%2 == (P.getY())%2){
        color = true;
    } else{
        color = false;
    }
}

string Color::getColor(){
    string elColor;
    if(color == true){
        elColor = "Negro";
    } else{
        elColor = "Blanco";
    }
    return elColor;
}

void Color::setColor(bool opcion){
    color = opcion;
}
