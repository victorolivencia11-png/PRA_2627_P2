#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <ostream>
#include <stdexcept>
#include "Dict.h"
#include "TableEntry.h"
#include </media/sf_Vctor/UNI/SEGUNDO/1 SEM/PRA/practica1/pract1a>

template <typename V>
class HashTable: public Dict<V> {

    private:
		int n;
		int max;
		ListLinked<TableEntry<V>>* table
		int h(std::string key){
			int s=0;
			for(int i=0; i<key.size()-1;i++){
				s+=(int)key[i];
				s=s%max;
			}
			return 
	public:
        HashTable(int size){
			table.n=size;
		}

	~HashTable(){
		delete table;
	}

	int capacity(){
		return max;
	}

	V operator[](std::string key)
			if(table->

        
};

#endif
