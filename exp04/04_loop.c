#include <stdio.h>
#include <math.h>

// 小明和小红去参加婚宴，圆桌共10个座位，但小红不想和小明挨着坐，请编程计算他们共有几种坐法。


int main(void) {

    for (int i = 1; i < 11; i++) {
        for (int j = 1; j < 11; j++) {
            if (abs(i-j) > 1 && abs(i%10 - j%10) > 1)
            printf("x = %d, y = %d\n", i, j);
        }
    }
    return 0;
}
