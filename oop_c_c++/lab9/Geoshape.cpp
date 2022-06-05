#include "Geoshape.h"
#include <iostream>

using namespace std;

Geoshape::Geoshape()
{
    dim1 = dim2 = 0;
    cout<<"geoshape constructed :)"<<endl ;
}
/*
Geoshape::Geoshape(float x)
{
    dim1 = dim2= x;
    cout<<"geoshape constructed :)"<<endl ;
}
Geoshape::Geoshape(float x,float y)
{
    dim1 = x;
    dim2 = y;
    cout<<"geoshape constructed :)"<<endl ;
}
*/
void Geoshape::setDim1(float x)
{
    dim1 = x;
}
void Geoshape::setDim2(float y)
{
    dim2 = y;
}
float Geoshape::getDim1()
{
    return dim1;
}
float Geoshape::getDim2()
{
    return dim2;
}

Geoshape::~Geoshape()
{
    cout<<"geoshape destruct +_+"<<endl ;
}
