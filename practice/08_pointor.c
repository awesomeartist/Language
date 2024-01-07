#include <stdio.h>

void myputchar(unsigned char * str, int num) {
    for (int i = 0; i < 12; i++) {
        printf("str[%d] = %c\n", i, *(str++));
    }
}

int main(void)
{
    unsigned char ch = 'c';
    unsigned char str[16] = "hello world!";
    
    printf("ch = %c\n", *(&ch));

    myputchar(str, 12);

    for (int i = 0; i < 12; i++) {
        printf("str[%d] = %c\n", i, *(str+i));
    }

    return 0;
}