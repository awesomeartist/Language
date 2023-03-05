#include <stdio.h>

// 输入两个操作数和一个操作符，显示运算结果，例如，键盘输入“2*5”，显示10.

int main(void) {

    
    int ascii;
    char operator;
    int num1,num2;
    
    printf("please input a formula like \"2*5\" :");
    scanf("%d%c%d", &num1, &operator, &num2);
    ascii = (int)operator;

    if (ascii == 43)
        printf("%d%c%d = %d", num1, operator, num2, num1+num2);
    else if (ascii == 45)
        printf("%d%c%d = %d", num1, operator, num2, num1-num2);
    else if (ascii == 42)
        printf("%d%c%d = %d", num1, operator, num2, num1*num2);
    else if (ascii == 47)
        printf("%d%c%d = %f", num1, operator, num2, (double)num1/num2);
    else if (ascii == 37)
        printf("%d%c%d = %d", num1, operator, num2, num1%num2);
    else
        printf("invalid formula!");

    return 0;
}