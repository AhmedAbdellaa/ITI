#include "Picture.h"
#include <iostream>

Picture::Picture()
{
    std::cout<<"create picture from default constractor"<<std::endl;
    cNum = 0 ;
    rNum = 0 ;
    lNum = 0 ;
    li  = NULL ;
    rect= NULL ;
    ci  = NULL ;
}
Picture::Picture(int cn,int rn, int ln, Line *l, Rect *re,Circle *c)
{
    cNum = cn  ;
    rNum  =  rn ;
    lNum = ln ;
    li = l ;
    rect = re ;
    ci  = c ;
    std::cout<<"create picture from second constractor"<<std::endl;
}
void Picture::setCircle(int cn, Circle *c)
{
    cNum = cn  ;
    ci  = c ;
}
void Picture::setLine(int ln, Line *c)
{
    lNum = ln  ;
    li  = c ;
}
void Picture::setRectangle(int rn, Rect *c)
{
    rNum = rn  ;
    rect  = c ;
}


void Picture::paint()
{

    if (li ==NULL && rect== NULL && ci ==NULL )
    {
        std::cout<<"nothing to paint in picture "<<std::endl;
    }
    else
    {

        for(int i =0 ; i<rNum ; i++)
        {
            rect[i].draw();
        }
        for(int i =0 ; i<cNum ; i++)
        {
            ci[i].draw();
        }
         for(int i =0 ; i<lNum ; i++)
        {
            li[i].draw();
        }
    }
}
Picture::~Picture()
{
 //delete &li[1];
    /*
    for(int i =0 ;i<lNum ; i++){

        }
    delete li;

    delete []rect;
    delete []ci;
    */
    std::cout<<"picture destroyed "<<std::endl;
}

