#ifndef REY_H
#define REY_H
#include <Color.h>

class Rey{
    private:
        Posicion posicionActual;
        Color miColor;
    public:
        Rey(Posicion, Color);
        bool mover(Posicion);
        Posicion getPosicionActual();
        Color getmiColor();
};

#endif // REY_H
