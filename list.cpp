#include "list.h"

List::List()
{
	this->start = 0;
	this->end = 0;
}

bool List::isEmpty(){
	return this->start == 0 && 0 == this->end;
}

bool List::insert(Item *item){
	Node *nodeCreated = Node::mount(item);
	if(isEmpty())
		this->start = nodeCreated;
	else
		this->end->setNext(nodeCreated);
	this->end = nodeCreated;
}

Item *List::remove(Item *item){
	Node no = item->getNode();
	if(no->getNode() == 0) return 0;
	
	Item *item = no->getData();
	
	if(no == this->start){
		this->start = no->getNext();
		Item * item = no->getData();
		delete no;
		return item;
	}
	
	Node *ant = this->start, *nxt = no->getNext();
	while(ant->getNext() != no){
		ant = ant->getNext();
	}
	ant->setNext(nxt);
	delete no;
	if(nxt==0) this->end = 0;
	return item;
}

Item *List::find(Item *item){
	if(isEmpty())
		return 0;
		
	Node *obj = this->start;
	while(obj != 0){
		if(item->getNome() == obj->getData()->getNome() && item->getEmail() == obj->getData()->getEmail())
			break;
		else
			obj = obj->getNext();
	}
	
	if(obj != 0)
		return obj->getData();
	else
		return 0;
}
