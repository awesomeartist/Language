#include <stdio.h>
#include <stdlib.h>


#define MAX_SIZE 9
#define MIN_SIZE 1
#define MAX_NUM 127
#define MIN_NUM -128


void matrix_show(char **mat, char row, char col);

int main()
{
    printf("please input matrix_1\n");

    // 获取矩阵大小
    int row_1 = 2, col_1 = 3, row_2 = 3, col_2 = 2;   // 定义为 char 类型输入出现错误
    do {
        printf("row_1 = ");
        scanf("%d", &row_1); 
        if (row_1 < MIN_SIZE || row_1 > MAX_SIZE) {
            printf("invalid input! please try again.\n");
        }
    } while(row_1 < MIN_SIZE || row_1 > MAX_SIZE);

    do {
        printf("col_1 = ");
        scanf("%d", &col_1); 
        if (col_1 < MIN_SIZE || col_1 > MAX_SIZE) {
            printf("invalid input! please try again.\n");
        }
    } while(col_1 < MIN_SIZE || col_1 > MAX_SIZE);

    row_2 = col_1;

    do {
        printf("col_2 = ");
        scanf("%d", &col_2); 
        if (col_2 < MIN_SIZE || col_2 > MAX_SIZE) {
            printf("invalid input! please try again.\n");
        }
    } while(col_2 < MIN_SIZE || col_2 > MAX_SIZE); 


    // 申请存储矩阵的内存空间
    char** mat = (char**)malloc(row_1 * sizeof(char*));
    char** mat_t = (char**)malloc(row_2 * sizeof(char*));
    char** mat_r = (char**)malloc(row_1 * sizeof(char*));

    for (char i = 0; i < row_1; i++) {
        mat[i] = (char*)malloc(col_1 * sizeof(char));
    }
    for (char i = 0; i < row_2; i++) {
        mat_t[i] = (char*)malloc(col_2 * sizeof(char));
    }
    for (char i = 0; i < row_1; i++) {
        mat_r[i] = (char*)malloc(col_2 * sizeof(char));
    }


    // 矩阵赋值
    for (char i = 0; i < row_1; i++) {
        for (char j = 0; j < col_1; j++) {
            do {
                printf("mat[%d][%d] = ", i+1, j+1);
                scanf("%d", &mat[i][j]);
                if (mat[i][j] < MIN_NUM || mat[i][j] > MAX_NUM) {
                    printf("invalid input! please try again.\n");
                }
            } while(mat[i][j] < MIN_NUM || mat[i][j] > MAX_NUM);
        }
    }
    
    for (char i = 0; i < row_2; i++) {
        for (char j = 0; j < col_2; j++) {
            do {
                printf("mat_t[%d][%d] = ", i+1, j+1);
                scanf("%d", &mat_t[i][j]);
                if (mat_t[i][j] < MIN_NUM || mat_t[i][j] > MAX_NUM) {
                    printf("invalid input! please try again.\n");
                }
            } while(mat_t[i][j] < MIN_NUM || mat_t[i][j] > MAX_NUM);
        }
    }

    // 计算结果
    for (char i = 0; i < row_1; i++) {
        for (char j = 0; j < col_2; j++) {
            int sum = 0;
            for (char k = 0; k < col_1; k++) {
                sum += mat[i][k] * mat_t[k][j];
            }
            mat_r[i][j] = sum;

        }
    }


    // 矩阵输出
    printf("mat[] = \n");
    matrix_show(mat, row_1, col_1);

    printf("mat_t[] = \n");
    matrix_show(mat_t, row_2, col_2);

    printf("mat_r[] = \n");
    matrix_show(mat_r, row_1, col_2);

    // 释放内存空间
    for(char i = 0; i < row_1; i++)
        free(mat[i]);
    for(char i = 0; i < row_2; i++)
        free(mat_t[i]);
    for(char i = 0; i < row_1; i++)
        free(mat_r[i]);
    free(mat);
    free(mat_t);
    free(mat_r);

    return 0;
}

void matrix_show(char **mat, char row, char col) {
    for (char i = 0; i < row; i++) {
        for (char j = 0; j < col; j++)
            printf("%d  ", mat[i][j]);
        printf("\n");
    }
}