#pragma once
#include "Linked Lists Iterator .h"
#include"NodeType.h"
template<typename NodeType>
class LinkedListType
{

protected:
	int count;
	NodeType<Type>*first;
	NodeType<Type>*last;
private:
	void CopyList(const LinkedListType<Type>&otherlist)
	{

	}
public:
	NodeType<Type>first
		const LinkedListType<Type>&operator=(const LinkedListType&other)
	{

	};
	//intialize the list to an empty state.
	//postcondition first=NULL count =0.

	void InitilizeList()
	{

	};
	//check if first is NULL
	//if so return true.

	bool isEmpty()const
	{
		if (first = NULL)
		{
			return true;
		}
	};
	//function to return the node in the list.
	//postcondition the value of fount is returned.
	void Print()const
	{

	};
	int Lenght()
	{
		return count;
	};

	//function to delete allthe nodes from the list.
	//postcondition first =NULL count =0.
	void DestroyList()
	{
		end;

	};
	//Function to return the last element of the list.
	//precondition the list must exist and must not be empty
	//post condition if the list is empty
	Type Front()const
	{

	}
	//Function to return the first element of the list.
	//precondition the list must exist and must not be empty
	//post condition if the list is empty
	Type Back()const
	{

	}
	virtual bool Search(const Type&SearchItem)const
	{

	}
	virtual void InsertFirst(const Type&newItem)const
	{

	}
	virtual void  InsertLast(const Type&newItem)const
	{

	}
};
