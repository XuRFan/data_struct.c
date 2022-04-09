# data_struct.c
#include"data.h"
int main()
{
	SlistNode* Plist = NULL;
	Slistpushback(&Plist, 1);//例子
	Slistpushback(&Plist, 2);
	Slistpushback(&Plist, 3);
	Slistprint(Plist);
	return 0;
}
