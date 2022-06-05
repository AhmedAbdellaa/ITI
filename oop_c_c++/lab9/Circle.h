#ifndef CIRCLE_H
#define CIRCLE_H
#include "Geoshape.h"

class Circle:public Geoshape
{
public:
    Circle(float r);
    void setRadius(float r);
    float getRaduis();
    float calculateArea();
    ~Circle();

protected:

private:
};

#endif // CIRCLE_H
