#include <stdio.h>

#define ARR_LEN 16

int main()
{
    char str1[ARR_LEN], str2[ARR_LEN], str3[2*ARR_LEN];
    gets(str1);
    gets(str2);
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    int index = 0, count = 0;
    while (str1[index] != 0) {
        str3[count] = str1[index];
        count += 1;
        index += 1;
    }

    index = 0;
    while (str2[index] != 0) {
        str3[count] = str2[index];
        count += 1;
        index += 1;
    }
    str3[count] = 0;
    printf("str3 = %s\n", str3);

    
    


    return 0;
}