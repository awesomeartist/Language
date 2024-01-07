#include <stdio.h>

// 编写一函数求三个整数的最大值，并写主函数验证。

int Max(int x, int y, int z);

int main(void) {

    int num1, num2, num3;
    printf("please input three numbers :");
    scanf("%d%d%d", &num1, &num2, &num3);
    printf("Max = %d\n", Max(num1, num2, num3));
    
    return 0;
}

int Max(int x, int y, int z) {
    int max = x;
    if (x < y)
        max = y;
    if ( max < z)
        max = z;
    return max;
}