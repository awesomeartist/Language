#include <stdio.h>
#include <stdlib.h>

// 写一函数求一字符串长度，并写主函数验证。

int GetLength(char* str);

int main(void) {
    char* str;
    str = (char*)malloc(32*sizeof(char));
    printf("please input a string:");
    gets(str);
    printf("str = %s, length = %d\n", str, GetLength(str));
    free(str);
    
    return 0;
}

int GetLength(char* str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}