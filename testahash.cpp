#include "testahash.h"

TestaHash::TestaHash(int n){
    this->obj = new Hash(n);
}

Item * TestaHash::criaItem(){
    Item *pessoa;

    string aux;
    char auxc;
    double auxd;

    //do{
        cin.ignore();
        pessoa = new Item;
        //cout<<"================ Hash Table ================\n";
        cout<<"-------------------------------------------\n";
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
        return pessoa;
        /*
        cout<<"-------------------------------------------\n";
        insertionResponse res = th->insert(pessoa);
        if(res.sucess)
            cout<<res.msg;
        else
            cout<<"Falha na insercao";
        cout<<"-------------------------------------------\n";
        cout<<"Deseja adicionar outra pessoa?(0/1): ";
        cin>>op;
    }while(op == true); */
}

Item * TestaHash::criaItem(bool){
    Item *pessoa;

    string aux;
    /*
    char auxc;
    double auxd;
    */

        cin.ignore();
        pessoa = new Item;
        //cout<<"================ Hash Table ================\n";
        cout<<"-------------------------------------------\n";
        cout<<"Digite o nome: ";
        getline(cin, aux);
        pessoa->setNome(aux);
        cout<<"Digite o email: ";
        cin>>aux;
        pessoa->setEmail(aux);
        /*
        cout<<"Digite o sexo: ";
        cin>>auxc;
        pessoa->setSexo(auxc);
        cout<<"Digite o Telefone: ";
        cin>>auxd;
        pessoa->setTelefone(auxd);
        */
        return pessoa;
}

void TestaHash::menu(){

    int op;
    cout<<"================ Hash Table ================\n";
    cout<<"1 - Insert\n2 - Remove\n3 - Find\n------->";
    cin>>op;

    switch(op){
        case 1:
            this->insert();
            break;
        case 2:
            this->remove();
            break;
        case 3:
            this->slct();
            break;
        default:
            cout<<"================\nBad option\n";
            this->menu();
        break;
    }
}

void TestaHash::insert(){
    Item *item = criaItem();
    cout<<"-------------------------------------------\n";
    resposta res = this->obj->insert(item);
    if(res.sucess)
        cout<<res.msg;
    else
        cout<<res.msg;
    cout<<"-------------------------------------------\n";
    menu();
}

void TestaHash::remove(){
    Item *item = criaItem(true);
    Item *res = this->obj->remove(item);
    if(res != 0)
        cout<<"-------------------------------------------\n"<<
              res->getNome() + "\nDe hash " + std::to_string(res->getChave()) + " removido com sucesso\n";
    else
        cout<<"-------------------------------------------\n"<<"Item nao encontrado\n";
    cout<<"-------------------------------------------\n";
    menu();
}

void TestaHash::slct(){
    Item * item = criaItem(true);
    Item *res = this->obj->select(item);
    if(res != 0)
        cout<<"-------------------------------------------\n"<<
              res->getNome() + "\nFoi encontrado no indice " + std::to_string(res->getChave()) + "\n";
    else
        cout<<"-------------------------------------------\n"<<"Item nao encontrado\n";
    cout<<"-------------------------------------------\n";
    menu();
}
