#include <stdio.h>

int main() {

    unsigned int a = 0x1234;
    unsigned char b = a >> 8;

    printf("a = %x\nsize of a = %lu\nb = %x\nsize of b = %lu\n", a, sizeof a, b, sizeof b);

    return 0;
}