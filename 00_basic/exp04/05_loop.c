#include <stdio.h>
#include <math.h>

// 用户输入一个偶数，分解为两个质数的和输出，输出所有可能的情况（例如用户输入10，输出3+7,5+5,7+3）

int IsPrime(int number);

int main(void) {

    int num;
    do {
    printf("please input a even number:");
    scanf("%d", &num);
    if (num%2 != 0 || num <= 0)
        printf("invalid number! please try again!\n");
    } while (num%2 != 0 || num <= 0) ;
    for (int i = 2; i <= num/2; i++) {
        if (IsPrime(i) && IsPrime(num-i))
            printf("%d = %d + %d\n", num, i, num-i);
    }

    return 0;
}

int IsPrime(int number) {
    int count = 2;
    for ( ; count<sqrt(number); count++) {
        if (number%count == 0)
            break;
    }
    if (count>sqrt(number))
        return 1;
    else
        return 0;
}