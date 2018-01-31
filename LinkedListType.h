#pragma once
#include <iostream>
#include"NodeType.h"
#include "LinkedListsIterator.h"

template < class Type>
class LinkedListType
{

protected:
	int count;
	NodeType<Type>*first;//1st Node in the list.
	NodeType<Type>*last;//Last Node in the list.

public:
		const LinkedListType<Type>&operator=(const LinkedListType&other)//overload the assignment operator.
	{
		if (first == other.first)
				CopyList();
		else
			return first;
	};
	void InitilizeList()//intialize the list to an empty state.//postcondition first=NULL count =0.//postcondition first=NULL count =0.
	{
		while(first!=NULL)
		DestroyList();
	};
	bool isEmpty()const//conditional statement that tells if the list empty.//check if first is NULL//if first is NULL return true.//else if first is not NULL return false.
	{
		if (first != '\0')
		{
			return true;
		}
		else (first != '\0');
		{
			return false;
		}
	};
	void Print()const//function to return the nodes in the list.
	{
		NodeType<Type> *current=first;
		if(current!=NULL)
		{
		}
		current->link->info;
		std::cout << current->info<<std::endl;
		current = current->link;
	};
	int Lenght()//iterates through list.//returns the amount of nodes in the list.
	{
		return count;
	};
	void DestroyList()//function to delete all the nodes from the list.//postcondition first =NULL count =0.//made a temp node.//used a while for while first is not equal to last.//referenced the temp node to assign the temp to first.//then assigned first to link.//then delete the referenced temp.
	{
		NodeType<Type>*current;
		while (first != NULL)
		{
			current = first;
			first = first->link;
			delete current;
		}
		last = '\0';
		count = 0;
	};
	void DeleteNode(const Type&other)
	{
		NodeType<Type>*current = new NodeType<Type>;
		NodeType<Type>*nextNode = new NodeType<Type>;
		if (first->info=other)
		{
			current = first;
			first = first->link;
			delete current;
			 count--;
			 return;
		}
		current = first->link;
		while(first!='\0')
			if(current->link->info==other)
			{
				NodeType<Type>*tempNode = current->link;
				current->link = tempNode->link;
				delete tempNode;
				count--;
				return;
			}
		current = current->link;
	}
	Type Front()const//Function to return the last element of the list.//precondition the list must exist and must not be empty//post condition if the list is empty
	{
		(first != '\0');
		return first;
	}
	Type Back()const//Function to return the first element of the list.//precondition the list must exist and must not be empty//post condition if the list is empty
	{
		(last!='\0');
		return last;
	}
	virtual bool Search(const Type&other)const// A function that searches the list for a match and returns true if a match is found and false if a match is not found.
	{
		NodeType<Type> *result=new NodeType<Type>;
		while(first !='\0')
		{
			result = first->link;
			if(result->info!=other)
			{
				return true;
			}
			return false;
		}
	}
	virtual void InsertFirst( const Type&other)// a function that adds a new first node to the list
	{
		NodeType<Type> *tempNode = new NodeType<Type>;
		tempNode->info = other;
		tempNode->link = first;
		first = tempNode;
		if (count==0)
		{
			last = first;
		}
		count++;
	}
	virtual void InsertLast(const Type& other)// a function that adds a new last node to the list
	{
		NodeType<Type> *tempNode = new NodeType<Type>;
		tempNode->info = other;
		last->link = tempNode;
		last=tempNode;
		last->link = '\0';
		if (count == 0)
		{
			first = last;
		}
		count++;
	}
	Type Begin(LinkedListIterator<Type>&other)// a function that indacates the begining of the list
	{
		LinkedListIterator<Type> *tempNode;
		tempNode->current = first;
		return first;
	}
	Type End(LinkedListIterator<Type>&other)// a functin that indacates the endding of the list
	{
		LinkedListIterator<Type>*tempNode;
		tempNode->current = last;
		return last;

	}
	LinkedListType(const LinkedListType<Type>&other)
	{

	}
	~LinkedListType()
	{

	}
	private:
		void CopyList(const LinkedListType<Type>&otherlist)
		{
			NodeType<Type>*tempNode;
			NodeType<Type>*current;
			tempNode = current;
			current = otherlist.first;
			first = tempNode;
			last = tempNode;
			InsertFirst(current->info);
			current = current->link;
			while (current != '\0')
			{
				InsertLast(current->info);
				current = current->link;
			}
		}

};
