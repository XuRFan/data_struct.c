# data_struct.c
#include"data.h"
void testSlist1()
{
	SlistNode* Plist = NULL;
	Slistpushback(&Plist, 1);//单链表简单输出例子
	Slistpushback(&Plist, 2);
	Slistpushback(&Plist, 3);
	Slistprint(Plist);
	//Slistpopback(&Plist);//如果这个地方不进行删除处理，就会将Plist保留执行下一个
	//Slistpopback(&Plist);
	//Slistpopback(&Plist);
	//Slistpopback(&Plist);//就算多了也不会越界清除
	//Slistprint(Plist);
	Slistpushfront(&Plist, 1);//反向输出例子
	Slistpushfront(&Plist, 2);
	Slistpushfront(&Plist, 3);
	Slistpushfront(&Plist, 4);
	Slistpushfront(&Plist, 5);
	Slistprint(Plist);//输出打印
}
void testSlist2()//基本输出，查找，值的替换，删除中间值
{
	SlistNode* Plist = NULL;
	Slistpushback(&Plist, 1);//例子
	Slistpushback(&Plist, 2);
	Slistpushback(&Plist, 3);
	Slistpushback(&Plist, 4);
	Slistprint(Plist);
	SlistNode* pos = SlistFind(Plist,3);
	/*if (pos)//改变当前数值
	{
		pos->data = 30;
	}*/
	Slistprint(Plist);
	SlistInsertAfter(pos, 5);//插入值例子
	SlistDelAfter(pos);//删除前一位的例子
	Slistprint(Plist);
}
int main()
{
	
	testSlist1();
	testSlist2();
	
	

	return 0;
}
