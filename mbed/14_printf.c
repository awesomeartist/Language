#include <stdio.h>


int main()
{
    int (*myshow)(const char*,...);
    printf("hello world!\n");
    printf("the printf is %p\n",printf);
    //myshow = printf;
    myshow = (int(*)(const char*,...))0x402A88;//printf函数地址
    myshow("==========\n");

    return 0;
}