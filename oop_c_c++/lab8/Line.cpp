#include "Line.h"
#include <iostream>
Line::Line(): start(),endline()
{
    std::cout<<"create line from default constractor"<<std::endl;
}

Line::Line(int x1,int y1,int x2,int y2): start(x1,y1), endline(x2,y2)
{
    std::cout<<"create line from second constractor"<<std::endl;
}
void Line::set_start(Point s)
{
    this->start = s;
}
void Line::set_end(Point s)
{
    this->endline = s ;
}
void Line::draw()
{
    std::cout<<"just imagine there is line"<<std::endl;
}
Line::~Line()
{
/*
    delete start;
    delete endline ;
    */
    std::cout<<"line destroyed"<<std::endl ;
    //dtor
}
