#ifndef ALFIL_H
#define ALFIL_H
#include <Color.h>

class Alfil{
    private:
        Posicion posicionActual;
        Color miColor;
    public:
        Alfil(Posicion, Color);
        bool mover(Posicion);
        Posicion getPosicionActual();
        Color getmiColor();
};

#endif // ALFIL_H
