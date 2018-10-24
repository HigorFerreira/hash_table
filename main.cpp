#include<iostream>
#include"testahash.h"

#include"hash.h"
#include"item.h"

using namespace std;

int main(){

    TestaHash *th = new TestaHash(10);
    th->menu();

    /*
    Item *pessoa = new Item();
    pessoa->setNome("Higor Ferreira");
    pessoa->setEmail("hfashigor@hotmail.com");

    Hash *h = new Hash(10);
    h->hash_function(pessoa);

    resposta res = h->insert(pessoa);
    if(res.sucess){
        cout<<res.msg<<endl;
    }
    else{
        cout<<res.msg<<endl;
    }
    */
}
