#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    char *str1;
    char str2[10];

    str1 = (char *)malloc(sizeof(char)*10);
    printf("please input a string for str1:");
    scanf("%s",str1);
    printf("please input a string for str2:");
    scanf("%s",&str2);
    printf("the str1 is:%s\n",str1);
    printf("the str2 is:%s\n",str2);

    free(str1);

    return 0;
}