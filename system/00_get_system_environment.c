
#include "stdio.h"

int main() {
    /*
    代码段功能：用于确定计算机存储方式为大端模式或小端模式
    大端模式：高字节存储在低地址，低字节存储在高地址
    小端模式：高字节存储在高地址，低字节存储在低地址
    */ 
#if 1

    unsigned int a = 0x12345678;
    char *p = (char*)(&a);
    printf("0x%x", *p);

#endif

    return 0;
}
