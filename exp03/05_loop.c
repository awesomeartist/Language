#include <stdio.h>

//	求两个整数的最大公倍数和最小公约数。

int main(void) {

    int num1, num2;
    int count;

    // 求最小公倍数
    printf("please input a number for num1:");
    scanf("%d", &num1);
    printf("please input a number for num2:");
    scanf("%d", &num2);

    count = num1;
    if (num1<num2)
        count=num2;
    while(1) {
        if(count%num1==0 && count%num2==0) {
            printf("the common multiple of %d and %d is %d\n", num1, num2, count);
            break;
        }
        else
            count+=1;
    }
    // 求最大公约数
    count = num1;
    if (num1>num2)
        count=num2;
    while(1) {
        if(num1%count==0 && num2%count==0) {
            printf("the common divisor of %d and %d is %d\n", num1, num2, count);
            break;
        }
        else
            count-=1;
    }

    return 0;
}