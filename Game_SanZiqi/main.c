/*测试游戏逻辑*/

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
	//存储数据 - 二维数组
	char board[ROW][COL];
	//初始化棋盘 - 初始化为空格
	InitBoard(board, ROW, COL);
	//打印一下棋盘 - 本质是打印数组的内容
	DisplayBoard(board, ROW, COL);
	//电脑走
	char ret = 0;//接收游戏状态
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
			break;
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);	
		if (ret != 'c')
			break;
	}
	if (ret == '*')
	{
		system("cls");//清屏
		printf("玩家赢了！\n");
	}
	else if (ret == '#')
	{
		system("cls");
		printf("电脑赢了！\n");
	}
	else
	{
		system("cls");
		printf("平局！\n");
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
		printf("请选择：>");
		if(scanf("%d", &input)==EOF)
			return 0;
		switch (input)
		{
		case PLAY:
			game();
			break;
		case EXIT:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}