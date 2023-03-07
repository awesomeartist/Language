#include <stdio.h>

// 用户输入n，求s=1+（1+2）+（1+2+3）+\...+（1+2+3+\...+n）的值。

int main(void) {
    int n, sum = 0;
    printf("please input a number :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            sum += j;
        }
    }
    printf("1+(1+2)+(1+2+3)+...+(1+2+3+...+%d) = %d\n", n, sum);

    return 0;
}