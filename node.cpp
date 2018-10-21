#include "node.h"

Node::Node(Item *item)
{
    setData(item);
    this->proximo = 0;
}

Node::~Node(){
    delete this->proximo;
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
    this->dados->setNode(this);
}

Item *Node::getData(){
    return this->dados;
}

Node *Node::getNext(){
    return this->proximo;
}
