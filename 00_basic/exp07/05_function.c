#include <stdio.h>

// 输出所有完全数，要求写一函数判断某数是否"完全数"。

void IsPerfectNumber(int number);

int main(void) {

    for (int count = 2; count<10000; count++) {
        IsPerfectNumber(count);
    }

    return 0;
}

void IsPerfectNumber(int number) {
    int sum = 0;
    for (int count = 1; count<number; count++) {
        if (number%count == 0)
            sum += count;
    }
    if (sum == number)
        printf("%d is a perfect number!\n", number);
}