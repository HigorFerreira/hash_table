#ifndef LIST_H
#define LIST_H

#include"node.h"

class List
{
    Node *start;
    Node *end;
public:
    List();
    bool isEmpty();
    bool insert(Item *);
    Item *remove(Item *);
    Item *find(Item *);
};

#endif // LIST_H
