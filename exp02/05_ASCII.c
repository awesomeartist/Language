#include <stdio.h>

// 从键盘接收一个字符, 如果是字母, 输出其对应的ASCII码; 如果是数字, 将其转换为数字, 按整数格式输出(即以格式符%d的形式用printf输出显示)

int main(void) {

    char c;
    int ascii;
    printf("please input a character:");
    c = getchar();
    ascii = (int)c;
    if ((ascii > 47) && (ascii < 58))
        printf("c = %d", ascii-48);
    else if (((ascii > 64) && (ascii < 91)) || ((ascii > 96) && (ascii < 123)))
        printf("c = %d", ascii);
    else
        printf("not a alphabet or number!");

    return 0;
}