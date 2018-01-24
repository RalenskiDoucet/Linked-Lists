#pragma once
#include "NodeType.h"
template <class Type>
class LinkedListIterator
{
private:
	NodeType<Type>*current;
public:
	LinkedListIterator()// sets current equal to NULL.
	{
		current = NULL;
	};


	LinkedListIterator(NodeType<Type>*ptr)//Sets current equal to ptr.
	{
		current = ptr;
	};
	LinkedListIterator<Type>operator++()//the iterator is advanced to the next node.
	{

		return this ->current = current->link;
	}
	//function to overload the prre-increment operator.
	//post condition the iterator is advanced to the next node.
	LinkedListIterator<Type> *operator*()
	{

		return this->current->info;
	};



	bool operator==(const LinkedListIterator<Type>&right)const//return true if iterator is equal.//by right otherwise it returns false.
	{
		return true this->current == right->current;
	}


	bool operator!=(const LinkedListIterator<Type>&right)const//return true if the iterator is not equal.//by right otherwise it returns false.
	{
		return true this->current != right->current;
	}
};
