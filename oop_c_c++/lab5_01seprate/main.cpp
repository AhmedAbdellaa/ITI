#include <iostream>
#include "Complex.h"
using namespace std;

Complex operator +(float r, Complex c);
Complex operator -(float r, Complex c);

int main()
{
    Complex myComp1, myComp2, resultComp ;
    int real,imag;

    ////////////////get input//////////
    cout <<"enter real number";
    cin>>real;

    cout <<"enter imag number";
    cin>>imag;

    myComp1.setReal(real) ;
    myComp1.setImag(imag) ;

    cout<<"real is"<<myComp1.getReal()<<endl ;
    cout<<"imag is"<<myComp1.getImag()<<endl ;


    cout <<"enter real number";
    cin>>real;

    cout <<"enter imag number";
    cin>>imag;

    myComp2.setReal(real) ;
    myComp2.setImag(imag) ;

    cout<<"----------------"<<endl;

    cout<<"real is"<<myComp2.getReal()<<endl ;
    cout<<"imag is"<<myComp2.getImag()<<endl ;

    cout<<"----------------"<<endl;

    //////////show result ///////////////

    //resultComp = myComp1.add(myComp2) ;
    cout<<"-------comparing ==---------"<<endl;
    if (myComp1 == myComp2)
        cout<<"true"<<endl ;
    else
        cout<<"false"<<endl ;

    cout<<"--------cresault = this.c +c2--------"<<endl;
    resultComp = myComp1 + myComp2 ;
    resultComp.print() ;

    cout<<"-------cresault = this.c +float number---------"<<endl;
    resultComp = myComp1 + 5;
    resultComp.print() ;

    cout<<"--------cresault = float number + c--------"<<endl;
    resultComp = 5+ myComp1 ;
    resultComp.print() ;


    //resultComp = myComp1.sub(myComp2) ;
    cout<<"--------cresault = this.c -c2--------"<<endl;
    resultComp = myComp1 - myComp2 ;
    resultComp.print() ;

    cout<<"--------cresault = this.c -float number--------"<<endl;
    resultComp = myComp1 - 5;
    resultComp.print() ;

    cout<<"--------cresault = float number - c--------"<<endl;
    resultComp =  5 - myComp1 ;
    resultComp.print() ;

    cout<<"-------postfix ++this---------"<<endl;
    myComp1++;
    myComp1.print() ;

    cout<<"--------prefix this++;--------"<<endl;
    ++myComp1;
    myComp1.print() ;

    cout<<"--------(float) this ;--------"<<endl;
    cout<<(float)myComp1<<endl ;


    return 0;
}

//cresault = float number + c
Complex operator +(float r, Complex c)
{
    Complex tmp ;
    tmp.real = c.real + r;
    tmp.imag = c.imag ;
    return tmp;
}

//cresault = float number - c
Complex operator -(float r, Complex c)
{
    Complex tmp ;
    tmp.real = c.real + r;
    tmp.imag = c.imag ;
    return tmp;
}
