#include <stdio.h>

#define ARR_LEN 16

int main()
{
    char numbers[ARR_LEN];
    char count[ARR_LEN] = {0};
    char flag = 0, index = 0, array_len = ARR_LEN;

    for (char i = 0; i < ARR_LEN; i++) {
        scanf("%d", numbers+i);
        for (char j = 0; j < i; j++) {
            if (numbers[i] == numbers[j]) {
                count[j] += 1;
                break;
            }
            if (j == i-1)
                count[i] += 1;
        }
        if (numbers[i] == 'e') {
            array_len = i;
            break;
        }
    }
    count[0] += 1;

    for (int i = 0; i < array_len; i++) {
        if (count[i] % 2 != 0) {
            if (flag == 1) {
                flag = 0;
                break;
            }
            flag = 1;
            index = i;
        }
    }
    
    if (flag == 1) 
        printf("odd = %d\n", numbers[index]);
    else
        printf("not found!");

    return 0;
}