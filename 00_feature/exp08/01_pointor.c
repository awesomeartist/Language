#include <stdio.h>

// 编写函数将三个整数从大到小排序（使用指针做参数），并写主函数验证。

void sort_pointer(int* x, int* y, int* z);

int main(void) {

    int x = 11, y = 13, z = 22;
    
    printf("before:");
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    sort_pointer(&x, &y, &z);
    printf("after:");
    printf("x = %d, y = %d, z = %d\n", x, y, z);


    return 0;
}

void sort_pointer(int* x, int* y, int* z) {
    int temp;
    if (*x < *y)
    temp = *x;
    *x = *y;
    *y = temp;
    if (*y < *z)
    temp = *y;
    *y = *z;
    *z = temp;
    if (*x < *y)
    temp = *x;
    *x = *y;
    *y = temp;
}