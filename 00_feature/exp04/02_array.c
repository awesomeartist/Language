#include <stdio.h>
#include <stdlib.h>

// Bubble Sort
int sort_bubble(char *array, int len);

int main()
{
    char src_cnt = 10, new_cnt = 0, total_cnt = 0;
    char *score = (char*)malloc(src_cnt*sizeof(char));
    float score_sum = 0, score_avg = 0;


    do {
        if (new_cnt > 0) {
            src_cnt = total_cnt;
            char *temp = (char*)malloc((src_cnt+new_cnt)*sizeof(char));
            for ( total_cnt = 0; total_cnt < src_cnt; total_cnt++) {
                *(temp+total_cnt) = *(score+total_cnt);
            }
            free(score);
            score = temp;
        }
        for (; total_cnt < src_cnt+new_cnt; total_cnt++) {
            do {
                printf("please input a score between 80 and 100:");
                scanf("%d", score+total_cnt);
                if ((*(score+total_cnt) < 80) || (*(score+total_cnt) > 100))
                    printf("invalid input! please try again!\n");
            } while ((*(score+total_cnt) < 80) || (*(score+total_cnt) > 100));
            score_sum += *(score+total_cnt);
        }
        sort_bubble(score, total_cnt);

        printf("input score:");
        for (char i = 0; i < total_cnt; i++) {
            printf("%d  ", score[i]);
        }
        printf("\n");

        printf("members of jude: %d\n", total_cnt);
        printf("average score: %.2f\n", score_sum/total_cnt);
        printf("the member of new jude:");
        scanf("%d", &new_cnt);

    } while (new_cnt > 0);

    free(score);

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