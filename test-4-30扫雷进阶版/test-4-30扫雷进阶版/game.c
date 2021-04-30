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
			//1.������ - ���ݵĴ洢--->9*9��ά����
			SetMine(mine, ROW, COL, EASY_COUNT);//���ǲ�����ֻ�������9*9���ã����Դ�9*9�Ϳ�����
			DisplayBoard(show, ROW, COL);
			DisplayBoard(mine, ROW, COL);

			//2.ɨ��
			FindMine(mine, show, ROW, COL, EASY_COUNT);
			break;
		case 2:
			//1.������ - ���ݵĴ洢--->9*9��ά����
			SetMine(mine, ROW, COL, COMMON_COUNT);//���ǲ�����ֻ�������9*9���ã����Դ�9*9�Ϳ�����
			DisplayBoard(show, ROW, COL);
			//2.ɨ��
			FindMine(mine, show, ROW, COL, COMMON_COUNT);
			break;
		case 3:
			//1.������ - ���ݵĴ洢--->9*9��ά����
			SetMine(mine, ROW, COL, HARD_COUNT);//���ǲ�����ֻ�������9*9���ã����Դ�9*9�Ϳ�����
			DisplayBoard(show, ROW, COL);
			//2.ɨ��
			FindMine(mine, show, ROW, COL, HARD_COUNT);
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while ((count != 1) && (count != 2) && (count != 3));
}
//��ʼ����������
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
	//�кŵĴ�ӡ
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		//ÿһ��ǰ����к�
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
	//1.��������겼����
	//���ö��ٸ��� - 10
	while (choose)
	{
		//b���óɹ�һ���ף�choose--1

		//�����������
		int x = rand() % row + 1;//rand()%row - 0��8��+1 - 1��9
		int y = rand() % col + 1;
		//2.����
		if (board[x][y] == '0')//������û������
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
	else//��Χû����
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
		printf("�Ƿ���Ҫ����ף�1.��     0.��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������Ҫ����׵����꣺>");
			scanf("%d %d", &x, &y);
			if (x >= 1 && x <= row && y >= 1 && y <= col)
			{
				if (show[x][y] == '*')
				{
					show[x][y] = '#';
					DisplayBoard(show, row, col);//��ӡ����
				}
				else if (show[x][y] == '#')
				{
					printf("�������ѱ����\n");
				}
			}
			else
			{
				printf("����Ƿ�������������\n");
			}
		case 0:
			break;
		default:
			printf("�����������������\n");
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

//ɨ����Ϸ�Ľ���
//1.ը����
//2.�����Ų������в����׵�λ��
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int count)
{
	int x = 0;
	int y = 0;
	int win = 0;
again:
	while (1)
	{
		printf("������Ҫ�Ų�����꣺>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				DisplayBoard(mine, row, col);
				printf("\n");
				break;
			}
			else
			{
				//��������ף���ͳ����Χ�м�����,��Χ���û����鿴��Χλ���м����ף����εݹ�ʵ��
				SpreadMind(mine, show, x, y);//��չ���Ĵ���
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
			printf("����Ƿ�,����������\n");
			goto again;
		}
		SignMine(show, row, col);
	}
	if (win == count)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
	}
}