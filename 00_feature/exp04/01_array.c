#include <stdio.h>

#define ARR_LEN 10
#define EXCEL 90

int main()
{
    char arr[ARR_LEN];
    char excel_cnt = 0, lower_avg_cnt = 0;
    float arr_sum = 0, arr_avg = 0;

    for (char count = ARR_LEN; count != 0; count--) {
        scanf("%d", arr+(ARR_LEN-count));
        arr_sum += arr[ARR_LEN-count];
    }
    
    arr_avg = arr_sum/ARR_LEN;

    printf("input score:");
    for (char count = ARR_LEN; count != 0; count--) {
        if (arr_avg > arr[ARR_LEN-count])
            lower_avg_cnt += 1;
        if (EXCEL <= arr[ARR_LEN-count])
            excel_cnt += 1;
        printf("%d  ", arr[ARR_LEN-count]);
    }
    printf("\n");
    

    printf("arr_avg: %.2f\n", arr_avg);
    printf("percentage of the score lower than average score: %.2f%%\n", (double)100*lower_avg_cnt/ARR_LEN);
    printf("percentage of the score over %d: %.2f%%", EXCEL, (double)100*excel_cnt/ARR_LEN);



    return 0;
}