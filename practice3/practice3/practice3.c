//һ���򵥵Ĳ�������Ϸ������һ��1��100������������ǲ´���,��������ǲ´��˻��ǲ�С�˼����£����ǲ¶����������ϲ��¶��ˣ���  
//��Ϸ����һֱ�棬�����˳���Ϸ

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()//�Զ���һ����ӡ�˵��ĺ���
{
	printf("******************************\n");
	printf("*******������Ϸ��0-100)*******\n");
	printf("**********1.��ʼ��Ϸ**********\n");
	printf("**********0.�˳���Ϸ**********\n");
	printf("*****�������ֺ��밴�س���*****\n\n\n");


}

void game()//��Ϸʵ��
{
	int ret = rand()%100+1; //���������  %100��ֵΪ0~99��+1
	
	int guess = 0;
	while (1)
	{
		printf("������֣�");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else 
		{
			printf("��ϲ��¶��ˣ�\n\n\n");
			break;
		}
	}
}



int main()
{
	int input = 0;
	srand((unsigned int)time(NULL)); //����������������
	do
	{
		menu();
		printf("��ѡ��ʼ��Ϸ�����˳���Ϸ:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("��ѡ����ȷ��ָ��\n");
			break;
		}
	} while(input);


	return 0;
}

