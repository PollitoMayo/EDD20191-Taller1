#ifndef REINA_H
#define REINA_H
#include <Color.h>

class Reina{
    private:
        Posicion posicionActual;
        Color miColor;
    public:
        Reina(Posicion, Color);
        bool mover(Posicion);
        Posicion getPosicionActual();
        Color getmiColor();
};

#endif // REINA_H
