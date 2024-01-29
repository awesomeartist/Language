#include <stdio.h>

// 写一个2进制和10进制数相互转换的程序, 要求让用户选择输入进制和待转换的数, 
// 根据进制的要求将10进制(1位)转换成2进制, 或将2进制(4位)转换为10进制. 显示结果

int main(void) {

    int mode;
    int decimal = 0, binary = 0, num;
    
    printf("input 0 chose to convert binary number to decimal number,\n");
    printf("input 1 chose to convert decimal number to binary number.\n");
    printf("mode : ");
    scanf("%d", &mode);

    if (mode == 0) {
        printf("please input binary number : ");
        scanf("%d", &num);
        binary = num;
        decimal = decimal+binary%10;
        binary = binary/10;
        decimal = decimal+2*(binary%10);
        binary = binary/10;
        decimal = decimal+4*(binary%10);
        decimal = decimal+8*(binary/10);

        printf("binary number %d convert to decimal number %d", binary, decimal);
    }
    else if (mode == 1) {
        printf("please input decimal number : ");
        scanf("%d", &num);
        decimal = num;
        binary = binary+decimal%2;
        decimal = decimal/2;
        binary = binary+10*(decimal%2);
        decimal = decimal/2;
        binary = binary+100*(decimal%2);
        binary = binary+1000*(decimal/2);
        
        printf("decimal number %d convert to binary number %d", num, binary);
    }
    else
        printf("invalid mode!");

    return 0;
}