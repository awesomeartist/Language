#include <stdio.h>
#include <stdlib.h>


#define MAX_SIZE 9
#define MIN_SIZE 1
#define MAX_NUM 127
#define MIN_NUM -128


void matrix_show(char **mat, char row, char col);

int main()
{
    printf("please input a square matrix\n");

    // 获取矩阵大小
    int mat_grade;   // 定义为 char 类型输入出现错误
    int sum[6] = {0};

    do {
        printf("mat_grade = ");
        scanf("%d", &mat_grade); 
        if (mat_grade < MIN_SIZE || mat_grade > MAX_SIZE) {
            printf("invalid input! please try again.\n");
        }
    } while(mat_grade < MIN_SIZE || mat_grade > MAX_SIZE);
    
    // 申请存储矩阵的内存空间
    char** mat = (char**)malloc(mat_grade * sizeof(char*));

    for (char i = 0; i < mat_grade; i++) {
        mat[i] = (char*)malloc(mat_grade * sizeof(char));
    }

    // 矩阵赋值
    for (char i = 0; i < mat_grade; i++) {
        for (char j = 0; j < mat_grade; j++) {
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
    matrix_show(mat, mat_grade, mat_grade);


    for (char i = 0; i < mat_grade; i++) {
        sum[0] += mat[0][i];
        sum[1] += mat[mat_grade-1][i];
        sum[2] += mat[i][0];
        sum[3] += mat[i][mat_grade-1];
        sum[4] += mat[i][i];
        sum[5] += mat[i][mat_grade-1-i];
    }
    printf("sum of first row = %d\n", sum[0]);
    printf("sum of last row = %d\n", sum[1]);
    printf("sum of first column = %d\n", sum[2]);
    printf("sum of last column = %d\n", sum[3]);
    printf("sum of diagnose = %d\n", sum[4]);
    printf("sum of inv diagnose = %d\n", sum[5]);

    for(char i = 0; i < mat_grade; i++)
        free(mat[i]);
    free(mat);

    return 0;
}

void matrix_show(char **mat, char row, char col) {
    for (char i = 0; i < row; i++) {
        for (char j = 0; j < col; j++)
            printf("%d  ", mat[i][j]);
        printf("\n");
    }
}