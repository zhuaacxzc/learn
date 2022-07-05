// 二分查找，在有序数组中查找指定元素是否存在
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
			printf("找到了，是第%d个元素\n", mid + 1);
			break;
		}
	}
	if (left > right)
	{
		printf("数据不存在\n");
	}
	return 0;
}
