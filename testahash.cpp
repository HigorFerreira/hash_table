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

void TestaHash::menu(){
    int op;
    cout<<"================ Hash Table ================\n";
    cout<<"1 - Insert\n2 - Remove\n3 - Find\n------->";
    cin>>op;
    switch(op){
        case 1:
            insert();
        break;
        case 2:
            remove();
        break;
        case 3:
            slct();
        break;
        default:
            cout<<"Erro\n-------------------------------------------\n";
            menu();
        break;
    }
}

void TestaHash::insert(){
    Item *item = criaItem();
    cout<<"-------------------------------------------\n";
    insertionResponse res = this->obj->insert(item);
    if(res.sucess)
        cout<<res.msg;
    else
        cout<<"Falha na insercao";
    cout<<"-------------------------------------------\n";
    menu();
}
