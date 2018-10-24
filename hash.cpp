#include "hash.h"
#include<string>
#include<iostream>

using namespace std;

Hash::Hash(int tam){
	this->tam = tam;
	this->vetor = new List*[tam];
	for(int i = 0; i < tam; i++){
		this->vetor[i] = new List;
	}
}

int Hash::hash_function(Item *obj){
    string email = obj->getEmail(); // <- "gabriel@g.com"
    long long hash = 1;

    for(int i = 0; i < email.size(); i++){
        hash *= (int)email[i];
    }

    for(int i = obj->getEmail().size() - 1; i > -1; i--){
        hash += (int)email[i];
    }

    obj->setChave(hash);

    int indice = hash%this->tam;

    return indice;
}

resposta Hash::insert(Item *item){
    resposta res;
	//int index = Hash::hash_function(item);
    int index = hash_function(item);
	
    if(index < 0)
        index *= -1;

    if(index > this->tam-1 || index < 0){
        res.sucess = false;
        res.msg = "Deu erro por que o indice e: " + to_string(index) + "\n";
        return res;
    }

	this->vetor[index]->insert(item);
	
	res.sucess = true;
    res.msg = item->getNome()  + "\nInserido com hash " + std::to_string(item->getChave()) + "\n"
               + "Com indice ---> " + to_string(index) + "\n";
    res.hash = item->getChave();
    res.indice = index;
	
	return res;
}

Item * Hash::remove(Item *item){
	int index = hash_function(item);
	Node *node = this->vetor[index]->find(item);
	if(node == 0)
		return 0;
	else
		return this->vetor[index]->remove(node);
}

Item * Hash::select(Item *item){
	int index = hash_function(item);
	Node *node = this->vetor[index]->find(item);
	if(node == 0)
		return 0;
	else
		return node->getData();
}
