#include<iostream>
#include "LinkedListsIterator.h"
#include "LinkedListType.h"
#include <assert.h>
void main()
{
	NodeType<int> a;
	NodeType<int> b;
	NodeType<int> c;
	LinkedListIterator<int> iterator = LinkedListIterator<int>(&a);
	iterator.operator++();
	LinkedListType<int>*ListNum1 = new LinkedListType<int>();
	LinkedListType<int>*ListNum2 = new LinkedListType<int>();

	ListNum1->InsertFirst(1);
	ListNum1->InsertLast(15);
	ListNum1->Print();
	ListNum1->InitilizeList();
	ListNum2->InsertFirst(1);
	ListNum2->InsertLast(15);
	ListNum2->Print();
	ListNum2->InitilizeList();

}
