#include <stdio.h>

void array_shift(int* array, int length, int m);
void array_output(int* array, int length);

// 有n个整数，使前面各数顺序向后移m个位置，最后m个数变成最前面m个数
// 写一函数实现以上功能，在主函数中输入n个整数和输出调整后的n个数,要求使用指针，并写主函数验证。

int main(void) {

    int length = 10, m = 12;
    int array[length];

        for (int i = 0; i < length; i++) {
        printf("please input a number:");
        scanf("%d", &array[i]);
    }

    printf("before shifting :\n");
    array_output(array, length);
    array_shift(array, length, m);
    printf("after shifting back %d places:\n", m);
    array_output(array, length);
    
    return 0;
}
//
void array_shift(int *array, int length, int m) {
    int temp;
    for (int i = m; i > 0; i--) {
        temp  = array[length-1];
        for (int j = length-1; j > 0; j--) {
            array[j] = array[j-1];
        }
        array[0] = temp;
    }
}

void array_output(int* array, int length) {
        for (int i = 0; i < length; i++) {
            printf("array[%d] = %d\n", i, array[i]);
    }
}