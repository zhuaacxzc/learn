//一个简单的猜数字游戏，产生一个1到100的随机数，若是猜错了,会告诉你是猜大了还是猜小了继续猜，若是猜对了输出“恭喜你猜对了！”  
//游戏可以一直玩，除非退出游戏

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()//自定义一个打印菜单的函数
{
	printf("******************************\n");
	printf("*******猜数游戏（0-100)*******\n");
	printf("**********1.开始游戏**********\n");
	printf("**********0.退出游戏**********\n");
	printf("*****输入数字后请按回车键*****\n\n\n");


}

void game()//游戏实现
{
	int ret = rand()%100+1; //生成随机数  %100的值为0~99，+1
	
	int guess = 0;
	while (1)
	{
		printf("请猜数字：");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else 
		{
			printf("恭喜你猜对了！\n\n\n");
			break;
		}
	}
}



int main()
{
	int input = 0;
	srand((unsigned int)time(NULL)); //设置随机数生成起点
	do
	{
		menu();
		printf("请选择开始游戏还是退出游戏:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("请选择正确的指令\n");
			break;
		}
	} while(input);


	return 0;
}

