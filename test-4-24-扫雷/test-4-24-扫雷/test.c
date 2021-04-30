#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	int count = 0;
	//真正扫雷的过程
	//两个数组存放数据，一个数组mine存放布置雷，另一个show数组存放所排除雷周围的雷的信息
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//数组里存放字符
	//初始化mine数组
	InitBoard(mine, ROWS, COLS,'0');//是雷字符'1',不是雷'0'
	//布置好的雷不能打印
	InitBoard(show, ROWS, COLS,'*');//*表示还没有排查
	Choose(mine,show);
	//DisplayBoard(show, ROW, COL);
}	
//初始化mine数组
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
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入有误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}