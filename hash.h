#ifndef HASH_H
#define HASH_H

#include"list.h"

class Hash
{
	private:
		int tam;
		List vetor**;
	public:
		int hash_function(/* key */);	//(0 =< x < tam)
		bool insert(Item*);
		Item* remove(Item*);
		Item* select(Item*);
};

#endif
