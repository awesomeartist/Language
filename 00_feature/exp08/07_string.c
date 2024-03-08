#include <stdio.h>

void strcat_myfun(char *str, char* str1, char* str2);
// 写函数将两个字符串连接，要求使用指针，并写主函数验证。

int main(void) {

    char str1[32], str2[32];
    char str[64];
    printf("please input a string not more than 31 characters:");
    gets(str1);
    printf("please input a string not more than 31 characters:");
    gets(str2);
    strcat_myfun(str, str1, str2);
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    printf("str1 + str2 = %s\n", str);

    return 0;
}

void strcat_myfun(char *str, char* str1, char* str2) {
    int count, index = 0;

    count = 0;
    while (str1[count] != '\0') {
        str[index] = str1[count];
        count += 1;
        index += 1;
    }
    count = 0;
    while (str2[count] != '\0') {
        str[index] = str2[count];
        count += 1;
        index += 1;
    }
    str[index] = '\0';
}