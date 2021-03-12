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
	printf("青蛙跳台阶问题：\n假设一只青蛙一次可以跳上一级台阶，一次也可以跳上两级台阶。求一只青蛙跳上一个n级的台阶，有多少种跳法？\n");
	return 0;
}
int main()
{
	int i = 0;
	int u = 0;
	int input;
	printf("***************青蛙跳台***************\n");
	printf("***** 0.开始计算 **** 1.问题内容 *****\n");
	scanf("%d", &i);
	if (i == 1)
	{
		i = explain();
	}
	if (i == 0)
	{
		printf("请输入要跳向的台阶数:>");
		scanf("%d", &input);
		int u = Fib(input);
		printf("青蛙跳到 %d 级台阶有 %d 种方法", input, u);
		return 0;
	}
}
	