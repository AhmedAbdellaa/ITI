#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Geoshape.h"

class Triangle:public Geoshape
{
public:
    Triangle(float, float );
     float calculateArea()override;
    ~Triangle();

protected:

private:
};

#endif // TRIANGLE_H
