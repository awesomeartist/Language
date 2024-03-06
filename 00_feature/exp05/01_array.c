#include <stdio.h>

#define N 10

int main()
{
    char arr[N];
    int arr_sum = 0;
    float arr_avg = 0;
    for (char i = 0; i < N; i++) {
        scanf("%d", arr+i);
        arr_sum += arr[i];
    }
    arr_avg = (double)arr_sum/N;
    printf("arr_avg = %.2f\n", arr_avg);
    printf("numbers in arr over average\n");
    for (char i = 0; i < N; i++) {
        if (arr[i] > arr_avg)
            printf("%d  ", arr[i]);
    }

    return 0;
}