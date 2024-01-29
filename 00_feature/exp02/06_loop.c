#include <stdio.h>
#include <math.h>

//	判断一个数是否为水仙花数。显示所有水仙花数。

int main(void) {

    int num;
    int a, b, c;
    for (int count=100; count<1000; count++) {
        a = count/100;
        b = (count/10)%10;
        c = count%10;
        if (pow(a, 3)+pow(b, 3)+pow(c, 3) == count)
            printf("%d is the narcissistic number!\n", count);
    }
    
    return 0;
}