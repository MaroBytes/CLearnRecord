/*
#include <stdio.h>
#include <string.h>

typedef struct
{
	char english_word[10];
	int word_count;
	struct Word* p_next;
} StructWord;


StructWord word[20];
StructWord* p_word = word;
StructWord* p_head = word;

void Type()
{
	size_t size;
	scanf("%s", p_word->english_word);
	size = strlen(p_word->english_word);
	p_word->english_word[size - 1] = '\0';
	p_word->word_count = (int)size - 1;
	p_word = p_word->p_next;
	p_word->p_next = NULL;

}

void Insert()
{
	scanf("%s", p_word->english_word)
}

int main()
{
	Type();
	printf("%s\n", word[0].english_word);
	printf("%d", word[0].word_count);
	return 0;
}
*/
/*
#include<stdio.h>
#include<string.h>
#include<malloc.h>
int main()
{
	char* p[100];
	char buff[256];
	int i = 0;
	for (i = 0; i < 100; i++)
	{
		p[i] = NULL;
	}
	i = 0;
	while (1)
	{
		scanf("%s", buff);
		if (*buff == '#')
			break;
		p[i] = (char*)malloc(strlen(buff) + 1);
		strcpy(p[i], buff);
		i++;
	}
	i = 0;
	int k = 0;
	char* q;
	while (p[k] != NULL)
	{
		while (p[i] != NULL)
		{
			if (p[i + 1] == NULL) break;
			if (strlen(p[i]) > strlen(p[i + 1]))
			{
				q = p[i];
				p[i] = p[i + 1];
				p[i + 1] = q;
			}
			i++;
		}
		k++;
	}
	i = 0;
	while (p[i] != NULL)
	{
		printf("%s ", p[i]);
		free(p[i]);
		i++;
	}
	return 0;
}
*/

/*
* 单词输入，按单词长度排序并输出
* 输入#表示输入结束
#include <stdio.h>
#include <string.h>

typedef struct
{
	char word[10];
	size_t count;
} StructWord;

StructWord storage[20];

int Type(int count)
{
	scanf("%s", storage[count].word);
	getchar();//清空缓冲区回车键
	storage[count].count = strlen(storage[count].word);
	//如果输入的是#，则返回0以供判断输入结束
	if (storage[count].word[0] == '#')
		return 0;
	return 1;
}

void Sort(int count)
{
	for (int i = 0; i < count - 1; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			if (storage[j].count < storage[i].count)
			{
				StructWord tmp = storage[i];
				storage[i] = storage[j];
				storage[j] = tmp;
			}
		}
	}
}

int main() 
{
	int count = 0;
	while (Type(count) != 0)
	{
		count++;
	}
	Sort(count);
	for (int i = 0; i < count; i++)
	{
		printf("%s ", storage[i].word);
	}
	return 0;
}
*/