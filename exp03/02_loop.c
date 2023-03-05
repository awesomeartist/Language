#include <stdio.h>

//	未知数量的学生参加考试，成绩（0~100内的整数）已知。计算这次考试的班级平均成绩。（输入不在0~100的数，则认为输入结束）

int main(void) {

    int score = 0;
    int count = 0, sum = 0;
    while(1) {
        printf("please input a score:");
        scanf("%d", &score);
        if (score>=0 && score<=100) {
            count += 1;
            sum += score;
        }
        else {
            printf("invalid score!\n");
            break;
        }
    }
    printf("average score of %d students is:%.3f",count, (double)sum/count);

    return 0;
}