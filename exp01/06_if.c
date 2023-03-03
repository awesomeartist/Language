#include <stdio.h>

// 要求根据成绩分数输出成绩等级‘A’, ‘B’, ‘C’, ‘D’, ‘E’。90分以上为’‘A’，80~89为‘B’，70~79为‘C’，60~69为‘D’，60以下为‘F’。

int main(void) {
    int score;

    printf("please input your score:");
    scanf("%d", &score);

    if (score>=0 && score <=100) {
            if(score>89)
                printf("your grade is: A");
            else if(score>79)
                printf("your grade is: B");
            else if(score>69)
                printf("your grade is: C");
            else if(score>59)
                printf("your grade is: D");
            else
                printf("your grade is:F");
    }
    else
        printf("invalid score!\n");

    return 0;
}