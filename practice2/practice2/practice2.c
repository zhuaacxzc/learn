//输入一个整数M（1≤M≤100000），如果M可以被5整除就输出YES,否则就输出NO
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int m = 0;
	scanf("%d", &m);
	if (m % 5 == 0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}