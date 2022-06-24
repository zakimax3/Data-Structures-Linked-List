#include < iostream >
#include "LinkedList.h"

using namespace std;

template<class T>
	LinkedList<T>::LinkedList() {
		Head = Null;
		NumNode = 0;
	}


template < class T >
void LinkedList<T>::InsertFirst(T Data) {
	Node* Current = new Node;
	if (IsEmpty()) {
		Current->Data = Data; 
			Head = Current;
		Current->Next = Null;
		NumNode++;
	}
	else {
		Current->Data = Data;
		Current->Next = Head ;
		Head = Current;
		NumNode++;
	}

}

template < class T >
bool LinkedList<T> ::IsEmpty() {
	if (NumNode == 0) { return true; }
	else { return false; }
}




