#include <stdio.h>

// 迭代法开根号 sqrt(a) = x_n+1, x_n+1 = 1/2（x_n + a/x_n)

int main(void) {

    double x, next;
    int epoch = 0;
    do {
        printf("please input a number:");
        scanf("%lf", &x);
    } while (x < 0);
    next = x;
    while (next-(next + x/next)/2 >= 10e-6) {
        next = (next + x/next)/2;
        epoch += 1;
    }
    printf("epoch = %d, sqrt(%.2f) = %.3f\n ", epoch, x, next);

    return 0;
}