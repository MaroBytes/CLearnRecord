#include <stdio.h>
#include <stdlib.h>
//��̬�ڴ����
/*
int main()
{
	//�ֲ���������ջ��
	//int arr[10];
	//ʹ�ö�̬�ڴ�������
	int *p = (int *)malloc(10 * sizeof(int));
	//ʹ����Щ�ռ��ʱ��
	if (p == NULL)
	{
		perror("main");
		return 0;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d", p[i]);//p[i]->*(p+i)
	}
	//���տռ�
	free(p);
	//����p�Ƿ������ڴ棬��Ϊ��ָ��
	p = NULL;
	return 0;
}
*/

//��������
struct S
{
	int n;
	int arr[];//ָ��Ԫ�ظ���δ֪����Ϊ���������Ա ����arr[0]
};

int main()
{
	struct S *ps = (struct S *)malloc(sizeof(struct S) + 10 * sizeof(int));//�������������10��int��С�ռ�
	ps->n = 10;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	struct S *ptr = (struct S *)realloc(ps, sizeof(struct S) + 20 * sizeof(int));
	if (ptr != NULL)
	{
		ps = ptr;
	}
	free(ps);
	ps = NULL;
	//struct S s = { 0 };
	//printf("%d\n", sizeof(s));//�����Сʱ���������������Ա��ռ�ռ��С
	return 0;
}