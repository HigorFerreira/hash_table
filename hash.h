#ifndef HASH_H
#define HASH_H

#include"list.h"
#include"item.h"

class Hash
{
	private:
		int tam;
		List **vetor;
	public:
		Hash(int);
		int hash_function(Item*);	//(0 =< x < tam)
		bool insert(Item*);
		Item* remove(Item*);
		Item* select(Item*);
};

#endif
