#include <stdio.h>

/*
用scanf函数输入2个整形数据a和b，分别初始化 a=5和b=2，将a/b的结果显示在屏幕上并解释得到相应结果的原因

num1/num2 = 2,这是因为 num1 和 num2 都是定义为整型的变量，相除之后的到的值也是整型，小数被约去。 

*/
int main(void) {
    int num1, num2;

    printf("Please input a number for num1:");
    scanf("%d", &num1);
    printf("Please input a number for num2:");
    scanf("%d", &num2);

    printf("num1 = %d, num2 = %d\n", num1, num2);
    printf("num1/num2 = %d\n", num1/num2);
    printf("num1/num2 = %f", (double)(num1)/num2);


    return 0;
}