#include "Point.h"
#include <iostream>
Point::Point()
{
    //ctor
    std::cout<<"create point from default constractor"<<std::endl;
}

Point::Point(int x,int y)
{
    this->x = x;
    this->y = y ;
std::cout<<"create point from second constractor"<<std::endl;
}
void Point::setX(int x)
{
    this->x = x;
}
void Point::setY(int y)
{
    this->y = y;
}
int Point::getX()
{
    return x;
}
int Point::getY()
{
    return y;
}
Point::~Point()
{
    std::cout<<"point destroyed"<<std::endl ;
}
