#include <stdio.h>
#include <math.h>


#define MAX_NUM 997
#define MIN_PRIME 2

int main()
{
    int arr_len = MAX_NUM-MIN_PRIME+1;
    int prime[MAX_NUM-MIN_PRIME+1];
    for (int i = 0; i <= MAX_NUM-MIN_PRIME; i++) {
        prime[i] = i+MIN_PRIME;
    }

    for (int i = 0; i < arr_len; i++) {
        int index = i+1;
        if (prime[index] > sqrt(MAX_NUM))
            break;
        for (int j = index; j < arr_len; j++) {
            if (prime[j]%prime[i] != 0) {
                prime[index] = prime[j];
                index += 1;
            }
        }
        arr_len = index;
    }
    for (int i = 0; i < arr_len; i ++) {
        printf("prime[%d] = %d\n", i, prime[i]);
    }

    return 0;
}