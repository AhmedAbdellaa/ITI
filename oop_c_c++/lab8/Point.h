#ifndef POINT_H
#define POINT_H


class Point
{
public:
    Point();
    Point(int,int );
    void setX(int x);
    void setY(int y);
    int getX();
    int getY();
    ~Point();
protected:

private:
    int x;
    int y;

};

#endif // POINT_H
