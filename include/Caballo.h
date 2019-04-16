#ifndef CABALLO_H
#define CABALLO_H
#include <Color.h>

class Caballo{
    private:
        Posicion posicionActual;
        Color miColor;
    public:
        Caballo(Posicion, Color);
        bool mover(Posicion);
        Posicion getPosicionActual();
        Color getmiColor();
};

#endif // CABALLO_H
