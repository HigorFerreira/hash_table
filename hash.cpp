#include "hash.h"
#include<string>
//#include<iostream>

using namespace std;

Hash::Hash(int tam){
	this->tam = tam;
	this->vetor = new List*[tam];
	for(int i = 0; i < tam; i++){
		this->vetor[i] = new List;
	}
}

int Hash::hash_function(Item *obj){
	long n1,n2,res;
	n1=n2=res=0;
	
	for(int i = 0; i < obj->getNome().size(); i++){
		n1 += (int)obj->getNome()[i];
	}
	
	for(int i = 0; i < obj->getEmail().size(); i++){
		n2 += (int)obj->getEmail()[i];
	}
	
	//cout<<n1<<endl;
	//cout<<n2<<endl;
	res = (int)(n1*0.3 + n2*0.7);
	//cout<<res<<endl;
	res = res%this->tam;
	//cout<<res<<endl;
	obj->setChave(res);
	return res;
}

bool Hash::insert(Item *item){
	//int index = Hash::hash_function(item);
	int index = hash_function(item);
	
	this->vetor[index]->insert(item);
	
	return true;
}

Item * Hash::remove(Item *item){
	
}
