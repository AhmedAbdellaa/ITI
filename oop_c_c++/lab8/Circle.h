#ifndef CIRCLE_H
#define CIRCLE_H
#include "Point.h"

class Circle
{
public:
    Circle();
    Circle(int x, int y,int r);
    void draw();
    ~Circle();
protected:

private:
    Point cen;
    int rad ;
};

#endif // CIRCLE_H
