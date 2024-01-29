#include <stdio.h>

// 数学黑洞。任给一个4位正整数，其各位上的数字不全相同，将数字重新组合成一个最大的数与最小的数相减，重复这个过程，最多7步，必得6174。
// 对任给的4位正整数(各位上的数字不全相同)，编程输出掉进黑洞的步数。例如：输入：1234，则输出：3。

void Swap(int* num1, int* num2);

int main(void) {
    int num, next, flag = 0;
    int num1, num2, num3, num4;

    do {
        printf("please input a number between ");
        scanf("%d", &num);
    } while (num>10000 && num < 999);
    
    next = num;
    for (int i = 1; i < 8; i++) {
        int max, min;
        num1 = next/1000;
        num2 = (next/100)%10;
        num3 = (next%100)/10;
        num4 = next%10;

        if (num1 < num2)
            Swap(&num1, &num2);
        if (num2 < num3)
            Swap(&num2, &num3);
        if (num3 < num4)
            Swap(&num3, &num4);
        if (num1 < num2)
            Swap(&num1, &num2);
        if (num2 < num3)
            Swap(&num2, &num3);
        if (num1 < num2)
            Swap(&num1, &num2);
        max = 1000*num1+100*num2+10*num3+num4;
        min = 1000*num4+100*num3+10*num2+num1;
        next = max - min;
        if (next == 6174) {
            printf("i = %d\n", i);
            break;
        }
    }

    return 0;
}

void Swap(int* num1, int* num2) {
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}