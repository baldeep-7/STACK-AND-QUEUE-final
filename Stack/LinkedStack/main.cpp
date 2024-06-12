
#include<iostream>
#include "LinkedStack.h"

int main()
{
    LinkedStack l;
    std::cout << l.isEmpty() <<std::endl; //should give 1

    l.push(20);
    l.push(30);
    l.push(40);
    int element;
    std::cout << l.pop(element) <<std::endl; //should give 1

    std::cout << "The popped element is "<<element<<std::endl; //should be the element first pushed i.e 20

    l.top(element);
    std::cout << "The top element is "<<element<<std::endl;  //should be 40
}