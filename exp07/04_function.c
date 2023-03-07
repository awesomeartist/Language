#include <stdio.h>
#include <math.h>

// 输出所有水仙花数，要求写一函数判断某数是否"水仙花数"。

void Narcissistic(int x);

int main(void) {

    for (int count=100; count<1000; count++) {
        Narcissistic(count);
    }

    return 0;
}

void Narcissistic(int number) {
    int a, b, c;
        a = number/100;
        b = (number/10)%10;
        c = number%10;
        if (pow(a, 3)+pow(b, 3)+pow(c, 3) == number)
            printf("%d is the narcissistic number!\n", number);

}