#include <stdio.h>

// 输入一个整型数组，将其排序，要求编写函数实现冒泡排序。

int InputArray(int* array, int len);
int OutputArray(int* array, int len);
int Sort(int *array, int len);
int main(void) {

    int len0=32, array[len0];
    int len = 10;

    InputArray(array, len);
    OutputArray(array, len);
    Sort(array, len);
    OutputArray(array, len);

    return 0;
}
int InputArray(int* array, int len) {
    if (len <= 0)
        return -1;
    for (int i = 0; i < len; i++) {
        printf("please input a number:");
        scanf("%d", &array[i]);
    }
}
int OutputArray(int* array, int len) {
    if (len <= 0)
        return -1;
    printf("Array:");
    for (int i = 0; i < len; i++) {
            printf("%d   ", array[i]);
        }
        printf("\n");
}

// Bubble Sort
int Sort(int *array, int len) {
    if (len < 2)
        return -1;
        int temp;
    for (int i = len-1; i >= 1 ; i--) {
        for (int j = 0; j < i; j++ ) {
            if (array[j] < array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}