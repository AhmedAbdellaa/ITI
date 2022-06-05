#include <iostream>
#include<Picture.h>
#include <Line.h>
#include <Circle.h>
#include<Rect.h>
using namespace std;

int main()
{
    Picture pic;
/*
    Line *ll ;
    ll = new Line[3] ;
    pic.setLine(3,ll);
    pic.paint();
*/
    /*
    Line *ll ;
    ll = new Line[3];
    pic.setLine(3,ll);
    pic.paint();
    */

///first example

    Circle carr[3] = {Circle(50,50,50),Circle(200,100,100),Circle(420,50,30)}; //copy constructor ?
     Line larr[2] = {Line(420,50,300,300), Line(40,500,500,400)};
    Rect rarr[2] = {Rect(30,40,170,100), Rect(420,50,500,300)};

    pic.setCircle(3,carr);
    pic.setRectangle(2,rarr);
    pic.setLine(2,larr);
    pic.paint();


///second example
    /*
        Circle cArr[3]= {Circle(50,50,50), Circle(200,100,100), Circle(420,50,30)};
        Rect rArr[2] ;
        rArr[0] = Rect(30,40,170,100) ;

        Point myP1(420,50) ;
        Point myP2(500,300) ;
        rArr[1] = Rect(myP1, myP2) ;
        */
    ///third example
    /*
    Line * lArr ;
    lArr = new Line[2] ;
    //lArr[0] = Line(Point(420,50), Point(300,300)) ;
    lArr[0] = Line(40,500,500,400) ;
    lArr[1] = Line(40,500,500,400) ;

    Circle cArr[3]= {Circle(50,50,50), Circle(200,100,100), Circle(420,50,30)};
    Rect rarr[2] = {Rect(30,40,170,100), Rect(420,50,500,300)};

    pic.setCircle(3,cArr) ;
    pic.setRectangle(2,rarr) ;
    pic.setLine(2,lArr) ;
    pic.paint() ;
    delete[] lArr ;
    */
    return 0;
}
