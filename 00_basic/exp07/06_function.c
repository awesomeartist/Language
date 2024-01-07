#include <stdio.h>

// 直接插入排序，要求：
// -  编写函数Insert，完成插入功能.
// - 编写函数Sort，调用Insert函数实现直接插入排序.
// - 编写函数InputArray，用于数组输入.
// - 编写函数OutputArray，用于数组输出.
// - 编写主函数，调用Sort函数给一个长度为10的数组排序，调用OutputArray输出。

int Insert(int* array, int len, int num, int index);
int Sort(int* array, int len);
int InputArray(int* array, int len);
int OutputArray(int* array, int len);

int main(void) {

    int len0=32, array[len0];
    int len = 10;

    InputArray(array, len);
    OutputArray(array, len);
    printf("after insert 66 in position 3:\n");
    Insert(array, 3, 66, len);len +=1;
    OutputArray(array, len);
    Sort(array, len);
    printf("after sorting:\n");
    OutputArray(array, len);

    return 0;
}

int Insert(int* array, int index, int num, int len) {
    if (index < 1 && index > len+1) {
        printf("invalid position!");
        return -1;
    }
    for (int i = len; i >= index; i--) {
        array[i] = array[i-1]; 
    }
    array[index-1] = num;
}

int Sort(int* array, int len) {
    if (len < 2)
        return -1;

    int temp = 0, index;
    for (int i = 1; i < len; i++) {
        temp = array[i];
        index = i+1;
        for (int j = i; j > 0; j--) {
            if (array[j-1] < temp)
                index = j;
        }
        Insert(array, index, temp, i);
    }
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