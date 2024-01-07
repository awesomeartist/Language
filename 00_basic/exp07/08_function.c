#include <stdio.h>

// 如果有两个数，每个数的所有约数（除本身外）的和正好等于对方，则称这两个数为互满数，求出30000以内的所有互满数并显示输出
// （求一个数的所有约数的和用函数实现）。
int SumDivisor(int num);
int main(void) {

    int sum1, sum2;
    for (int i = 3; i < 30000; i++) {
            sum1 = SumDivisor(i);
            sum2 = SumDivisor(sum1);
        if (i == sum2 && sum1 > i)
            printf("%d and %d are amicable number.\n", i, sum1);
    }

    return 0;
}

int SumDivisor(int num) {
    int sum = 0;
    for(int count = 1; count < num; count++) {
        if(num%count == 0) 
            sum += count;
    }
    return sum;
}