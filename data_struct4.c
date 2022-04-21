# data_struct.c
#include<stdio.h>
typedef struct SlistNode
{
	int val;
	struct SlistNode* next;
}Node;

//Node* kpoint(Node* head)//实现第k个节点时输出（升级版）
//{
//	Node* slow = head;
//	Node* fast = head;
//	int k=5;
//	while (k--)
//	{
//		fast = fast->next;
//	}
//	while (fast)
//	{
//		fast = fast->next;
//		slow = slow->next;
//	}
//	return slow;
//}

Node* midpoint(Node*head)//（普通版）基础认识
{
	Node* slow = head;
	Node* fast = head;
	if (fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}
void Slistprint1(Node* head)//首次打印出原有的链表
{
	Node* cur = head;
	while (cur != NULL)
	{
		printf("%d->",cur->val);
		cur = cur->next;
	}
	printf("NULL");
	printf("\n");
}
void Slistprint2(Node* head)//打印中间节点的值双个中间节点第二个
{
	Node* cur = head;
	if (cur != NULL)
	{
		cur = cur->next;
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
	//也可以
	//struct SlistNode*n1=
	//(struct SlistNode*)malloc(sizeof(struct SlistNode));
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;
	Slistprint1(n1);
	Node* head = midpoint(n1);
	//Node* head = kpoint(n1);
	Slistprint2(head);
	return 0;
}
