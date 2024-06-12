#include <iostream>
#include "linkedList.h"

LinkedList ::LinkedList()
{
    HEAD = NULL;
    TAIL = NULL;
}

void LinkedList::addToHead(int data)
{
    Node *newNode = new Node(data);
    newNode->next = HEAD;
    HEAD = newNode;
    if (TAIL == NULL) // if TAIL is empty and new node is added to HEAD, then the new node is also a TAIL
    {
        TAIL = HEAD;
    }
}

void LinkedList ::Traverse()
{
    if (!this->isEmpty())
    {
        Node *p;
        p = HEAD;
        while (p != NULL) // prints the value of all the nodes present until a node is not null
        {
            std::cout << p->info << "\t";
            p = p->next;
        }
    }
}

void LinkedList ::addToTail(int data)
{
    Node *newNode = new Node(data);
    if (this->isEmpty()) // if the list is empty , a ner added node is both the HEAD as well as TAIL
    {
        TAIL = newNode;
        newNode->next = NULL;
        HEAD = TAIL;
    }
    else
    {
        TAIL->next = newNode;
        TAIL = newNode;
        newNode->next = NULL;
    }
}

bool LinkedList ::isEmpty()
{
    if (HEAD == NULL && TAIL == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

Node *LinkedList::search(int data) // returns a node pointer in case info in one of the nodes matches the input data
{
    if (HEAD == nullptr && TAIL == nullptr)
    {
        std::cout << "The list is empty" << std::endl; // if list is empty there is no node with info == data
        return nullptr;
    }

    Node *temp = HEAD;
    while (temp != nullptr) //----------------------------
    {
        if (temp->info == data)
        {
            return temp; // if a mathcing data is found then the node is returned in between dashed line
        }
        else
        {
            temp = temp->next; //----------------------------------
        }
    }
    std::cout << "not found" << std::endl;
    return nullptr; // control reaches here if a node with info == data is not found
}

void LinkedList ::add(int data, int pred_data)
{ // adds data to a specific place when predecessor node is provided

    Node *pred = search(pred_data);
    if (this->isEmpty())
    {
        addToHead(data);
    }
    else if (pred == TAIL)
    {
        addToTail(data);
    }
    else
    {
        Node *t = new Node(data);
        t->next = pred->next;
        pred->next = t;
    }
}

void LinkedList ::removeFromHead() // removes the HEAD node and makes the next node HEAD if present
{
    Node *nodeToDelete = HEAD;

    if (HEAD == TAIL)
    {
        delete nodeToDelete;
        HEAD = NULL;
        TAIL = NULL;
    }
    else
    {
        HEAD = HEAD->next;
        delete nodeToDelete;
    }
}

void LinkedList ::removeFromTail()
{
    Node *nodeToDelete = TAIL;

    Node *p = HEAD;
    while (p->next != TAIL && HEAD != TAIL)
    {
        p = p->next;
    }

    Node *pred = p;
    if (HEAD == TAIL)
    {
        delete nodeToDelete;
        HEAD = NULL; // if there is only one node in the list then that node is both the HEAD and TAIL of the node
        TAIL = NULL;
    }
    else
    {
        pred->next = NULL;
        TAIL = pred;
        delete nodeToDelete;
    }
}

void LinkedList::remove(int data)
{
    if (!this->isEmpty())
    {
        Node *temp;
        Node *prev;
        if (HEAD->info == data) // if data matches info of HEAD ,HEAD is deleted
        {
            removeFromHead();
        }
        else
        {
            temp = HEAD->next;
            prev = HEAD;
        }

        while (temp != nullptr)
        {
            if (temp->info == data)
            {
                break;
            }
            else
            {
                prev = prev->next;
                temp = temp->next;
            }
        }

        if (temp != nullptr)
        {
            prev->next = temp->next;
            delete temp;
        }

        if (prev->next == nullptr) // the only node whose next is nullptr is TAIL
        {
            TAIL = prev;
        }
    }
}