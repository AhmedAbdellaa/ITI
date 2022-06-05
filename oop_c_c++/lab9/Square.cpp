#include "Square.h"
#include <iostream>

using namespace std;

Square::Square(float d) :Rectangle(d,d)
{
    ///Rectangle(d,d); //did not work because privete call of Rectangle class
    cout<<"[] square constructed :)"<<endl ;
}

void Square::setSquareDim(float d)
{
    dim1 = dim2 = d;
}

float Square::getSquareDim()
{
    return dim1;
}

Square::~Square()
{
    cout<<"[] square destruct +_+"<<endl ;
}
