/*
* @ 通讯录
* @ 功能：存放1000个人的信息，增加、删除、修改、查找、排序
* @ 细节：名字、年龄、性别、电话、地址
* @ 更新动态内存管理:通讯录初始化后，能存放三个人的信息
* @ 空间存满时，增加2个信息
*/ 

/*
*  版本3 新增文件操作
*  当通讯录退出的时候，把信息写到文件
*  当通讯录打开的时候，加载文件的信息到通讯录
*/
#include "contact.h"

void menu()
{
	printf("*********************************\n");
	printf("*****  1.add    2.del  **********\n");
	printf("*****  3.search 4.modify  *******\n");
	printf("*****  5.sort   6.print *********\n");
	printf("*****  0.exit           *********\n");
	printf("*********************************\n");
	printf("*********************************\n");

}

enum menu
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};

int main()
{
	int input = 0;
	//创建通讯录
	Contact con;
	//初始化通讯录
	InitContact(&con);

	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL: 
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SORT:
			break;
		case PRINT:
			PrintContact(&con);
			break;
		case EXIT:
			//保存信息到文件
			SaveContact(&con);
			//销毁通讯录
			DestroyContact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}