#include <stdio.h>

// 从键盘输入一指定金额（以元为单位，如345.78），然后显示支付该金额的各种面额人民币数量，
// 要求显示100元、50元、20元、10元、5元、1元、5角、1角、5分、1分各多少张。 
// （输出面额最大值：比如 345.78=100*3+20*2+5*1+0.5*1+0.1*2+0.05*1+0.01*3）

int main(void) {

    int array[10];
    float sum, value[10] = {100, 50, 20, 10, 5, 1, 0.5, 0.1, 0.05, 0.01};
    printf("please input a number:");
    scanf("%f", &sum);
    for (int i = 0; i<10; i++) {
        array[i] = (int)(sum/value[i]); 
        sum -= value[i]*array[i];
    }
    for (int i = 0; i<10; i++) {
        printf("$%.2f = %d\n", value[i], array[i]);
    }



    return 0;
}