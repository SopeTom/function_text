#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int leap_year(int a)
{
	if (((a % 4 == 0) && (a % 100 != 0)) || (a % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int year = 0;
	printf("������һ�����:>");
	scanf("%d", &year);
	int judge = leap_year(year);
	if ( judge == 1)
	{
		printf("%d ��Ϊ����", year);
	}
	return 0;
}