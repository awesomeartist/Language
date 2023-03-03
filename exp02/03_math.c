#include <stdio.h>
#include <math.h>

// 计算两个整数(键盘输入)x和y的和, 差, 积, 商, 余数, x的平方和y的三次方, 分行输出结果

int main(void) {

    int x,y;
    printf("please input a integral number for x:");
    scanf("%d", &x);
    printf("please input a integral number for y:");
    scanf("%d", &y);

    printf("x = %d, y = %d, x + y = %d\n", x, y, x+y);
    printf("x = %d, y = %d, x - y = %d\n", x, y, x-y);
    printf("x = %d, y = %d, x * y = %d\n", x, y, x*y);
    printf("x = %d, y = %d, x / y = %.3f\n", x, y, (double)(x)/y);
    printf("x = %d, y = %d, x %% y = %d\n", x, y, x%y);
    // printf("x = %d, x^2 = %d\n", x, x*x);
    // printf("y = %d, y^3 = %d\n", y, y*y*y);
    printf("x = %d, x^2 = %.3f\n", x, pow(x, 2));
    printf("y = %d, y^3 = %.3f\n", y, pow(y, 3));

    return 0;
}