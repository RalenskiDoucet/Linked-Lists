#pragma once
#include "Linked Lists Iterator .h"
#include"NodeType.h"
#include <cstddef>

template <class Type>
class LinkedListType
{

protected:
	int count;
	NodeType<Type>*first;
	NodeType<Type>*last;
private:
	void CopyList(const LinkedListType<Type>&otherlist)
	{
		NodeType<Type> list1;
		list1.link->info;
		NodeType<Type>list2;
		isEmpty(list2);
		list2.link->list1->info;
	}
public:
		const LinkedListType<Type>&operator=(const LinkedListType&other)
	{

	};
	//intialize the list to an empty state.
	//postcondition first=NULL count =0.
	//called DestroyList function to initlize the list

	void InitilizeList()
	{
		DestroyList();
	};
	//conditional statement that tells if the list empty.
	//check if first is NULL
	//if first is NULL return true.
	//else if first is not NULL return false.
	bool isEmpty()const
	{
		if (first = NULL)
		{
			return true;
		}
		else (first != NULL);
		{
			return false;
		}
	};
	//function to return the node in the list.
	//postcondition the value of fount is returned.
	void Print()const
	{

	};
	//iterates through list.
	//returns the amount of nodes in the list.
	int Lenght()
	{
		return count;
	};

	//function to delete all the nodes from the list.
	//postcondition first =NULL count =0.
	//made a temp node.
	//used a while for while first is not equal to last.
	//referenced the temp node to assign the temp to first.
	//then assigned first to link.
	//then delete the referenced temp.
	void DestroyList()
	{
		NodeType<Type>*current;
		*current->link->first;
		delete *current;

	};
	//Function to return the last element of the list.
	//precondition the list must exist and must not be empty
	//post condition if the list is empty
	Type Front()const
	{
		return last;
	}
	//Function to return the first element of the list.
	//precondition the list must exist and must not be empty
	//post condition if the list is empty
	Type Back()const
	{
		return first;
	}
	virtual bool Search(const Type&SearchItem)const
	{

	}

	virtual void InsertFirst(const Type&newItem)const
	{
		NodeType<Type> *current;
		current->link;
		first = current;

	}
	virtual void  InsertLast(const Type&newItem)const
	{
		NodeType<Type> *current;
		current->link;
		last = current;
	}
};
