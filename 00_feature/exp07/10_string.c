#include <stdio.h>
#include <stdlib.h>

// 写一个函数，使其能处理字符串中除字母（大小写）、数字外的其他ASCII字符，对多于一个连在一起的相同字符，将其缩减至仅保留一个。并写主函数验证。

int string_process(char* str);

int main(void) {

    char* str;
    str = (char*)malloc(32*sizeof(char));
    printf("please input a string:");
    gets(str);
    printf("str = %s\n", str);
    string_process(str);
    printf("str = %s\n", str);
    free(str);

    return 0;
}

int string_process(char* str) {
    int i = 0, j = 0;
    char temp = '\0';
    while (str[i] != '\0') {
        if (str[i] != temp) {
            str[j] = str[i];
            j += 1;
        }
        temp = str[i];
        i += 1;
    }
    str[j] = '\0';
}