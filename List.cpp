#include"List.h"
#include<cmath>

//初始化链表

int InitList(List** pplist)//pplist->olist
{
	List* pplist = new List;
	if (NULL == *pplist)
	return 0;
	else
	{
		(*pplist)->front = NULL;
		(*pplist)->rear = NULL;
		(*pplist)->count = 0;

	}
	return 1;
}

//遍历链表 
//函数指针
void TraverList(List* plist, void(*Traver)(Node* pnode))
{
	Node* ptemp = plist->front;//ptemp指向第一个节点
	int listsize = plist->count;

	while (listsize)
	{
		Traver(ptemp);
		ptemp = ptemp->pnext;
		listsize--;
	}
}
//判断链表是否为空
int IsEmpty(List* plist)
{
	if (plist->count == 0)
		return 1;
	else
	{
		return 0;
	}
}


//插入链表
void Inserlist(List* plist, Node* pnode)
{
	if (IsEmpty(plist))
	{
		plist->front = pnode;	
	}
	else
	{
		plist->rear->pnext = pnode;	
	}
	plist->rear = pnode;
	plist->count++;
}
