#include "TestFriend.h"
#include "Stack.h"
#include <iostream>
using namespace std;

TestFriend::TestFriend()
{
cout<<"*************testing friend********"<<endl;
Stack x(5);
cout<<"number of classes"<<x.getNumberOfStack()<<endl;
cout<<"printing from TestFriend class "<<x.stakSize<<endl ;
cout<<"*************end testing friend********"<<endl;
    //ctor
}
 void TestFriend::printing(){
    cout<<"testprint"<<endl;
 }
