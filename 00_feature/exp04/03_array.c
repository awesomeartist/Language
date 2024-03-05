#include <stdio.h>

#define MAX_CNT 20

int main()
{
    int num1 = 0, num2 = 1;

    printf("%d\n", num1);
    for (int cnt = 1; cnt < MAX_CNT; cnt ++) {
        printf("%d\n", num2);
        num2 = num1 + num2;
        num1 = num2 - num1;
    }

    return 0;
}