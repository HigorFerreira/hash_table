#include "node.h"

Node::Node(Item *item)
{
    this->dados = item;
}

Node::~Node(){
    delete this->dados;
}

Node *Node::mount(Item * item){
    Node *result = new Node(item);
    return result;
}

Item *Node::unmount(Node *node){
    delete node;
}

void Node::setNext(Node *node){
    this->proximo = node;
}

void Node::setData(Item *data){
    this->dados = data;
}

Item *Node::getData(){
    return this->dados;
}

Node *Node::getNext(){
    return this->proximo;
}
