
#include<iostream>
#include "LinkedStack.h"


Stack::Stack(){}

Stack ::~Stack(){}

LinkedStack::LinkedStack()
{

}


LinkedStack :: ~LinkedStack()
{

}

bool LinkedStack::push(int element)
{
    this->l.addToHead(element);
    return true;
    
}

bool LinkedStack::pop(int &element)
{
    element = this->l.TAIL->info;
    this->l.removeFromTail();
    return true;
}


bool LinkedStack::isFull()
{
    return false;
}

bool LinkedStack :: isEmpty()
{
    return this->l.HEAD == NULL;
}

bool LinkedStack ::top(int &element)
{
    element = this->l.HEAD->info;
    if(element)
    {
        return true;
    }
    else
    {
        return false;
    }
}
