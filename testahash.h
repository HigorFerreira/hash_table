#ifndef TESTAHASH_H
#define TESTAHASH_H

#include"hash.h"
#include"item.h"
#include<iostream>

using namespace std;

class TestaHash
{
        Hash *obj;
	public:
        TestaHash(int);
		void menu();
		Item* criaItem();
        Item* criaItem(bool);
        void insert();
        void remove();
        void slct();
};

#endif
