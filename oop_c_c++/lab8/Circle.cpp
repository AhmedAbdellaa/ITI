#include "Circle.h"
#include <iostream>
Circle::Circle():cen()
{
    this->rad = 0;
    std::cout<<"create rect from default constractor"<<std::endl;
}
Circle::Circle(int x, int y,int r):cen(x,y)
{
    this->rad = r;
    std::cout<<"create circle from second constractor"<<std::endl;
}

void Circle::draw()
{
    std::cout<<"just imagine there is circle"<<std::endl;
}
Circle::~Circle()
{
    std::cout<<"circle destroyed"<<std::endl ;
}
