#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	int count = 0;
	//����ɨ�׵Ĺ���
	//�������������ݣ�һ������mine��Ų����ף���һ��show���������ų�����Χ���׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//���������ַ�
	//��ʼ��mine����
	InitBoard(mine, ROWS, COLS,'0');//�����ַ�'1',������'0'
	//���úõ��ײ��ܴ�ӡ
	InitBoard(show, ROWS, COLS,'*');//*��ʾ��û���Ų�
	Choose(mine,show);
	//DisplayBoard(show, ROW, COL);
}	
//��ʼ��mine����
void menu()
{
	printf("*****************************\n");
	printf("************1.play***********\n");
	printf("************0.exit***********\n");
	printf("*****************************\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������������������\n");
			break;
		}
	} while (input);
	return 0;
}