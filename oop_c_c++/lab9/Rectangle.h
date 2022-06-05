#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Geoshape.h"

class Rectangle :public Geoshape
{
public:
    Rectangle(float, float );
    float calculateArea();
    ~Rectangle();
protected:

private:
};

#endif // RECTANGLE_H
