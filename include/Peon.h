#ifndef PEON_H
#define PEON_H
#include <Color.h>

class Peon{
    private:
        Posicion posicionActual;
        Color miColor;
    public:
        Peon(Posicion, Color);
        bool mover(Posicion);
        Posicion getPosicionActual();
        Color getmiColor();
};

#endif // PEON_H
