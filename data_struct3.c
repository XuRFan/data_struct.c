# data_struct.c
#include<stdio.h>
typedef struct ListNode//布置链表结构
{
	int val;
    struct ListNode* next;
}Node;
//升级版
Node* reverselist(Node* head)//建立
{
	Node* newNode = NULL;
	Node* cur = head;
	while (cur)
	{
		//创建的同时进行将下一个地址赋值
		Node* next = cur->next;
		//把cur指向给newNode新节点
		cur->next = newNode;
		newNode = cur;
		cur = next;
	}
	return newNode;
}



//普通版
//Node* reverselist(Node* head)//建立一个函数反复
//{
//	if (head == NULL || head->next == NULL)//如果头指针是空或地址是空
//		return head;
//	struct ListNode* n1 = NULL, * n2 = head, * n3 = head->next;//定义三个变量
//	while (n2)//在n2为空时就已经结束，n1就是头
//	{
//		//反转
//		n2->next = n1;//反向指向
//		//迭代
//		n1 = n2;
//		n2 = n3;
//		//但是这里n3为NULL是不能在把空给n2
//		if(n3)
//		n3 = n3->next;//寻找下一个地址
//	}
//	//最后n1为头
//	return n1;
//}
void SListprint(Node* head)//打印
{
	Node* cur = head;
	while (cur!= NULL)
	{
		printf("%d->", cur->val);
		cur = cur->next;
	}
	printf("NULL");
	printf("\n");
}

int main()
{
	Node* n1 = (Node*)malloc(sizeof(Node));
	n1->val = 1;

	Node* n2 = (Node*)malloc(sizeof(Node));
	n2->val = 2;

	Node* n3 = (Node*)malloc(sizeof(Node));
	n3->val = 3;

	Node* n4 = (Node*)malloc(sizeof(Node));
	n4->val = 4;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;
	SListprint(n1);
	Node* head = reverselist(n1);
	SListprint(head);
	return 0;
}
