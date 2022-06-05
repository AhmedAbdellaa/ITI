#include "Stack.h"
#include <iostream>
using namespace std;
int Stack::stack_counter = 0 ;

/*int top ;
    int stakSize ;
    int *st ;
    static int stack_counter;
    */

//create stack with default size 10
Stack::Stack(int Ssize =10)
{
    stakSize = Ssize;
    top = 0;
    st = new(int[10]);
    stack_counter++;
    cout<<"creat stack sucssfully with size "<<Ssize<<endl;
}
///////////////lab7////////////////////
//creat copy constroctor to prevent delete array pointer at destractor time
Stack::Stack(Stack &cp)
{

    stakSize =cp.stakSize  ;
    top=cp.top  ;
    st = new(int[10]);

    for(int i = 0 ; i<top ; i++)
    {
        st[i]=cp.st[i];

    }
    stack_counter++;
    cout<<"creat **copy** stack sucssfully with size "<<stakSize<<endl;
}

//modefy assiment operator to stack class
Stack& Stack::operator =(const Stack &cp)
{
    delete []st;
    stakSize =cp.stakSize  ;
    top=cp.top  ;
    st = new(int[10]);

    for(int i = 0 ; i<top ; i++)
    {
        st[i]=cp.st[i];

    }
    return *this;
}
//////////////end lab7///////////////
//push element into the end of stack
void Stack::push(int element)
{
    if (isFull())
        cout<<"stack is full "<<endl ;


    else
    {
        st[top] = element;
        top++;
    }
}

//pop element into the end of stack
int Stack::pop()
{
    if(isEmpty())
    {
        cout<<"stack is empty"<<endl;
        return -1;
    }
    else
    {
        top--;
        return st[top];
    }
}
//look at the last element of stack
int Stack::beek()
{
    if(isEmpty())
    {
        cout<<"stack is empty"<<endl;
        return -1;
    }
    else
    {

        return st[top-1];
    }
}

//get the size of stack
int Stack::stak_size()
{
    return top;
}

//check if the stakc is full
int Stack::isFull()
{
//return stakSize == top ? 1: 0
    if(stakSize == top)
        return 1;
    else
        return 0;
}

//check if the stakc is empty
int Stack::isEmpty()
{
    return !top ;
}

//clear stack(return top to zero)
void Stack::clearStack()
{
    top = 0;
}

//get how many stack where created
int Stack::getNumberOfStack()
{
    return stack_counter;
}

//view all content without change stack
void Stack::view_content()
{
    for (int i =top-1 ; i>=0; i--)
    {
        cout<<st[i]<<endl;
    }
}

Stack::~Stack()
{
    delete []st ;
    stack_counter--;
    cout<<"this is destractour "<<endl ;
}



