#ifndef STACK_H
#define STACK_H
template <class T>
class Stack
{


public:
    Stack(int Ssize =10);
    Stack(Stack &x);
    Stack& operator =(const Stack &s);
    void push(T element);
    T pop();
    T beek();
    int stak_size();
    int isFull();
    int isEmpty();
    void clearStack();
    int getNumberOfStack();
    void view_content();
    ~Stack();
    template <class R>
    friend void fviewcontent(Stack<R>);

protected:
private:
    int top ;
    int stakSize ;
    T *st ;
    static int stack_counter;

};

#endif // STACK_H
