#include <stdio.h>

// 户输入10个学生的成绩（0-100），当用户输入的某个分数不合理时，提示用户重新输入，10个合理成绩输入完毕后输出平均分和方差。

int main(void) {

    int len = 10, score[len];
    float sum = 0, variance = 0;
    for (int i = 0; i < len; i++) {
        printf("please input a score:");
        scanf("%d", &score[i]);
        sum += score[i];
        if (score[i] > 100 || score[i] < 0) {
            printf("invalid score!!\n");
            sum -= score[i];
            i -= 1;
        }
    }
    for (int i = 0; i < len; i++) {
        variance += (score[i]-sum/len)*(score[i]-sum/len);
    }
    printf("average score = %.2f, variance = %.2f\n", sum/len, variance/len);


    return 0;
}