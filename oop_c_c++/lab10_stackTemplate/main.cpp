#include <iostream>
#include "Stack.h"
using namespace std;




template <class R>
void fviewcontent(Stack<R> x);
int main()
{
char exit ='a';
       string data= "";

       cout<<"enter size of stack"<<endl;
       cin>>si ;


       cout<<"enter data type for stack"<<endl;
       cin>>data ;


       data d ;
       while(exit != 'q' && i <si){
        cin>>d;
        s.push(d);
       }


       int si =5 ,i=0;
        Stack<string> s(si);
       Stack<string> s1(si);
       Stack<string> s2(si);
       s.push("mohamed grandpa");
       s.push("abdellah");
       s.push("mohamed");
       s.push("ahmed");
       cout<<"pop is "<<s.pop()<<endl ;
       fviewcontent(s);

       cout<<"number of classes"<<s.getNumberOfStack()<<endl;


       cout<<"------------------"<<endl;
       s.view_content();
       cout<<"------------------"<<endl;
       //s.clearStack();
       s2 =s1 =s;

       cout<<"s2 pop is "<<s2.pop()<<endl ;

       cout<<"------------------"<<endl;
       s1.view_content();
       cout<<"------------------"<<endl;

       cout<<"------------------"<<endl;
       s2.view_content();
       cout<<"------------------"<<endl;


    //Stack<float> s(5);
    //s.push(5);
   // cout<<s.pop()<<endl ;

    return 0;
}


template <class R>
void fviewcontent(Stack<R> x)
{

    int t = x.top;
    cout<<"------friend view content--------"<<endl;
    cout<<"number of classes"<<x.getNumberOfStack()<<endl;
    while(t!= 0)
    {
        cout<<x.st[--t]<<endl;
    }
    cout<<"------end friend view content--------"<<endl;
}


