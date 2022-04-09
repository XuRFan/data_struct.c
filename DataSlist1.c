# data_struct.c
#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef int SlistDatatype;//定义一个类型
typedef struct SlistNode
{
	SlistDatatype data;
	struct SlistNode* next;

}SlistNode;
//typedef struct Slist//对于题来说是不太使用的
//{
//	SlistNode* head;
//	SlistNode* tail;
//};
void Slistpushback(SlistNode* phead, SlistDatatype x);
//void Slistpopback(SlistNode* phead);
//void Slistpushfront(SlistNode* phead, SlistDatatype x);
//void Slistpopfront(SlistNode* phead);
void Slistprint(SlistNode* phead);
//void Slist(SlistNode* phead);
int BuySlistNode(SlistDatatype x);
