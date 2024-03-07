#include <stdio.h>

#define ARR_LEN 16
#define CHAR_ZERO 48

int main()
{
    char arr[ARR_LEN];
    int temp = 0, arr_len = 0;
    printf("please input a password consist of numbers:");
    gets(arr);

    while (arr[arr_len] != 0) {
        arr[arr_len] = (arr[arr_len] - CHAR_ZERO + 5)%10 + CHAR_ZERO;
        arr_len += 1;
    }
    
    for (int i = 0; i < 3; i++) {
        temp = arr[arr_len-1];
        for (int j = arr_len-1; j > 0; j--) {
            arr[j] = arr[j-1];  
        }
        arr[0] = temp;
    }
    
    for (int i = 0; i < arr_len/2; i++) {
        temp = arr[i];
        arr[i] = arr[arr_len-i-1];
        arr[arr_len-i-1] = temp;
    }

    printf("password after process = %s\n", arr);


    return 0;
}