/* 
 * filename:gobang.c
 * coding:GBK 
 * author:yan
 * function:终端命令行输入输出实现五子棋
 */

// #include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <tchar.h>

#define N 9

void black(char a[N][N]);
void white(char a[N][N]);
void check(char a[N][N]);
int countdown(char a[N][N], char c, int x, int y);
int countright(char a[N][N], char c, int x, int y);
int countlowerright(char a[N][N], char c, int x, int y);
void printboard(char a[N][N]);

int _tmain(int argc, _TCHAR* argv[])
{

	char board[N][N];
	int i;

	for (int i = 0; i<N; i++) {
		for (int j = 0; j<N; j++) {
			board[i][j] = '\'';
		}
	}

	srand((unsigned)time(NULL));
	if (rand() % 2) {
		printf("请黑方下子(行 列)\n");
		i = 0;
	}
	else {
		printf("请白方下子(行 列)\n");
		i = 1;
	}

	while (1) {
		if (i++ % 2 == 0) {
			white(board);
			printboard(board);
			check(board);
			printf("请白方下子(行 列)\n");
		}
		else {
			black(board);
			printboard(board);
			check(board);
			printf("请黑方下子(行 列)\n");
		}
	}
}

void black(char a[N][N]) {
	int x, y;
	// scanf_s("%d%d", &x, &y);
    scanf("%d%d", &x, &y);
	if (x>N || x<1 || y>N || y<1 || a[x - 1][y - 1] != '\'') {
		printf("位置无效\n");
		black(a);
	}
	else
		a[x - 1][y - 1] = '*';
}

void white(char a[N][N]) {
	int x, y;
    // scanf_s("%d%d", &x, &y);
	scanf("%d%d", &x, &y);
	if (x>N || x<1 || y>N || y<1 || a[x - 1][y - 1] != '\'') {
		printf("位置无效\n");
		white(a);
	}
	else
		a[x - 1][y - 1] = '#';
}

void check(char a[N][N]) {
	for (int i = 0; i<N; i++) {
		for (int j = 0; j<N; j++) {
			if (a[i][j] == '*' && (countdown(a, '*', i, j) == 5 || countright(a, '*', i, j) == 5 || countlowerright(a, '*', i, j) == 5)) {
				printf("白方赢！\n");
				exit(0);
			}
			if (a[i][j] == '#' && (countdown(a, '#', i, j) == 5 || countright(a, '#', i, j) == 5 || countlowerright(a, '#', i, j) == 5)) {
				printf("黑方赢！\n");
				exit(0);
			}
		}
	}
}

int countdown(char a[N][N], char c, int x, int y) {
	int count = 1, i = 1;
	while (i + y<N) {
		if (a[x][i + y] != c)
			break;
		count++;
		i++;
	}
	return count;
}

int countright(char a[N][N], char c, int x, int y) {
	int count = 1, i = 1;
	while (i + x<N) {
		if (a[x + i][y] != c)
			break;
		count++;
		i++;
	}
	return count;
}

int countlowerright(char a[N][N], char c, int x, int y) {
	int count = 1, i = 1;
	while (i + x<N && i + y<N) {
		if (a[x + i][y + i] != c)
			break;
		count++;
		i++;
	}
	return count;
}

void printboard(char a[N][N]) {
	for (int i = 0; i<N; i++) {
		for (int j = 0; j<N; j++) {
			printf("%c ", a[i][j]);
		}
		putchar('\n');
	}
}



