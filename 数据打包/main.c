#include <stdio.h>
#include <Datapack.h>
int main()
{
	char data[6000];                                  //�Լ���������
	int i;
	for (i = 0; i < 6000; i++)
	{
		data[i] = 0xAE;
	}
	int l = 6000;                                       //���ݳ���
	Datapackage(data, l);
	int a = 1, b = 1, c = 1;
	REV test = getrev(a, b, c);                       //���ú�������ֵ
	printf("%d  %d  %d\n", test.a, test.b, test.c);
	return 0;
}