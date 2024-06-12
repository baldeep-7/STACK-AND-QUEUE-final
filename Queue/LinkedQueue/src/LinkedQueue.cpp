#include <iostream>
#include "LinkedQueue.h"

Queue::Queue()
{}

Queue::~Queue()
{}

ListQueue::ListQueue()
{}

ListQueue::~ListQueue()
{}

bool ListQueue::isFull()
{
    return false;
}

bool ListQueue::isEmpty()
{
    return this->q.isEmpty();
}

bool ListQueue:: enqueue(int element)
{
    this->q.addToTail(element);
    return true;
}

bool ListQueue::dequeue(int &element)
{
    element = this->q.HEAD->info;
    this->q.removeFromHead();
    return true;
}

bool ListQueue::front(int &element)
{
    element = this->q.HEAD->info;
    return true;
}

bool ListQueue::rear(int &element)
{
    element = this->q.TAIL->info;
    return true;
}
