#include <stdio.h>
#include <math.h>

// 输出2到1000之间的全部素数，要求编写一函数判断某数是否素数。

void IsPrime(int number);

int main(void) {

    for (int i = 2; i <= 1000; i++)
        IsPrime(i);

    return 0;
}

void IsPrime(int number) {
    int count = 2;
    for ( ; count<sqrt(number); count++) {
        if (number%count == 0)
            break;
    }
    if (count>sqrt(number))
        printf("%d is a prime number!\n", number);
}