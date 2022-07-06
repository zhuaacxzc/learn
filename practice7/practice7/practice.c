//输入一个无符号整数，打印它的每一位 如输入1234，打印1 2 3 4
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void print(unsigned int n)                                 //1234%10=4   123%10=3 12%10=2  1%10=1
{
	if (n > 9)
	{
		print(n/10);
	}
		printf("%d\n", n%10);

}
int main()
{
	unsigned int a = 0;
	scanf("%u", &a);
	print(a);
	return 0;
}