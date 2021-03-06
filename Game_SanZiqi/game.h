/*
* 关于游戏相关的函数声明，符号声明以及头文件的包含
*/
#pragma once

//头文件的包含
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

//符号的定义
#define ROW 3
#define COL 3

enum menu
{
	EXIT,
	PLAY
};

//函数的声明

/*初始化棋盘*/
void InitBoard(char board[ROW][COL], int row, int col);

/*打印棋盘的函数*/
void DisplayBoard(char board[ROW][COL], int row, int col);

/*玩家下棋*/
void PlayerMove(char board[][COL], int row, int col);

/*电脑下棋*/
void ComputerMove(char board[][COL], int row, int col);

/*判断输赢
1.玩家赢了 - *
2.电脑赢了 - #
3.平局 - Q
4.游戏继续 - c
*/
char IsWin(char board[][COL], int row, int col);