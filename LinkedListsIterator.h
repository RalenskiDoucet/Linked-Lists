#pragma once
#include "NodeType.h"
template <class Type>
class LinkedListdIterator
{
private:
	NodeType<Type>*current;
public:
	//default construct.
	//postcondition current NULL.
	LinkedListdIterator()
	{
		Type Node;
	};
	//consturctor with a parameter.
	//postcondition current ptr.
	LinkedListdIterator(NodeType<Type>)
	{
		Type *Node;
	};
	//function to overload the prre-increment operator.
	//post condition the iterator is advanced to the next node.
	Type operator*()
	{
		Type Node1;
		Type Node2;
	return Node1 * Node2;
	};
	//Overload the is equal operator.
	//postcondition return true if iterator is equal.
	//by right otherwise it returns false.
	bool operator==(const LinkedListdIterator<Type>&right)const
	{
		return true this->Type == Type.right;
	}
	//overload the not equal operator
	//postcondition return true if the iterator is not equal;
	//by right otherwise it returns false.
	bool operator!=(const LinkedListdIterator<Type>&right)const
	{
		return true this->Type != Type.right;
	}
};
