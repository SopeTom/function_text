#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
int is_prime(int u)
{
	int n = 2;
	for (n = 2;n <= sqrt(u);n++)
	{
		if (u % n == 0)
		{
			return 0;
		}
	}
	if (n > sqrt(u))
	{
		return 1;
	}
}
int main()
{
	int i = 0;
	for (i = 101;i <= 200;i+=2)
	{
		if (is_prime(i) == 1)
		{
			printf("%d	", i);
		}
	}
	return 0;
}