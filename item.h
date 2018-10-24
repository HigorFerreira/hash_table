#ifndef ITEM_H
#define ITEM_H

#include<string>

using namespace std;

class Item
{
    string nome;
    char sexo;
    string email;
    double telefone;
    long long chave;
    
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
    long long getChave() const;
    void setChave(const long long &value);
};

#endif // ITEM_H
