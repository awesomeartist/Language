#include <stdio.h>

// ⒌有三个整数，由键盘输入，输出其中最大的数（要求分别使用if语句和条件运算符完成上述功能）


int main(void)
{
    int num1,num2,num3;
    int max;

    printf("please input a number for num1:");
    scanf("%d", &num1);
    printf("please input a number for num2:");
    scanf("%d", &num2);
    printf("please input a number for num3:");
    scanf("%d", &num3);

#if 0
    if(num1>num2)
        {
            if(num1>num3)
                max = num1;
            else
                max = num3;
        }
    else
        {
            if(num2>num3)
                max = num2;
            else
                max = num3;
        }
#elif 1
    max = num1>num2?num1:num2;
    max = max>num3?max:num3;
#endif
    printf("the largest number is:%d", max);
    return 0;
}