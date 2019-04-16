#ifndef POSICION_H
#define POSICION_H


class Posicion{
    private:
        char X;
        int Y;
    public:
        Posicion();
        Posicion(char, int);
        void setX(char);
        void setY(int);
        char getX();
        int getY();
};

#endif // POSICION_H
