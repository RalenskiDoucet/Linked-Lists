#pragma once
template<typename Type>
struct NodeType
{
	Type info;
	NodeType<Type>*link;
};
