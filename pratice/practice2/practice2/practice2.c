//����һ������M��1��M��100000�������M���Ա�5���������YES,��������NO
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