#include<iostream>

#include"ArrayQueue.h"

Queue::Queue()
{

}

Queue::~Queue()
{

}

ArrayQueue :: ArrayQueue(int max_size): size(max_size),data(new int[max_size])
{
    frontIndex = -1;
    rearIndex = -1;
}

ArrayQueue ::~ArrayQueue()
{}

bool ArrayQueue::isFull()
{
    if(rearIndex == size-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool ArrayQueue::isEmpty()
{
    if(frontIndex == rearIndex)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool ArrayQueue::enqueue(int element)
{
    if(!this->isFull())
    {
        rearIndex++;
        data[rearIndex] = element;
        return true;
    }
    else
    {
        std::cout <<"Error : Stack Overflow -> Failed to enqueue"<<std::endl;
        return false;
    }

}

bool ArrayQueue::dequeue(int &element)
{
    if(!this->isEmpty())
    {
        frontIndex ++;
        element = data[frontIndex];
        return true;
    }
    else
    {
        std::cerr << "Error : Stack underflow -> Failed to dequeue"<<std::endl;
        return false;
    }
}

bool ArrayQueue::front(int &element)
{
    if(!this->isEmpty())
    {
        element = data[frontIndex+1];
        return true;
    }
    else
    {
        std::cout << "Error : Stack Underflow"<<std::endl;
        return false;
    }
}

bool ArrayQueue::rear(int &element)
{
    if(!this->isEmpty())
    {
        element = data[rearIndex];
        return true;
    }
    else
    {
        std::cout << "Error : Stack Underflow"<<std::endl;
        return false;
    }
}