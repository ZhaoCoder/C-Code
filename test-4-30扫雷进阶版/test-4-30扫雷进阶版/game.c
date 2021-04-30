#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void menu1()
{
	printf("*********************************\n");
	printf("******    1.EASY_COUNT     ******\n");
	printf("******    2.COMMON_COUNT   ******\n");
	printf("******    3.HARD_COUNT     ******\n");
}

void Choose(char mine[ROWS][COLS], char show[ROWS][COLS])
{
	int count = 0;
	menu1();
	scanf("%d", &count);
	do
	{
		switch (count)
		{
		case 1:
			//1.布置雷 - 数据的存储--->9*9二维数组
			SetMine(mine, ROW, COL, EASY_COUNT);//我们布置雷只给里面的9*9布置，所以传9*9就可以了
			DisplayBoard(show, ROW, COL);
			DisplayBoard(mine, ROW, COL);

			//2.扫雷
			FindMine(mine, show, ROW, COL, EASY_COUNT);
			break;
		case 2:
			//1.布置雷 - 数据的存储--->9*9二维数组
			SetMine(mine, ROW, COL, COMMON_COUNT);//我们布置雷只给里面的9*9布置，所以传9*9就可以了
			DisplayBoard(show, ROW, COL);
			//2.扫雷
			FindMine(mine, show, ROW, COL, COMMON_COUNT);
			break;
		case 3:
			//1.布置雷 - 数据的存储--->9*9二维数组
			SetMine(mine, ROW, COL, HARD_COUNT);//我们布置雷只给里面的9*9布置，所以传9*9就可以了
			DisplayBoard(show, ROW, COL);
			//2.扫雷
			FindMine(mine, show, ROW, COL, HARD_COUNT);
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while ((count != 1) && (count != 2) && (count != 3));
}
//初始化函数定义
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
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
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col, int choose)
{
	//1.随机找坐标布置雷
	//布置多少个雷 - 10
	while (choose)
	{
		//b布置成功一个雷，choose--1

		//生成随机坐标
		int x = rand() % row + 1;//rand()%row - 0到8，+1 - 1到9
		int y = rand() % col + 1;
		//2.布雷
		if (board[x][y] == '0')//该坐标没布置雷
		{
			board[x][y] = '1';
			choose--;
		}
	}
}

//int GetMineCount(char mine[ROWS][COLS], int x, int y)
//{
//		return mine[x - 1][y] +
//		mine[x - 1][y - 1] +
//		mine[x][y - 1] +
//		mine[x + 1][y - 1] +
//		mine[x + 1][y] +
//		mine[x + 1][y + 1] +
//		mine[x][y + 1] +
//		mine[x - 1][y + 1] - 8 * '0';
//}
static int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (mine[i][j] == '1')
			{
				count++;
			}
		}
	}
	return count;
}

void SpreadMind(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int count = GetMineCount(mine, x, y);
	if (count != 0)
	{
		show[x][y] = count + '0';
	}
	else//周围没有雷
	{
		show[x][y] = ' ';
		if (show[x - 1][y] == '*')
			SpreadMind(mine, show, x - 1, y);
		if (show[x - 1][y - 1] == '*')
			SpreadMind(mine, show, x - 1, y - 1);
		if (show[x][y - 1] == '*')
			SpreadMind(mine, show, x, y - 1);
		if (show[x + 1][y - 1] == '*')
			SpreadMind(mine, show, x + 1, y - 1);
		if (show[x + 1][y] == '*')
			SpreadMind(mine, show, x + 1, y);
		if (show[x + 1][y + 1] == '*')
			SpreadMind(mine, show, x + 1, y + 1);
		if (show[x][y + 1] == '*')
			SpreadMind(mine, show, x, y + 1);
		if (show[x - 1][y + 1] == '*')
			SpreadMind(mine, show, x - 1, y + 1);
	}
}

static void SignMine(char show[ROWS][COLS], int row, int col)
{
	int input = 0;
	int x = 0;
	int y = 0;
	do
	{
		printf("是否需要标记雷：1.是     0.否\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入要标记雷的坐标：>");
			scanf("%d %d", &x, &y);
			if (x >= 1 && x <= row && y >= 1 && y <= col)
			{
				if (show[x][y] == '*')
				{
					show[x][y] = '#';
					DisplayBoard(show, row, col);//打印棋盘
				}
				else if (show[x][y] == '#')
				{
					printf("该坐标已被标记\n");
				}
			}
			else
			{
				printf("坐标非法，请重新输入\n");
			}
		case 0:
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}
int CheckShow(char show[ROWS][COLS], int row, int col)
{
	int win = 0;
	int i = 0;
	int j = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] == '*' || show[i][j] == '#')
			{
				win++;
			}
		}
	}
	return win;
}

//扫雷游戏的结束
//1.炸死了
//2.正常排查了所有不是雷的位置
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int count)
{
	int x = 0;
	int y = 0;
	int win = 0;
again:
	while (1)
	{
		printf("请输入要排查的坐标：>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, row, col);
				printf("\n");
				break;
			}
			else
			{
				//如果不是雷，就统计周围有几个雷,周围如果没雷则查看周围位置有几个雷，依次递归实现
				SpreadMind(mine, show, x, y);//可展开的代码
				DisplayBoard(show, row, col);
				win = CheckShow(show, row, col);
				if (win == count)
				{
					break;
				}
			}
		}
		else
		{
			printf("坐标非法,请重新输入\n");
			goto again;
		}
		SignMine(show, row, col);
	}
	if (win == count)
	{
		printf("恭喜你，排雷成功\n");
	}
}