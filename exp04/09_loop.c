#include <stdio.h>

// 迭代法开根号 sqrt(a) = x_n+1, x_n+1 = 1/2（x_n + a/x_n)

int main(void) {

    double x, next;
    do {
        printf("please input a number:");
        scanf("%lf", &x);
    } while (x < 0);
    next = x;
    for (int i = 0; i <30; i++) {
        next = (next + x/next)/2;;
    }
    printf("sqrt(%.2f) = %.3f\n ", x, next);
    return 0;
}