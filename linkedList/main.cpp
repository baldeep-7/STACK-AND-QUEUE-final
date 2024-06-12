#include <iostream>
#include "linkedList.h"

int main()
{
    LinkedList list;

    list.addToHead(10);

    list.addToTail(20);

    list.add(30, 20);

    list.addToTail(40);
    list.add(50, 40);

    list.remove(30); // needs to remove a node with info 30

    list.Traverse();
}
