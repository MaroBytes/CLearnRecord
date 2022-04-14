/*
* @ ͨѶ¼
* @ ���ܣ����1000���˵���Ϣ�����ӡ�ɾ�����޸ġ����ҡ�����
* @ ϸ�ڣ����֡����䡢�Ա𡢵绰����ַ
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
	//����ͨѶ¼
	Contact con;
	//��ʼ��ͨѶ¼
	InitContact(&con);

	do
	{
		menu();
		printf("��ѡ��>");
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
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}