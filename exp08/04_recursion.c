#include <stdio.h>

// 用递归法将一个整数n转换成字符串（例如输入整数4679，应输出字符串"4679"），并写主函数验证。

int NumToStr(int num);

int main(void) {

    int num;
    printf("please input a number:");
    scanf("%d", &num);

    NumToStr(num);

    return 0;
}
int NumToStr(int num) {
    if (num!=0) {
        NumToStr(num/10);
        printf("%c", num%10+48);
    }
    else
        return 0;

}