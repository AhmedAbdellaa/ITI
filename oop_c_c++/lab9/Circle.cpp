#include "Circle.h"
#include <iostream>

using namespace std;

Circle::Circle(float r): Geoshape(r)
{
    cout<<"circle created :)"<<endl;
}

void Circle::setRadius(float r)
{
    dim1 = dim2 = r;
}
float Circle::getRaduis()
{
    return dim1;
}
///override
float Circle::calculateArea()
{
    cout<<"circle area"<<endl ;
    return 22.0/7 * dim1 *dim1;
}
Circle::~Circle()
{
    cout<<"O circle destruct +_+"<<endl ;
}
