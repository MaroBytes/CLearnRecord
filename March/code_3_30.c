#include <stdio.h>

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a[0]));
//	printf("%d\n", sizeof(a[0] + 1));
//	printf("%d\n", sizeof(*(a[0] + 1)));
//	printf("%d\n", sizeof(a + 1));//�ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(a + 1)));//�ڶ��� *(a+1)->a[1]
//	printf("%d\n", sizeof(a[3]));//16 sizeof���Լ��Ʋ���������sizeof�ڲ����ʽ����ȥ���㣬������ʵ������Ҳ��ͨ�����ͼ����С int[4]����
//	return 0;
//}

//int main()
//{
//	short s = 5;
//	int a = 4;
//	printf("%d\n", sizeof(s = a + 2));//2 
//	printf("%d\n", s);//5
//	printf("%d\n", sizeof(rand()));//4 �����ú��� ֻ���ݺ������������жϴ�С
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);//&a+1 - ������ int (*)[5] ��Ҫǿ������ת����(int*)
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
//��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int *)p + 0x1);
//	return 0;
//}

int main()
{
	int a[4] = { 1, 2, 3, 4 };
	int *ptr1 = (int *)(&a + 1);
	int *ptr2 = (int *)((int)a + 1);
	printf("%x,%x", ptr1[-1], *ptr2);
	return 0;
}