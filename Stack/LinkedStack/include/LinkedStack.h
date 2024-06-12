

#include<iostream>
#include "../../../linkedList/include/linkedList.h"

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


class LinkedStack: public Stack{

    private:
        LinkedList l;
    public:

        LinkedStack();
        ~LinkedStack();
        bool push(int element);
        bool pop(int &element);
        bool top(int &element);
        bool isEmpty();
        bool isFull();

};