#include "Triangle.h"
#include <iostream>

using namespace std;

Triangle::Triangle(float x,float y): Geoshape(x,y)
{

    cout<<"Y triangle constructed :)"<<endl ;
}
///override
float Triangle::calculateArea()
{
    cout<<"triangle area"<<endl ;
    return 0.5*dim1 *dim2;
}
Triangle::~Triangle()
{
    cout<<"Y triangle destruct +_+"<<endl ;
}
