#include <stdio.h>
#include <math.h>
// 用函数调用的方法求下面公式前30项的和，并写主函数验证。
// $$f(x) = 1+x+\frac {x^2} {2!}+\frac {x^3} {3!}+...+\frac {x^n}{n!}$$

double Exp(double x, int n);
double Factorial(int n);

int main(void) {

    int n = 30;
    double x;
    printf("please input a value for x to get the value of exp(x):");
    scanf("%lf", &x);
    printf("exp(%.2f) = %f\n", x, Exp(x, n-1));

    return 0;
}

double Exp(double x, int n) {
    if (n > 0)
        return pow(x, n)/Factorial(n) + Exp(x, n-1);
    else
        return 1;
}
double Factorial(int n) {
    if (n > 0)
        return n*Factorial(n-1);
    else
        return 1;
}