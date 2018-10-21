#include "item.h"

string Item::getNome() const
{
    return nome;
}

void Item::setNome(const string &value)
{
    nome = value;
}

char Item::getSexo() const
{
    return sexo;
}

void Item::setSexo(char value)
{
    sexo = value;
}

string Item::getEmail() const
{
    return email;
}

void Item::setEmail(const string &value)
{
    email = value;
}

double Item::getTelefone() const
{
    return telefone;
}

void Item::setTelefone(double value)
{
    telefone = value;
}

int Item::getChave() const
{
    return chave;
}

void Item::setChave(const int &value)
{
    chave = value;
}

void Item::setNode(Node *n){
	this->node = n;
}

Node * Item::getNode(){
	return this->getNode();
}

Item::Item()
{
	this->node = 0;
}
