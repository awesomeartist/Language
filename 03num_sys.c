#include "stdio.h"

int main(void)
{
    int binary  = 0b1010;
    int decimal = 10;
    int octal    = 012;
    int hex     = 0xa;
    printf("the binary number 0b1010 convert to decimal number = %d\n", binary);
    printf("the octal number 012 convert to decimal number = %d\n", octal);
    printf("the hexadecimal number 0xa convert to decimal number = %d\n",hex);

    return 0;
}