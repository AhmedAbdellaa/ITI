#include "Stack.h"
#include <iostream>

using namespace std;

template <class T>
int Stack<T>::stack_counter = 0 ;




//create stack with default size 10
template <class T>
Stack<T>::Stack(int Ssize ) // int Ssize =10
{

    stakSize = Ssize;
    top = 0;
    st = new(T[10]);
    stack_counter++;
    cout<<"creat stack sucssfully with size "<<Ssize<<endl;
}
///////////////lab7////////////////////
//creat copy constroctor to prevent delete array pointer at destractor time
template <class T>
Stack<T>::Stack(Stack &cp)
{

    stakSize =cp.stakSize  ;
    top=cp.top  ;
    st = new(T[10]);

    for(int i = 0 ; i<top ; i++)
    {
        st[i]=cp.st[i];

    }
    stack_counter++;
    cout<<"creat **copy** stack sucssfully with size "<<stakSize<<endl;
}

//modefy assiment operator to stack class
template <class T>
Stack<T>& Stack<T>::operator =(const Stack &cp)
{
    delete []st;
    stakSize =cp.stakSize  ;
    top=cp.top  ;
    st = new(T[10]);

    for(int i = 0 ; i<top ; i++)
    {
        st[i]=cp.st[i];

    }
    return *this;
}
//////////////end lab7///////////////
//push element into the end of stack
template <class T>
void Stack<T>::push(T element)
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
template <class T>
T Stack<T>::pop()
{
    if(isEmpty())
    {
        cout<<"stack is empty"<<endl;
        return NULL;
    }
    else
    {
        top--;
        return st[top];
    }
}
//look at the last element of stack
template <class T>
T Stack<T>::beek()
{
    if(isEmpty())
    {
        cout<<"stack is empty"<<endl;
        return NULL;
    }
    else
    {

        return st[top-1];
    }
}

//get the size of stack
template <class T>
int Stack<T>::stak_size()
{
    return top;
}

//check if the stakc is full
template <class T>
int Stack<T>::isFull()
{
//return stakSize == top ? 1: 0
    if(stakSize == top)
        return 1;
    else
        return 0;
}

//check if the stakc is empty
template <class T>
int Stack<T>::isEmpty()
{
    return !top ;
}

//clear stack(return top to zero)
template <class T>
void Stack<T>::clearStack()
{
    top = 0;
}

//get how many stack where created
template <class T>
int Stack<T>::getNumberOfStack()
{
    return stack_counter;
}

//view all content without change stack
template <class T>
void Stack<T>::view_content()
{
    for (int i =top-1 ; i>=0; i--)
    {
        cout<<st[i]<<endl;
    }
}
template <class T>
Stack<T>::~Stack()
{
    delete []st ;
    stack_counter--;
    cout<<"this is destractour "<<endl ;
}
template class Stack<int>;
template class Stack<float>;
template class Stack<string>;

