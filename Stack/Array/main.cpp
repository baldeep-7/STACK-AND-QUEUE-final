#include <iostream>
#include "ArrayStack.h"

int main()
{
    ArrayStack s(5);
    std::cout << s.push(10) <<std::endl;
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int element;

    s.pop(element);
    std::cout << "the popped element is"<<element<<std::endl;

    s.pop(element);
    s.top(element);
    std::cout << "The top element is "<<element<<std::endl;
}