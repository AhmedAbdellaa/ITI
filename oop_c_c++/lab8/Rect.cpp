#include "Rect.h"
#include <iostream>
Rect::Rect(): ul(),dr()
{
    std::cout<<"create rect from default constractor"<<std::endl;
}

Rect::Rect(int x1,int y1,int x2,int y2): ul(x1,y1), dr(x2,y2)
{
    std::cout<<"create rect from second constractor"<<std::endl;
}
void Rect::set_start(Point s)
{
    this->ul = s;
}
void Rect::set_end(Point s)
{
    this->dr = s ;
}
void Rect::draw()
{
    std::cout<<"just imagine there is retangle"<<std::endl;
}
Rect::~Rect()
{
    std::cout<<"rect destroyed"<<std::endl ;
    //dtor
}
