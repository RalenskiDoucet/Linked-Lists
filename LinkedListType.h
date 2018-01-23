#pragma once
#include"NodeType.h"
template < class Type>
class LinkedListType
{

protected:
	int count;
	NodeType<Type>*first;
	NodeType<Type>*last;
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
		while(current!='\0')
		{
			InsertLast(current->info);
			current = current->link;
		}
	}
public:
		const LinkedListType<Type>&operator=(const LinkedListType&other)
	{
		if (first == other.first)
			{
				CopyList();
			}
		return first;
	};
	//intialize the list to an empty state.
	//postcondition first=NULL count =0.
	//called DestroyList function to initlize the list

	void InitilizeList()
	{
		while(first!='\0')
		DestroyList();
	};
	//conditional statement that tells if the list empty.
	//check if first is NULL
	//if first is NULL return true.
	//else if first is not NULL return false.
	bool isEmpty()const
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
	//function to return the node in the list.
	//postcondition the value of fount is returned.
	void Print()const
	{
		NodeType<Type> *current;
		current->link->info;
		std::cout <<info;
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
		(first != '\0');
		return first;
	}
	//Function to return the first element of the list.
	//precondition the list must exist and must not be empty
	//post condition if the list is empty
	Type Back()const
	{
		(last!='\0');
		return last;
	}
	virtual bool Search(const Type&other)const
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
	virtual void InsertFirst( const Type&other)
	{
		NodeType<Type> *tempNode = new NodeType<Type>;
		tempNode->info = other;
		tempNode->link = first;
		first = tempNode;
		if (count==0)
		{
			last = first;
		}
	}
	virtual void InsertLast(const Type& other)
	{
		NodeType<Type> *tempNode = new NodeType<Type>();
		tempNode->info = other;
		last->link = tempNode;
		last=tempNode;
		last->link = '\0';
		if (count == 0)
		{
			first = last;
		}
	}
};
