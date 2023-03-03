#include <stdio.h>
#include <math.h>

// 	计算一元二次方程ax^2+bx+c=0的实数解(键盘输入a, b, c)

int main(int argc, char* argv[]) {

    float a=0, b=0, c=0;
    float x1, x2;
    float re, im;
    float delta;
    printf("please input three numbers in order for equation \"ax^2+bx+c=0\"\n:");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);

    if (a==0) {
        printf("invalid input!\n");
        return 0;
    }
    delta = pow(b,2)-4*a*c;

    if (delta >= 0) {
        x1 = (-b-sqrt(delta))/2;
        x2 = (-b+sqrt(delta))/2;
        printf("roots of \"%.3fx^2+%.3fx+%.3f = 0\"are belows:\n", a, b, c);
        printf("x1 = %.3f\nx2 = %.3f\n", x1, x2);
    }
    else {  
        re = -b/2;
        im = sqrt(-delta)/2;
        printf("roots of \"%.3fx^2+%.3fx+%.3f = 0\"are belows:\n", a, b, c);
        printf("x1 = %.3f - %.3fj\nx2 = %.3f + %.3fj\n", re, im, re, im);
    }

    return 0;
}
