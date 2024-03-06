#include <stdio.h>
#include <stdlib.h>

// Bubble Sort
int sort_bubble(char *array, int len);

int main()
{
    char src_cnt = 10, new_cnt = 0, total_cnt = 0;
    char *arr = (char*)malloc(src_cnt*sizeof(char));
    float arr_sum = 0, arr_avg = 0;


    do {
        if (new_cnt > 0) {
            src_cnt = total_cnt;
            char *temp = (char*)malloc((src_cnt+new_cnt)*sizeof(char));
            for ( total_cnt = 0; total_cnt < src_cnt; total_cnt++) {
                *(temp+total_cnt) = *(arr+total_cnt);
            }
            free(arr);
            arr = temp;
        }
        for (; total_cnt < src_cnt+new_cnt; total_cnt++) {
            do {
                printf("please input a score between 80 and 100:");
                scanf("%d", arr+total_cnt);
                if ((*(arr+total_cnt) < 80) || (*(arr+total_cnt) > 100))
                    printf("invalid input! please try again!\n");
            } while((*(arr+total_cnt) < 80) || (*(arr+total_cnt) > 100));
            arr_sum += *(arr+total_cnt);
        }
        sort_bubble(arr, total_cnt);

        printf("input score:");
        for (char i = 0; i < total_cnt; i++) {
            printf("%d  ", arr[i]);
        }
        printf("\n");

        printf("members of jude: %d\n", total_cnt);
        printf("average score: %.2f\n", arr_sum/total_cnt);
        printf("the member of new jude:");
        scanf("%d", &new_cnt);

    } while (new_cnt > 0);

    free(arr);

    return 0;
}

// Bubble Sort
int sort_bubble(char *array, int len) {
    if (len < 2)
        return -1;
        int temp;
    for (int i = len-1; i >= 1 ; i--) {
        for (int j = 0; j < i; j++ ) {
            if (array[j] < array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}