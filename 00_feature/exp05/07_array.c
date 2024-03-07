#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARR_LEN 10


int main()
{
#if 1
    int *arr_1 = (int*)malloc(ARR_LEN*sizeof(int));
    int *arr_2 = (int*)malloc(ARR_LEN*sizeof(int));
    int *temp = NULL;
    memset(arr_1, 0, ARR_LEN*sizeof(int));
    memset(arr_2, 0, ARR_LEN*sizeof(int));
    *arr_1 = 1;

    for (int i = 0; i < ARR_LEN; i++) {
        int index = 0, count = i;
        while (count < ARR_LEN-1) {
            printf("   ");
            count += 1;
        }
        while (index < i+1) {
            printf("%3d   ", arr_1[index]);
            index += 1;
        }
        printf("\n");
        for (int j = 0; j <= i+1; j++) {
            if (j == 0) {
                arr_2[j] = 1;
            } else {
                arr_2[j] = arr_1[j-1] + arr_1[j];
            }
        }
        temp = arr_1;
        arr_1 = arr_2;
        arr_2 = temp;
    }
    free(arr_1);
    free(arr_2);
#elif 0
    int arr[ARR_LEN][ARR_LEN] = {0};
    
    arr[0][0] = 1;
    for (int i = 0; i < ARR_LEN; i++) {
        int index = 0, count = i;
        while (count < ARR_LEN-1) {
            printf("   ");
            count += 1;
        }
        while (index < i+1) {
            printf("%3d   ", arr[i][index]);
            index += 1;
        }
        printf("\n");
        for (int j = 0; j <= i+1; j++) {
            if (i < ARR_LEN-1) {
                if (j == 0) {
                    arr[i+1][j] = 1;
                } else {
                    arr[i+1][j] = arr[i][j-1] + arr[i][j];
                }
            }
        } 
    }
#endif
    return 0;
}