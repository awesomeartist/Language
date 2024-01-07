#include <stdio.h>
#include <stdlib.h>

//实现无符号32位整型转换为二进制数
void printf_bin(int num);
void printf2bin(int num);

int main(void){  
    
    /*
    代码段功能：验证变量移位操作
    无符号数:左移和右移都是用的逻辑移位，即左移低位空出的补0，右移高位空出的补0；
    有符号数:用的是算术移位，左移多出的会移进符号位，右移在gcc编译器下是算术右移，即空出的高位补符号位。
    */
    char num1 = -127;                                           //char类型变量 -127 存储为 1000 0001
    unsigned char num2 = 0x08;

    printf("before shift:\nnum %d -->bin: ", num1);       //有符号数%x格式输出会补充到4个字节
    printf_bin(num1);

    printf("num %d -->bin: ", num2);
    printf_bin(num2);   

    num1>>=2;
    num2>>=2;

    printf("after shift:\nnum %d -->bin: ", num1);        //有符号数%x格式输出会补充到4个字节
    printf_bin(num1);

    printf("hex_num 0x%d -->bin: ", num2);
    printf_bin(num2);

    // printf2bin(num1);

    return 0;
}

    /*
    代码段功能：输入变量，以二进制方式输出变量，大于一个字节的变量每个字节后输出空格（不同字节大小需要修改代码）
    功能实现：确定计算机存储方式为大端或小端存储方式后，由char类型指针从高字节到低字节逐个读出，逐个字节读出后再逐个读出位并打印
    */
void printf_bin(int num) {
    int i, j, k;
    unsigned char *p = (unsigned char*)&num ;                   // p先指向num后面第3个字节的地址，即num的最高位字节地址(这里按需修改)

    for (i = 0; i < 1; i++) {                                   // 依次处理1个字节(这里按需修改
            j = *(p - i);                                       // 取每个字节的首地址，从高位字节到低位字节，即p p-1 p-2 p-3地址处
            for (int k = 7; k >= 0; k--) {                       // 处理每个字节的8个位，注意字节内部的二进制数是按照人的习惯存储！
                if (j & (1 << k))                               //1左移k位，与单前的字节内容j进行与运算，如k=7时，00000000&10000000=0 ->该字节的最高位为0
                    printf("1");
                else
                    printf("0");
            }
        printf(" ");                                        //每8位加个空格，方便查看
    }
    printf("\r\n");
}

/*
代码段功能：输入变量，以二进制方式输出变量（仅从非零高位开始,同时还是连续字符串，不便于观察）
功能实现：调用库函数itoa实现（itoa为windows下特有，非标准库函数所有）
*/
void printf2bin(int num) {
    char s[32];
    itoa(num, s, 2);
    printf("hex_num 0x%x -->bin: %s\n", num,s);
}