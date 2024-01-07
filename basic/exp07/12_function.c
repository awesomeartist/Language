#include <stdio.h>

// 输入一个整型数组，将其倒序并输出，要求编写函数实现数组倒序。

int InputArray(int* array, int len);
int OutputArray(int* array, int len);
int ReverseOutput(int* array, int len);

int main(void) {

    int len0=32, array[len0];
    int len = 10;

    InputArray(array, len);
    OutputArray(array, len);
    ReverseOutput(array, len);

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
int ReverseOutput(int* array, int len) {
    if (len < 1)
        return -1;
    printf("Reverse Array:");
    for (int i = len-1; i >= 0; i--)
        printf("%d   ", array[i]);

}