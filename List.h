#pragma once

struct Data
{
	int x;
	int y;

};

struct Node
{
	Data data;
	struct  Node* pnext;

};

struct List
{
	Node* front;
	Node* rear;
	int count;
};
int InitList(List** pplist);
void TraverList(List* plist, void(*Traver)(Node* pnode));
int IsEmpty(List* plist);
void Inserlist(List* plist, Node* pnode);