#include<iostream>
#include"hash.h"
#include"item.h"
using namespace std;

int main(){
	bool op = true;
	Hash *th = new Hash(10);
	
	Item *pessoa;
	
	string aux;
	char auxc;
	double auxd;
	
	do{
		pessoa = new Item;
		cout<<"================ Hash Table ================\n";
		cout<<"Digite o nome: ";
		cin>>aux;
		pessoa->setNome(aux);
		cout<<"Digite o email: ";
		cin>>aux;
		pessoa->setEmail(aux);
		cout<<"Digite o sexo: ";
		cin>>auxc;
		pessoa->setSexo(auxc);
		cout<<"Digite o Telefone: ";
		cin>>auxd;
		pessoa->setTelefone(auxd);
		cout<<"-------------------------------------------\n";
	}while(op == true);
	
	
}
