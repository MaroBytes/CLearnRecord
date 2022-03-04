/*全局变量
static int g_val = 2022;
//static定义的全局变量只能被自己所在的源文件使用
*/

/*
int Add(int x, int y)
{
	return x + y;
}
*/

/*static修饰函数也只能被自己所在的源文件使用
static int Add(int x, int y)
{
	return x + y;
}
*/

/*
extern int Add(int, int);
int main()
{
	int a = 10, b = 20;
	int sum = Add(a, b);
	printf("sum = %d\n", sum);
	return 0;
}
*/

//3rd Mar,2022 cut main.c

/*
int main()
{
	int a = 10;
	printf("%p\n", &a);
	int* pa = &a;//pa是用来存放地址的，在C语言中pa称为指针变量
	//* 说明pa是指针
	//int 说明pa执行的对象是int类型的

	char ch = 'w';
	char* pc = &ch;
	return 0;
}
*/

/*
int main()
{
	int a = 10;
	int* pa = &a;
	*pa = 20; //* 解引用操作符 *pa就是通过pa里面的地址找到a
	printf("%d\n", a);
	return 0;
}
*/

/*
struct Stu
{
	char name[20];
	int age;
	double score;
};

struct Book
{
	char name[20];
	float price;
	char id[20];
};
int main() {
	struct Stu s = { "张三", 20, 85.5 };//结构体的创建和初始化
	printf("1:%s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量
	struct Stu* ps = &s;
	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);
	return 0;
}
*/

/*VS2019\2022不支持C99的变长数组
int main()
{
	int a = [n];
	return 0;
}
*/

/*
int main()
{
	int a = 0;
	int b = 2;
	if (a = 1)
		if (b = 2)
			printf("hehe\n");
	else
		printf("haha\n");
	return 0;
}
*/
/*
int main()
{
	char ch;
	while ((ch=getchar())!=EOF)
	{
		putchar(ch);
	}
	return 0;
}
*/

/*
int main()
{
	char password[20] = { 0 };
	printf("Please Input Your Password:");
	scanf("%s", password);
	printf("Please Confirm Your Password(Y/N):>");
	getchar();
	int ch = getchar();//getchar读取了缓冲区中的回车'\n'
	if (ch == 'Y')
	{
		printf("Success!\n");
	}
	else
	{
		printf("Faild!");
	}
	return 0;
}
*/