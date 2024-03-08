#include <stdio.h>

void sort_selection(int* array, int length);
void array_output(int* array, int length);

// 输入一个整型数组，将其排序，要求使用指针，编写函数实现选择排序，并写主函数验证。

int main(void) {

    int length = 10;
    int array[length];

    for (int i = 0; i<length; i++) {
        printf("please input a number:");
        scanf("%d", &array[i]);
    }

    printf("before sort_selectioning :\n");
    array_output(array, length);
    sort_selection(array, length);
    printf("after sort_selectioning :\n");
    array_output(array, length);
    

    return 0;
}
// selection sort
void sort_selection(int *array, int length) {
    int max;
    int index;
    for (int i = 0; i < length; i++) {
        max = array[i];
        index = i;
        for (int j = i; j < length; j++) {
            if(max<array[j]) {
                max = array[j];
                index = j;
            }
        }
        array[index] = array[i];
        array[i] = max; 
    }
}

void array_output(int* array, int length) {
        for (int i = 0; i < length; i++) {
            printf("array[%d] = %d\n", i, array[i]);
    }
}