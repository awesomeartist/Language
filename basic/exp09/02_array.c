#include <stdio.h>

// 输入一个整型数组，将其倒序并输出，要求使用指针，编写函数实现数组倒序，并写主函数验证。

void Reverse(int* array, int length);
void Output(int* array, int length);

int main(void) {

    int length = 10;
    int array[length];

    for (int i = 0; i < length; i++) {
        printf("please input a number:");
        scanf("%d", &array[i]);
    }

    printf("before reverse :\n");
    Output(array, length);
    Reverse(array, length);
    printf("after reverse :\n");
    Output(array, length);
    
    return 0;
}

void Reverse(int *array, int length) {
    int temp;
    for (int i = 0; i < length/2; i++) {
        temp = array[i];
        array[i] = array[length-i-1];
        array[length-i-1] = temp; 
    }
}

void Output(int* array, int length) {
        for (int i = 0; i < length; i++) {
            printf("array[%d] = %d\n", i, array[i]);
    }
}