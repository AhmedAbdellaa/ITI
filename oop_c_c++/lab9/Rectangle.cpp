#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(float x,float y) :Geoshape(x,y)
{

    cout<<"|_-| Rectangle constructed :)"<<endl ;
}
///override
float Rectangle::calculateArea()
{
    cout<<"Rectangle area"<<endl ;
    return dim1 *dim2;
}
Rectangle::~Rectangle()
{
    cout<<"|_-| Rectangle destruct +_+"<<endl ;
}
