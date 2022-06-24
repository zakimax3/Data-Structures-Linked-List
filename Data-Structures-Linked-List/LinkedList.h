#pragma once
template < class T >
class LinkedList
{
private :
	struct Node {
		T Data;
		Node* Next;
	};
	Node* Head;
	int NumNode; // Numbers Of The Node In LinkedList 
public :
	LinkedList();
	void InsertFirst(T Data);
	bool IsEmpty();


};

