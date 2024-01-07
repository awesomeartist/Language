#include <stdio.h>

// 求s=1-1/2+1/3-1/4+...+1/n

int main(void) {

    int n;
    double sum=0, reverse = 1;
    printf("please input a number for n:");
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        sum += reverse/i;
        reverse = 0 - reverse;
    }
    printf("1-1/2+1/3-1/4+ ... +1/%d = %f", n, sum);

    return 0;
}