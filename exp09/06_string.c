#include <stdio.h>

int Get_string_length(char* str);

// 写函数求字符串长度，要求使用指针，并写主函数验证。

int main(void) {

    int length = 16, count = 0;
    char str[length];
    printf("please input a string not more than 15 characters:");
    // scanf("%s", &str);
    gets(str);

    // int i;
    // str[0] = getchar();
    // while (str[i++]!='\n') {
    //    str[i] = getchar();  
    // }
    // str[i-1]='\0';
    printf("str = %s\n", str);
    count = Get_string_length(str);
    printf("str length = %d\n", count);


    return 0;
}

int Get_string_length(char* str) {
    int count = 0;
    while (str[count]!='\0') { // 0 = '\0', '0' = 48
        count += 1;
    }
    return count;
}