#ifndef COLOR_H
#define COLOR_H
#include <Posicion.h>
using namespace std;
#include <string>


class Color{
    private:
        bool color;
    public:
        Color();
        Color(Posicion);
        string getColor();
        void setColor(bool);

};

#endif // COLOR_H
