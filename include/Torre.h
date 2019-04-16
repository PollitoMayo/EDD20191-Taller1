#ifndef TORRE_H
#define TORRE_H
#include <Color.h>

class Torre{
    private:
        Posicion posicionActual;
        Color miColor;
    public:
        Torre(Posicion, Color);
        bool mover(Posicion);
        Posicion getPosicionActual();
        Color getmiColor();
};

#endif // TORRE_H
