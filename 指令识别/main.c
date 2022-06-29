#include <stdio.h>
#include <judgement.h>
int main()
{
	char s[] = "SYS:DAQEP 58;";
	int l = 17;
	char *p;
	REV test;
	p=s;
	judgement(p,l);
	int a = 1, b = 1, c = 1;
	test = getrev(a,b,c);//调用函数返回值
	printf("%d  %d  %d\n", test.a, test.b,test.c);
	return 0;
}