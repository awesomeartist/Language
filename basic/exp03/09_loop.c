#include <stdio.h>

// 计算1~1000以内所有的完数（用函数）

void IsPerfectNumber(int number) {
    int sum = 0;
    for (int count = 1; count<number; count++) {
        if (number%count == 0)
            sum += count;
    }
    if (sum == number)
        printf("%d is a perfect number!\n", number);
}

int main(void) {

    for (int count = 2; count<1000; count++) {
        IsPerfectNumber(count);
    }

    return 0;
}