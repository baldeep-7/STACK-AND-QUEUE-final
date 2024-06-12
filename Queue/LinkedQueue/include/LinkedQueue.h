#pragma once
#include<iostream>
#include "../../../linkedList/include/linkedList.h"


class Queue{
    public : 
        Queue();
        virtual ~Queue();

        virtual bool isFull() = 0;
        virtual bool isEmpty() = 0;
        virtual bool enqueue(int element) = 0;
        virtual bool dequeue(int &element) = 0;
        virtual bool front(int &element) = 0;
        virtual bool rear(int &element) = 0;
};

class ListQueue : public Queue{
    private:
        LinkedList q;

    public:
        ListQueue();
        ~ListQueue();

        bool isFull();
        bool isEmpty();
        bool enqueue(int element);
        bool dequeue(int &element);
        bool front(int &element);
        bool rear(int &element);

};