#include <stdio.h>

/*
int main()
{
	int a = 3;
	int b = 5;
	//����
	int c = 0;//��ƿ
	c = a;
	a = b;
	b = a;
	return 0;
}
*/

/*
int main()
{
	//���ཻ��������ȱ�ݣ���ֵ��������
	int a = 3;
	int b = 5;
	a = a + b;
	b = a - b;
	a = a - b;
	return 0;
}*/
/*
int main()
{
	int a = 3;
	int b = 5;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d, b=%d", a, b);
	return 0;
}*/

/*
int main()
{
	int a = 13;
	a = a ^ (1 << 4);
	printf("%d", a);
	return 0;
}
*/
/*
int main()
{
	int a = 10;
	a = 100;
	a = a + 100;
	a += 100;
	return 0;
}*/
/*
int main()
{
	int flag = 5;
	//flagΪ�棬��ӡ
	if (flag)
	{
		printf("hehe\n");
		flag = 0;
	}
	//flagΪ�٣���ӡ
	if (!flag)
	{
		printf("haha\n");
	}
	return 0;
}*/
/*
int main()
{
	int a = 1;
	short s = 10;
	printf("%zd", sizeof(s = a + 2));//sizeof�����зŵı��ʽ�ǲ����������
	printf("%d", s);
	return 0;
}*/
/*
int main()
{
	int a = 10;
	printf("%p", &a);
	int *pa = &a;//�ӽ��쿪ʼָ����뷽ʽΪ�Ҷ��뼴int *pa������int* pa����ô����Ϊ����ߴ�����׶��ԣ��ο����������ָ��
	*pa = 20;
	printf("%d", a);
	return 0;
}*/

