#include <stdio.h>

//	输入一个班（全班最多不超过 30 人）学生某门课的成绩，当输入成绩为负值时， 输入结束，分别统计下列内容： 
//  a）统计不及格人数； 
//  b）统计成绩在全班平均分及平均分之上的学生人数；

int main(void) {

    int score = 0;
    int all_score[30];
    int count = 0, sum = 0;
    int count_failure = 0, count_over_average = 0;

    while(count<30) {
        printf("please input a score:");
        scanf("%d", &score);
        if (score>=0 && score<=100) {
            all_score[count] = score;
            count += 1;
            sum += score;    
            if (score<60)
                count_failure += 1;
        }
        else {
            printf("invalid score!\n");
            break;
        }
    }
    
    for (int i = count; i>=0; i--) {
        if (all_score[i-1]>=(double)sum/count)
            count_over_average +=1;
    }
    printf("the number of failing student is: %d\n", count_failure);
    printf("the average score of %d students is: %.3f\n", count, (double)sum/count);
    printf("the number of student who exceed the average score is: %d\n", count_over_average);

    return 0;
}