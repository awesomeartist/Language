#include <stdio.h>

//	求满足1+2+3+ ... +n<500的最大的n，并求其和，编写程序实现

int main(void) {

    int count = 1, sum = 0;
    while (1) {
        sum += count;
        count += 1;
        if (sum+count>=500)
            break;
    }
    printf("the biggest number of n make 1+2+3+ ... +n < 500 is %d\n", count);
    printf("the sum of 1+2+3+ ... + %d = %d\n", count, sum);
    

    return 0;
}