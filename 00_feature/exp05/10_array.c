#include <stdio.h>

#define ARR_LEN 16
#define M (17-1)

int main()
{   
    int arr_len = ARR_LEN, index = 0;
    int arr[ARR_LEN];
    for (int i = 0; i < ARR_LEN; i++) {
        arr[i] = i+1;
    }
    while (arr_len > 1) {
        int temp = 0;
        index = (M%arr_len+index)%arr_len;
        temp = arr[index];
        for (int i = index; i < arr_len-1; i++) {
            arr[i] = arr[i+1];
        }
        arr[arr_len-1] = temp; 
        arr_len -= 1;

        for (int i = 0; i < ARR_LEN; i++) {
            printf("%d  ", arr[i]);
        }
        printf("\n");
    }
    printf("sequence:\n");
    for (int i = ARR_LEN; i > 0; i--) {
        printf("%d  ", arr[i-1]);
    }



    return 0;
}