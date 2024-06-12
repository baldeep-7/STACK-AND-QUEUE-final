#include<iostream>
#include "LinkedQueue.h"

int main()
{
    ListQueue q;
    std::cout << q.isEmpty()<<std::endl;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    std::cout << q.isEmpty()<<std::endl;

    int element;
    q.rear(element);
    std::cout <<"rear element = "<<element<<std::endl;

    q.front(element);
    std::cout <<"front element = "<<element<<std::endl;

    q.dequeue(element);
    std::cout << "dequeued element is "<<element<<std::endl;
}
