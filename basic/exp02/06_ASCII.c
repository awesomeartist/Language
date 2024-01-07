#include <stdio.h>

// 从键盘接收一个字符, 如果是小写字母, 将其转换为大写字母并显示; 
// 如果是在大写字母, 则直接显示; 如果不是大小写字母, 则提示输入有误。
// (提示: ASCII码表中, 大小写字母都是依次连续的)

int main(void) {

    char c;
    int ascii;
    printf("please input a character:");
    c = getchar();
    ascii = (int)c;
    if ((ascii > 64) && (ascii < 91))
        printf("c = %c", ascii);
    else if ((ascii > 96) && (ascii < 123))
        printf("c = %c", ascii-32);
    else
        printf("not an alphabet!");

    return 0;
}