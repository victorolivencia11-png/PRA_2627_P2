#ifndef TABLEENTRY_H
#define TABLEENTRY_H

#include <string>
#include <ostream>

using namespace std;
template <typename V>

class TableEntry {
    public:
        // miembros públicos
		string key;
		V value;
		
		TableEntry(){
			key="";
		}

		TableEntry(string key){
			this->key=key;
		}
		
		TableEntry(string key, V value){
			this->key=key;
			this->value=value;
		}

		friend bool operator==(const TableEntry<V> &te1, const TableEntry<V> &te2){
			return te1.key==te2.key;
		}
		
		friend bool operator!=(const TableEntry<V> &te1, const TableEntry<V> &te2){
			return !(te1.key==te2.key);
		}

		friend ostream& operator<<(ostream &out, const TableEntry<V> &te){
			out<<" ('"<<te.key<<"'"<<" ==> "<<te.value<<") "<<endl;
			return out;
		}

};

#endif
