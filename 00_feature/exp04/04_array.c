#include <stdio.h>

#define MAX_LEN 8

int main()
{
    char numbers[MAX_LEN];
    char count[MAX_LEN] = {0};

    for (char i = 0; i < MAX_LEN; i++) {
        scanf("%d", numbers+i);
        for (char j = 0; j < i; j++) {
            if (numbers[i] == numbers[j]) {
                count[j] += 1;
                break;
            }
            if (j == i-1)
                count[i] += 1;
        }
    }
    count[0] += 1;

    for (int i = 0; i < MAX_LEN; i++) {
        if (count[i] > 1) {
            printf("number %d, frq %d\n", numbers[i], count[i]);
        }

    }



    return 0;
}