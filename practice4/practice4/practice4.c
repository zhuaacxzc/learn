// ���ֲ��ң������������в���ָ��Ԫ���Ƿ����
#include <stdio.h>
int main()
{
	int arr[] = { 1,3,4,6,12,19,36,37,54 };
	int tg = 54;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0, right = sz;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < tg)
		{
			left = mid + 1;
		}
		else if (arr[mid] > tg)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ��ǵ�%d��Ԫ��\n", mid + 1);
			break;
		}
	}
	if (left > right)
	{
		printf("���ݲ�����\n");
	}
	return 0;
}
