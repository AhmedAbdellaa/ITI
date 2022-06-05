#include <iostream>
#include "Stack.h"
#include "TestFriend.h"
using namespace std;


void fviewcontent(Stack x);
void test_destractor(Stack x);
void adtest_destractor(Stack &x);
int main()
{
    int si =5 ;
    Stack s(si);
    Stack s1(si);
    Stack s2(si);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<"pop is "<<s.pop()<<endl ;
    fviewcontent(s);

    cout<<"number of classes"<<s.getNumberOfStack()<<endl;

    //test_destractor(s);
    //adtest_destractor(s);

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
    //TestFriend tt;
    //tt.printing();

    return 0;
}



void fviewcontent(Stack x)
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

void test_destractor(Stack x)
{
    int t = x.stak_size();
    //cout<<t<<endl ;
    cout<<"------test_destractor--------"<<endl;
    cout<<"number of classes"<<x.getNumberOfStack()<<endl;
    cout<<x.beek()<<endl ;
    cout<<x.pop()<<endl ;
    cout<<"------end test_destractor--------"<<endl;

}
void adtest_destractor(Stack &x)
{
    int t = x.stak_size();
    //cout<<t<<endl ;
    cout<<"------adtest_destractor--------"<<endl;
    cout<<"number of classes"<<x.getNumberOfStack()<<endl;
    cout<<x.beek()<<endl ;
    cout<<x.pop()<<endl ;
    cout<<"------end adtest_destractor--------"<<endl;

}
