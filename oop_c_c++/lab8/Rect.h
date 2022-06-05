#ifndef RECT_H
#define RECT_H
#include "Point.h"

class Rect
{
public:
    Rect();
    Rect(int x,int y,int x1,int y1);
    void set_start(Point s);
    void set_end(Point s);
    void draw();
    ~Rect();

protected:

private:
    Point ul;
    Point dr ;
};

#endif // RECT_H
