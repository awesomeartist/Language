#include <stdio.h>

//	输出1到100之间的数中每位数乘积小于每位数之和的数。

int main(void) {

    int a, b;
    for (int count = 1; count < 100; count++) {

        a = (count/10)%10;
        b = count%10;
        if (a*b < a+b) {
            printf("%d\n", count);
        }
    }

    return 0;
}