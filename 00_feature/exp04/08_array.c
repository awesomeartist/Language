#include <stdio.h>

#define ARR_LEN 64

int main()
{
    char str[ARR_LEN];
    char index = 0, count = 0;

    gets(str);
    printf("input string = %s\n", str);
    
    while (str[index] != 0 && index < ARR_LEN) {
        if ((str[index] <= '9' && str[index] >= '0') ||
            (str[index] <= 'z' && str[index] >= 'a') ||
            (str[index] <= 'Z' && str[index] >= 'A')) {
            str[count] = str[index];
            index += 1;
            count += 1;
        } else {
            index += 1;
        }
    }
    str[count] = 0;
    printf("output string = %s\n", str);


    return 0;
}