#include <stdio.h>

// 有函数f(x)=(x+1)^2^和g(x)=2x+1，输入x值计算f(g(x))的值。

double Func1(double x);
double func2(double y);

int main(void) {

    double x;
    printf("please input a number for x:");
    scanf("%lf", &x);
    printf("f(g(%.2f)) = %.2f", x, Func1(Func2(x)));

    return 0;
}

double Func1(double x) {
    return (x+1)*(x+1);
}

double Func2(double x) {
    return 2*x+1;
}