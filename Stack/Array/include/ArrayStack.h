#include <iostream>

class Stack
{
public:
    Stack();
    ~Stack();

    virtual bool push(int element) = 0;
    virtual bool pop(int &element) = 0;
    virtual bool top(int &element) = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
};



class ArrayStack : public Stack
{
private:
    int size;
    int *data;
    int topIndex;

public:
    ArrayStack(int maxSize);

    bool push(int element);
    bool pop(int &element);
    bool top(int &element);
    bool isEmpty();
    bool isFull();

    ~ArrayStack();
};