#include <stdio.h>

//	1个班有10个学生参加考试，成绩（0~100内的整数）已知。计算这次考试的班级平均成绩

int main(void) {

    int score =0;
    int count = 10, sum = 0;
    do {
        printf("please input a score:");
        scanf("%d", &score);
        if (score>=0 && score<=100) {
            count -= 1;
            sum += score;
        }
        else {
            printf("invalid score!\n");
        }
    } while (count>0);
    
    printf("average score of 10 students is:%.3f", (double)sum/10);

    return 0;
}