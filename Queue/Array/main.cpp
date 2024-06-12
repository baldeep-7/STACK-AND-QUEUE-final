#include<iostream>
#include "ArrayQueue.h"

int main()
{
    ArrayQueue q(5);
    std::cout << q.isFull()<<std::endl;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    std::cout <<q.isFull()<<std::endl; 

    int element;
    q.dequeue(element);
    std::cout << element<<std::endl; //the element dequeued must be the first element i.e 10

    q.front(element);
    std::cout << element<<std::endl; //first element entered

    q.rear(element);
    std::cout <<element<<std::endl; //last element entered

}