# data_struct.c
#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef int SlistDatatype;//定义一个类型
typedef struct SlistNode
{
	SlistDatatype data;//数据
	struct SlistNode* next;//下一个数据地址

}SlistNode;
//typedef struct Slist//对于题来说是不太使用的
//{
//	SlistNode* head;
//	SlistNode* tail;
//};
void Slistpushback(SlistNode* phead, SlistDatatype x);
void Slistpopback(SlistNode* phead);
void Slistpushfront(SlistNode** pphead, SlistDatatype x);
//void Slistpopfront(SlistNode* phead);
void Slistprint(SlistNode* phead);
//void Slist(SlistNode* phead);
int BuySlistNode(SlistDatatype x);
SlistNode* SlistFind(SlistNode*phead, SlistDatatype x);
void SlistInsertAfter(SlistNode* pos, SlistDatatype x);
void SlistDelAfter(SlistNode* pos);
