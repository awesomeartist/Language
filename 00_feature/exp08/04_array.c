#include <stdio.h>

void array_extreme_value(int* array, int length);
void array_output(int* array, int length);

// 输入10个整数，将其中最小的数与第一个数对换，把最大的数与最后一个数对换。
// 写三个函数：
// （1）输入10个数；
// （2）进行处理；
// （3）输出10个数。
// 要求使用指针，并写主函数验证。

int main(void) {

    int length = 10;
    int array[length];

    for (int i = 0; i < length; i++) {
        printf("please input a number:");
        scanf("%d", &array[i]);
    }

    printf("before array_extreme_valueing :\n");
    array_output(array, length);
    array_extreme_value(array, length);
    printf("after array_extreme_valueing :\n");
    array_output(array, length);
    
    return 0;
}
// 
void array_extreme_value(int *array, int length) {
    int max, min;
    int index_max, index_min;
    max = array[0];
    min = array[0];
    for (int i = 0; i < length; i++) {
        if (max < array[i]) {
        max = array[i];
        index_max = i;
        }
        if (min>array[i]) {
        min = array[i];
        index_min = i;
        }
    }
    array[index_max] = array[length-1];
    array[length-1] = max; 
    array[index_min] = array[0];
    array[0] = min;
}

void array_output(int* array, int length) {
        for (int i = 0; i < length; i++) {
            printf("array[%d] = %d\n", i, array[i]);
    }
}