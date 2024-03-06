#include <stdio.h>
#include <stdlib.h>


#define MAX_SIZE 9
#define MIN_SIZE 1
#define MAX_NUM 127
#define MIN_NUM -128


void matrix_show(char **mat, char row, char col);

int main()
{
    printf("please input a matrix\n");

    // 获取矩阵大小
    int row = 2, col = 3;   // 定义为 char 类型输入出现错误
    do {
        printf("row = ");
        scanf("%d", &row); 
        if (row < MIN_SIZE || row > MAX_SIZE) {
            printf("invalid input! please try again.\n");
        }
    } while(row < MIN_SIZE || row > MAX_SIZE);

    do {
        printf("col = ");
        scanf("%d", &col); 
        if (col < MIN_SIZE || col > MAX_SIZE) {
            printf("invalid input! please try again.\n");
        }
    } while(col < MIN_SIZE || col > MAX_SIZE);
    
    // 申请存储矩阵的内存空间
    char** mat = (char**)malloc(row * sizeof(char*));
    char** mat_t = (char**)malloc(col * sizeof(char*));

    for (char i = 0; i < row; i++) {
        mat[i] = (char*)malloc(col * sizeof(char));
    }
    for (char i = 0; i < col; i++) {
        mat_t[i] = (char*)malloc(row * sizeof(char));
    }

    // 矩阵赋值
    for (char i = 0; i < row; i++) {
        for (char j = 0; j < col; j++) {
            do {
                printf("mat[%d][%d] = ", i+1, j+1);
                scanf("%d", &mat[i][j]);
                if (mat[i][j] < MIN_NUM || mat[i][j] > MAX_NUM) {
                    printf("invalid input! please try again.\n");
                }
            } while(mat[i][j] < MIN_NUM || mat[i][j] > MAX_NUM);
        }
    }
    printf("mat[] = \n");
    matrix_show(mat, row, col);

    // 矩阵转置
    for (char i = 0; i < row; i++) {
        for (char j = 0; j < col; j++) {
            mat_t[j][i] = mat[i][j];
        }
    }
    printf("mat_t[] = \n");
    matrix_show(mat_t, col, row);

    free(mat);
    free(mat_t);

    return 0;
}

void matrix_show(char **mat, char row, char col) {
    for (char i = 0; i < row; i++) {
        for (char j = 0; j < col; j++)
            printf("%d  ", mat[i][j]);
        printf("\n");
    }
}