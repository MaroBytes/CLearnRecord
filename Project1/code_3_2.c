/*ȫ�ֱ���
static int g_val = 2022;
//static�����ȫ�ֱ���ֻ�ܱ��Լ����ڵ�Դ�ļ�ʹ��
*/

/*
int Add(int x, int y)
{
	return x + y;
}
*/

/*static���κ���Ҳֻ�ܱ��Լ����ڵ�Դ�ļ�ʹ��
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
	int* pa = &a;//pa��������ŵ�ַ�ģ���C������pa��Ϊָ�����
	//* ˵��pa��ָ��
	//int ˵��paִ�еĶ�����int���͵�

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
	*pa = 20; //* �����ò����� *pa����ͨ��pa����ĵ�ַ�ҵ�a
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
	struct Stu s = { "����", 20, 85.5 };//�ṹ��Ĵ����ͳ�ʼ��
	printf("1:%s %d %lf\n", s.name, s.age, s.score);//�ṹ�����.��Ա����
	struct Stu* ps = &s;
	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);
	return 0;
}
*/

/*VS2019\2022��֧��C99�ı䳤����
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
	int ch = getchar();//getchar��ȡ�˻������еĻس�'\n'
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