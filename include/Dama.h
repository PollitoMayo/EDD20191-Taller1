#ifndef DAMA_H
#define DAMA_H
#include <Color.h>

class Dama{
    private:
        Posicion posicionActual;
        Color miColor;
    public:
        Dama(Posicion, Color);
        bool mover(Posicion);
        Posicion getPosicionActual();
        Color getmiColor();
};

#endif // DAMA_H
