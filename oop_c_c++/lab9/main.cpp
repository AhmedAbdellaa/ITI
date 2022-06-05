#include <iostream>
#include <Square.h>
#include <Circle.h>
#include <Geoshape.h>
#include <Rectangle.h>
#include<Square.h>
#include<Triangle.h>

#define SIZE 3

using namespace std;

void calcuate_sum( Geoshape **gs ,int counter);
void printt(Geoshape **gs);
int main()
{
    //--------test 1 ///////////////
   // Circle c(5);
//Triangle t(5,5);

    /*
    Triangle *t=new Triangle(4.0,4.0);
    cout<<t->calculateArea();
    delete t;
    */
    //cout<<t.calculateArea();
    //cout<<new Triangle(4.0,4.0)<<endl ;
   // Geoshape *gs = new Triangle(4.0,4.0);
    //cout<<gs->calculateArea()<<endl;
    //delete gs ;

    ///home/Ahmed/Documents/02-oop_c_c++/lab9/main.cpp|14|error: conversion from ‘Triangle*’ to non-scalar type ‘Geoshape’ requested|
    ///end test 1 with failed //////////////

    ///------test 2  ///////////
/*
    Triangle *t = *new Geoshape(4,4);
    cout<<t->calculateArea()<<endl;
    delete t ;
*/
    ///home/Ahmed/Documents/02-oop_c_c++/lab9/main.cpp|22|error: conversion from ‘Geoshape*’ to non-scalar type ‘Triangle’ requested|

    ///end test 2 with failed //////////////
    ///--------test 3 ////////
/*
    Circle c(5.5);
    cout<<c.calculateArea()<<endl;
    Triangle t(4,6);
    cout<<t.getDim1()<<endl; /// error because of call geoshape as private
    cout<<t.calculateArea()<<endl;
    Rectangle r(4,6);
    cout<<r.calculateArea()<<endl;
    Square s(4);
    cout<<s.calculateArea()<<endl;
*/
    //Geoshape gg{};
    Geoshape gg{};
    cout<<gg.getDim1()<<endl;
/*
    Geoshape **gs = new Geoshape * [SIZE];

    gs[0]= new Triangle(2.0,3.0);
    gs[1]=  new Square(2.0);
    gs[2] = new Circle(5.0);
    cout<<gs[1]->calculateArea()<<endl;
   calcuate_sum(gs , SIZE);
    //printt(gs);
*/


    return 0;
}

void printt(Geoshape **gs){
cout<<gs[0]->calculateArea()<<endl;
}
void calcuate_sum( Geoshape **gs ,int counter){
    float sum =0 ;

    for(int i =0 ;i<counter ; i++){

        sum += gs[i]->calculateArea() ;
        cout<<gs[i]->calculateArea()<<endl;
    }

     cout<<" sum area is "<<sum<<endl;

}
