#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//初始化函数定义
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//列号的打印
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		//每一行前面的行号
		printf("%d ", i);
		for (j = 1; j <=col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	//1.随机找坐标布置雷
	//布置多少个雷 - 10
	int count = 10;
	while (count)
	{
		//b布置成功一个雷，count--1

		//生成随机坐标
		int x = rand() % row + 1;//rand()%row - 0到8，+1 - 1到9
		int y = rand() % col + 1;
		//2.布雷
		if (board[x][y] == '0')//该坐标没布置雷
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
		return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}

//扫雷游戏的结束
//1.炸死了
//2.正常排查了所有不是雷的位置
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<ROW*COL-10)
	{
		printf("请输入要排查的坐标：>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				//如果不是雷，就统计周围有几个雷
				int count = GetMineCount(mine, x, y);
				show[x][y] = count+'0';//show数组是字符数组
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标非法\n");
		}
	}
	if (win == ROW * COL - 10)
	{
		printf("恭喜你，排雷成功\n");
	}
}