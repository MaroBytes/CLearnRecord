/*
int main()
{
	int ch = 0;
	while ((ch=getchar())!=EOF)
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);
	}
	return 0;

}
*/

/*���ֲ��Ҽ�ʾ��
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	//��arr������������в���k��ֵ
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while(left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ�>:%d", mid);
			break;
		}
	}
	if (left>right)
	{
		printf("�Ҳ����ˣ�");
	}
	return 0;
}
*/

/*
#include <Windows.h>
int main()
{
	char arr1[] = "Welcome to TGU!!!!!!";
	char arr2[] = "####################";
	int left = 0;
	int right = sizeof(arr1) / sizeof(char) - 2;//�˴��������'\0'���ڵ�Ԫ�ظ�����-2�����һ���ַ��±�

	while (left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//����1000ms
		system("cls");//����
		left++;
		right--;
	}
	printf("%s", arr2);
	return 0;
}
*/

/*��������Ϸ
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("*********************\n");
	printf("*******1.Play********\n");
	printf("*******0.Exit********\n");
	printf("*********************\n");
}
void game()
{
	//��������Ϸ��ʵ��
	//1.���������
	//rand��������

	int ret = rand()%100 + 1;//0-100�������
	int guess = 0;
	//2.������
	while (1)
	{
		printf("������֣�>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣡�¶��ˣ�\n");
			break;
		}
	}

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//��ʱ��������������
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}
*/