#include <stdio.h>

// 一个正整数有可能被表示为n(n\>=2)个连续正整数之和，如：
// 15=1+2+3+4+5
// 15=4+5+6
// 15=7+8
// 请编写程序，根据输入的一个正整数，找出符合这种要求的所有连续正整数序列。例如，输入15，则输出：
// 1 2 3 4 5
// 4 5 6
// 7 8
// 若输入16，则输出：NONE


int main(void) {

    int num, flag = 0;
    do {
        printf("please input a number no less than 0:");
        scanf("%d", &num);
    } while (num < 0);

    for (int i = 1; i < num; i++) {
        int sum = 0;
        for (int j = i; j < num; j++) {
            sum += j;
            if (sum > num) 
                break;
            if (sum == num) {
                flag = 1;
                for (int k = i; k <= j; k++)
                    printf("%d ", k);
                printf("\n");
            }
        }
    }

    if (flag == 0)
        printf("NONE!");
    return 0;
}