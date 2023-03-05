#include <stdio.h>

//	毕业生找工作, 参加某大型企业的面试. 有10个评委打分，试编程求选手的平均得分（去掉一个最高分和一个最低分）。

int main(void) {

    int score, max = 0, min = 100;
    int count = 10, sum = 0;

    while (count>0) {
        printf("please input a score:");
        scanf("%d", &score);
        if (score>=0 && score<=100) {
            count -= 1;
            sum += score;
            if (score > max)
                max = score;
            if (score < min)
                min = score;
        }
        else {
            printf("invalid score!\n");
        }
    }
    
    printf("after eliminating the lowest score %d and highest score %d, \
            \nthe average score of 8 applicants is:%.3f", min, max, (double)(sum-(max+min))/8);

    return 0;
}