#ifndef STACK_H
#define STACK_H
#include "TestFriend.h"

class Stack
{


public:
    Stack(int Ssize);
    Stack(Stack &x);
    Stack& operator =(const Stack &s);
    void push(int element);
    int pop();
    int beek();
    int stak_size();
    int isFull();
    int isEmpty();
    void clearStack();
    int getNumberOfStack();
    void view_content();
    ~Stack();

    friend void fviewcontent(Stack x);
    friend class TestFriend;

protected:
private:
    int top ;
    int stakSize ;
    int *st ;
    static int stack_counter;

};

#endif // STACK_H
