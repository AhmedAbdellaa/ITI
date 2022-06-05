#ifndef SQUARE_H
#define SQUARE_H
#include "Rectangle.h"

class Square : public Rectangle
{
    public:
        Square(float );
        void setSquareDim(float );
        float getSquareDim();
        ///extend calculate area from it's parent(Rectangle)
        ~Square();


    protected:

    private:
};

#endif // SQUARE_H
