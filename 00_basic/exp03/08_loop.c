#include <stdio.h>
#include <math.h>

// 判断一个数是否为素数。显示100以内的所有素数（用函数）

void IsPrime(int number) {
    int count = 2;
    for ( ; count<sqrt(number); count++) {
        if (number%count == 0)
            break;
    }
    if (count>sqrt(number))
        printf("%d is a prime number!\n", number);
}

int main(void) {

    for (int count = 2; count<100; count++) {
        IsPrime(count);
    }

    return 0;
}