#include<stdio.h>

// 马克思在《数学手稿》中提出如下问题：
// 有30个人（包括男人、女人和小孩）在一家饭店吃饭共花50先令，其中每个男人花3先令，每个女人花2先令， 每个小孩花1先令，
// 问男人、女人、小孩各有多少人？写程序求解。

int main(void) {

    int man, woman, child;
    for (man = 0; man<=50/3; man++) {
        for (woman = 0; woman<=50/2; woman++) {
            child = 30 - (man+woman);
            if (man*3+woman*2+child == 50 && child>=0)
                printf("man = %d, woman = %d, child = %d\n", man, woman, child);
        }
    }

    return 0;
}