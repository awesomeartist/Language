#include <stdio.h>

/*
⒋	编写程序，用getchar读入两个字符给变量c1和c2，然后分别用putchar和printf函数显示这两个字符。

回答以下问题：
1）变量c1和c2应定义为字符型还是整形变量，还是二者皆可？ 
答：定义成字符型变量和整型变量皆可。

2）要求输出c1和c2的ASCII码，用putchar还是printf函数？ 
答：要求输出ASCII码需要使用 printf() 函数。

3）整型变量和字符型变量是否可在任何情况下互相替代？
答：不可以,仅在 0~255 区间内替代。字符型变量(8 bit)和整型变量(16 bit)字长不一致，存储的值最大范围不一致。

*/


int main(void)
{
    // int c1,c2;
    char c1,c2;

#if 0

    printf("input c1 and c2 by getchar:\n");
    printf("please input a char for c1:");
    c1 = getchar();
    printf("please input a char for c2:");
    c2 = getchar();

#elif 1

    printf("input c1 and c2 by scanf():\n");
    printf("please input a number for c1:");
    scanf("%d",&c1);
    printf("please input a number for c2:");
    scanf("%d",&c2);

#endif

    printf("\noutput with putchar() :");
    printf("\nc1 = ");
    putchar(c1);
    printf("\nc2 = ");
    putchar(c2);

    printf("\noutput with printf() :\n");
    printf("c1 = \'%c\'\nc2 = \'%c\'\n", c1, c2);
    printf("c1 = %d\nc2 = %d\n", c1, c2);

    return 0;
}