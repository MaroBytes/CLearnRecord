#pragma once

#include <stdio.h>
#include <string.h>
#include <memory.h>
#include <stdlib.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX 1000
#define DEFAULT_SZ 3
#define INC_SZ 2

//类型定义

typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
} PeoInfo;

/*
* 静态内存分配方式
typedef struct Contact
{
	PeoInfo data[MAX];//存放添加进来的人的信息
	int sz;//记录的是当前通讯录中有效信息的个数
} Contact;
*/

//动态内存管理方式
typedef struct Contact
{
	PeoInfo *data;
	int sz;
	int capacity;
} Contact;


//函数声明

//初始化通讯录
void InitContact(Contact *pc);

//增加联系人
void AddContact(Contact *pc);

//打印联系人信息
void PrintContact(const Contact *pc);

//删除联系人
void DelContact(Contact *pc);

//查找指定联系人
void SearchContact(Contact *pc);

//修改指定联系人
void ModifyContact(Contact *pc);

//销毁通讯录
void DestroyContact(Contact *pc);

//保存通讯录信息到文件
void SaveContact(Contact *pc);

//加载通讯录文件
void LoadContact(Contact *pc);

//考虑增容
void CheckCapacity(Contact *pc);