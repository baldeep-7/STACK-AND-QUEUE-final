#include<iostream>


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

class ArrayQueue : public Queue{
    private:
        int frontIndex;
        int rearIndex;
        int *data;
        int size;
    public:
        ArrayQueue(int max_size);
        ~ArrayQueue();

        bool isFull();
        bool isEmpty();
        bool enqueue(int element);
        bool dequeue(int &element);
        bool front(int &element);
        bool rear(int &element);
};