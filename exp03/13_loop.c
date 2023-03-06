#include <stdio.h>

// 百元买百鸡问题：公鸡每只5元，母鸡每只3元，小鸡3只一元，问一百元买一百只鸡有几种买法。

int main(void) {

    int x, y, z;
    for (x = 0; x<=100/5; x++) {
        for (y = 0; y<=(100-5*x)/3; y++) {
            z = 100-(x+y);
            if (5*x+3*y+z*(1.0/3)<=100 && z>=0)
                printf("x = %d, y = %d, z = %d\n", x, y, z);
        }
    }

    return 0;
}