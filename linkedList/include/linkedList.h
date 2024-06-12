#pragma once
class Node
{

public:
    int info;
    Node *next;

    Node(int Data) : info(Data)
    {
    }
};

class LinkedList
{

public:
    Node *HEAD;
    Node *TAIL;
    LinkedList();

    void addToHead(int data);
    void addToTail(int data);
    void add(int data, int pred_data);

    void removeFromHead();
    void removeFromTail();
    void remove(int data);

    Node *search(int data);

    void Traverse();

    bool isEmpty();
};