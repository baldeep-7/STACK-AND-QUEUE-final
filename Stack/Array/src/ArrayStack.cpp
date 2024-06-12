#include <iostream>
#include "ArrayStack.h"


Stack::Stack()
{

}

Stack:: ~Stack()
{

}

ArrayStack ::ArrayStack(int maxSize) : size(maxSize), data(new int[maxSize]), topIndex(-1)
{
}

ArrayStack ::~ArrayStack()
{
}

bool ArrayStack::isEmpty()
{
    return (topIndex == -1 ? true : false);
}

bool ArrayStack ::isFull()
{
    return (topIndex == size - 1 ? true : false);
}

bool ArrayStack ::push(int element)
{
    if (!this->isFull())
    {
        topIndex++;
        data[topIndex] = element;
        return true;
    }
    else
    {
        std::cout << "Error : Push Failed :Stack Overflow" << std::endl;
        return false;
    }
}

bool ArrayStack ::pop(int &element)
{
    if (!this->isEmpty())
    {
        element = data[topIndex];
        topIndex--;
        return true;
    }
    else
    {
        std::cout << "Stack Underflow" << std::endl;
        return false;
    }
}

bool ArrayStack ::top(int &element)
{
    if (!this->isEmpty())
    {
        element = data[topIndex];
        return true;
    }
    else
    {
        std::cout << " Empty Stack " << std::endl;
        return false;
    }
}