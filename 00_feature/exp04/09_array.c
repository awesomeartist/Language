#include <stdio.h>

#define MAX_LEN 64

int main()
{
    char str[MAX_LEN];
    char count = 0, index = 0, word_flag = 0;
    gets(str);
    printf("input str = %s\n", str);

    while (str[index] != 0 && index < MAX_LEN) {
        if (str[index] == ' ') {
            word_flag = 0;
        }
        if (str[index] != ' ' && word_flag == 0) {
            count += 1;
            word_flag = 1;
        }
        index += 1;
    }
    printf("words = %d\n", count);

    return 0;
}