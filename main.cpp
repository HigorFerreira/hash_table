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
		cin.ignore();
		pessoa = new Item;
		cout<<"================ Hash Table ================\n";
		cout<<"Digite o nome: ";
		getline(cin, aux);
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
		insertionResponse res = th->insert(pessoa);
		if(res.sucess)
			cout<<pessoa->getNome()<<endl<<"Inserido com sucesso, com hash "<<res.hash<<endl;
		else
			cout<<"Falha na insercao";
		cout<<"-------------------------------------------\n";
		cout<<"Deseja adicionar outra pessoa?(0/1): ";
		cin>>op;
	}while(op == true);
	
	
}
