#include <stdio.h>
#include <stdlib.h>

// 写一函数将两个字符串连接，并写主函数验证。

void StrCat(char* str1, char* str2, char* str);
int GetLength(char* str);

int main(void) {
    char *str, *str1, *str2;
    str = (char*)malloc(64*sizeof(char));
    str1 = (char*)malloc(32*sizeof(char));
    str2 = (char*)malloc(32*sizeof(char));
    printf("please input a string:");
    gets(str1);
    printf("please input another string:");
    gets(str2);
    printf("str1 = %s, length = %d\n", str1, GetLength(str1));
    printf("str2 = %s, length = %d\n", str2, GetLength(str2));
    StrCat(str1, str2, str);
    printf("str1+str2 = %s, length = %d\n", str, GetLength(str));

    free(str);
    free(str1);
    free(str2);

    return 0;
}

void StrCat(char* str1, char* str2, char* str) {
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

int GetLength(char* str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}