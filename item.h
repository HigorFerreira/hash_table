#ifndef ITEM_H
#define ITEM_H

#include"node.h"
#include<string>

using namespace std;

class Item
{
    string nome;
    char sexo;
    string email;
    double telefone;
    int chave;
    
    Node *node;
    
public:
    Item();
    string getNome() const;
    void setNome(const string &value);
    char getSexo() const;
    void setSexo(char value);
    string getEmail() const;
    void setEmail(const string &value);
    double getTelefone() const;
    void setTelefone(double value);
    int getChave() const;
    void setChave(const int &value);
    
    void setNode(Node *n){ this->node = n;}
    Node *getNode(){ return this->node;}
};

#endif // ITEM_H
