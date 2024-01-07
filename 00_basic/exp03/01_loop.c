#include <stdio.h>

// 输入10个小数，统计出正数之和和负数之和

int main(void) {

    float num;
    float  sum1 =0, sum2 = 0;
    
    for (int count =10;count>0;count--) {
        printf("please input a number:");
        scanf("%f", &num);
        if (num>=0)
            sum1+=num;
        else
            sum2+=num;
    }
    printf("the sum of those no less than 0 is %f\n", sum1);
    printf("the sum of those less than 0 is %f\n", sum2);

    return 0;
}