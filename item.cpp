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

long long Item::getChave() const
{
    return this->chave;
}

void Item::setChave(const long long &value)
{
    this->chave = value;
}

Item::Item()
{

}
