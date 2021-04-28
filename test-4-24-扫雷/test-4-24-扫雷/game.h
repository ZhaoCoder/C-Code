#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2

//初始化函数声明
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
//打印棋盘
void DisplayBoard(char board[ROWS][COLS],int row,int col);

void SetMine(char board[ROWS][COLS],int row, int col);

void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row, int col);