#include <stdio.h>

int main(void)
{
    long a;
    long long b;

    a=0x7fffffff ;
    printf("a = %d \nthe size of a = %d\n",a, sizeof a);

    a = 16000*100000;
    printf("a = %d \nthe size of a = %d\n",a, sizeof a);

    b=1600000ll*1000000ll;                                              //将程序中的数值标注为 long long 数据类型，使用 8 个字节存储
    printf("b = %d \nthe size of a = %d\n",b, sizeof b);                //计算正确，但输出格式错误，仅输出低 4 个字节

    b=1600000*1000000;                                                  //计算错误，程序中的数值默认使用整型存储，计算后超出整型范围仍以整型存储导致数据溢出
    printf("b = %lld \nthe size of a = %d\n",b, sizeof b);              //这与等号左边变量无关，将低 4 个字节赋值给 b 后输出错误的值

    b=1600000ll*1000000ll;
    printf("b = %lld \nthe size of a = %d\n",b, sizeof b);

    return 0;
}