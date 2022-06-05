#include <iostream>
#include <math.h>
#include "Complex.h"
using namespace std;
/*
Complex::Complex()
{
    cout << "Hello!" << endl;
    //ctor
}
*/
void Complex::setReal(float r)
{
    real = r;
}
void Complex::setImag(float i)
{
    imag = i;
}
float Complex::getReal()
{
    return real;
}
float Complex::getImag()
{
    return imag;
}
Complex Complex::add(Complex c)
{
    Complex tmp ;
    tmp.real = real+ c.real;
    tmp.imag = imag + c.imag;
    return tmp ;
}
Complex Complex::sub(Complex c)
{
    Complex tmp ;
    tmp.real = real - c.real;
    tmp.imag = imag - c.imag;
    return tmp;
}
void Complex::print()
{
    if(imag<0)
    {
        cout<<real<<"-"<<fabs(imag)<<"i"<<endl ;
    }
    else
    {
        cout<<real<<"+"<<imag<<"i"<<endl ;
    }
}
//////////////lab 7 update/////////{}
//cresault = this.c +c2
Complex Complex::operator +(Complex c)
{
    return add(c);
}

//cresault = this.c -c2
Complex Complex::operator -(Complex c)
{
    return sub(c);
}

//cresault = this.c +float number  ****how to input [complex + (real+imag)]
Complex Complex::operator +(float r)
{
    Complex tmp ;
    tmp.real = real+ r;
    tmp.imag = imag;
    cout<<"float con";
    return tmp ;
}

//cresault = this.c-float number
Complex Complex::operator -(float r)
{
    Complex tmp ;
    tmp.real = real- r;
    tmp.imag = imag;
    return tmp ;
}

//prefix ++this
Complex Complex::operator ++() {//testing is it will increace value or increase address

//cout<< (*this+1 )<<endl;
//Complex tmp = (*this)+1.0;
//*this = (*this)+1.0;
    return (*this = (*this)+1.0);
/*
    real++;
    return *this ;
*/
}
//this.c ==c
int Complex::operator ==(Complex c)
{
    if (real == c.real)
    {
        if (imag == c.imag)
        {
            return 1;
        }
        else
            return 0;
    }
    else
        return 0;
}
//postfix this++;
Complex Complex::operator ++(int)
{
    Complex tmp =*this; //bitwise copy of this
    real++;
    return tmp;

}

//(float) this ;
Complex::operator float()
{
    return real;
}
//friend operator <<(Complex c);
//////////////end lab 7 update/////////
