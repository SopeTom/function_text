#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int Fib(int input)
{
	int i = 1;
	int u = 1;
	int n = 1;
	int o = 0;
	if (input <= 2)
	{
		return 1;
	}
	else
	{
		while (n <= input-2)
		{
			o = i + u;
			i = u;
			u = o;
			n++;
		}
		return o;
	}

}
int explain()
{
	printf("������̨�����⣺\n����һֻ����һ�ο�������һ��̨�ף�һ��Ҳ������������̨�ס���һֻ��������һ��n����̨�ף��ж�����������\n");
	return 0;
}
int main()
{
	int i = 0;
	int u = 0;
	int input;
	printf("***************������̨***************\n");
	printf("***** 0.��ʼ���� **** 1.�������� *****\n");
	scanf("%d", &i);
	if (i == 1)
	{
		i = explain();
	}
	if (i == 0)
	{
		printf("������Ҫ�����̨����:>");
		scanf("%d", &input);
		int u = Fib(input);
		printf("�������� %d ��̨���� %d �ַ���", input, u);
		return 0;
	}
}
	