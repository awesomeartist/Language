#include <stdio.h>

#define CNT 10
#define EXCEL 90

int main()
{
    char score[CNT];
    char excel_cnt = 0, lower_avg_cnt = 0;
    float score_sum = 0, score_avg = 0;

    for (char count = CNT; count != 0; count--) {
        scanf("%d", score+(CNT-count));
        score_sum += score[CNT-count];
    }
    
    score_avg = score_sum/CNT;

    printf("input score:");
    for (char count = CNT; count != 0; count--) {
        if (score_avg > score[CNT-count])
            lower_avg_cnt += 1;
        if (EXCEL <= score[CNT-count])
            excel_cnt += 1;
        printf("%d  ", score[CNT-count]);
    }
    printf("\n");
    

    printf("score_avg: %.2f\n", score_avg);
    printf("percentage of the score lower than average score: %.2f%%\n", (double)100*lower_avg_cnt/CNT);
    printf("percentage of the score over %d: %.2f%%", EXCEL, (double)100*excel_cnt/CNT);



    return 0;
}