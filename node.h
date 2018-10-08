#ifndef NODE_H
#define NODE_H

#include"item.h"

class Node
{
    Node *proximo;
    Item *dados;
public:
    Node(Item*);
    ~Node();
    static Node *mount(Item*);
    static Item *unmount(Node*);
    Node *getNext();
    Item *getData();
    void setData(Item *);
    void setNext(Node *);
};

#endif // NODE_H
