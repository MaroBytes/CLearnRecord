/*������Ϸ�߼�*/

#include "game.h"

void menu()
{
	printf("*********************************\n");
	printf("************* 1.Play ************\n");
	printf("************* 0.Exit ************\n");
	printf("*********************************\n");
}

void game()
{
	//�洢���� - ��ά����
	char board[ROW][COL];
	//��ʼ������ - ��ʼ��Ϊ�ո�
	InitBoard(board, ROW, COL);
	//��ӡһ������ - �����Ǵ�ӡ���������
	DisplayBoard(board, ROW, COL);
	//������
	char ret = 0;//������Ϸ״̬
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
			break;
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);	
		if (ret != 'c')
			break;
	}
	if (ret == '*')
	{
		system("cls");//����
		printf("���Ӯ�ˣ�\n");
	}
	else if (ret == '#')
	{
		system("cls");
		printf("����Ӯ�ˣ�\n");
	}
	else
	{
		system("cls");
		printf("ƽ�֣�\n");
	}
	DisplayBoard(board, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		if(scanf("%d", &input)==EOF)
			return 0;
		switch (input)
		{
		case PLAY:
			game();
			break;
		case EXIT:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}