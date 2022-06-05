#ifndef LINE_H
#define LINE_H
#include "Point.h"

class Line
{
public:
    Line();
    Line(int x,int y,int x1,int y1);
    void set_start(Point s);
    void set_end(Point s);
    void draw();
    ~Line();

protected:

private:
    Point start ;
    Point endline;
};

#endif // LINE_H
