#ifndef COMPLEX_H
#define COMPLEX_H


class Complex
{


public:
    //Complex();
    void setReal(float r);
    void setImag(float i);
    float getReal();
    float getImag();
    Complex add(Complex c);
    Complex sub(Complex c);
    void print();
    //////////////lab 7 update/////////
    Complex operator +(Complex c);
    Complex operator -(Complex c);
    Complex operator +(float r);
    Complex operator -(float r);
    int operator ==(Complex c);
    friend Complex operator +(float r, Complex c);
    friend Complex operator -(float r, Complex c);

    Complex operator ++(); //prefix
    Complex operator ++(int); //postfix
    operator float();
    //friend operator <<( ostream os,Complex c);
    //////////////end lab 7 update/////////

protected:

private:
    float real;
    float imag ;


};


#endif // COMPLEX_H
