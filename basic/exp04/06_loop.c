#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 超市里进行促销活动，当顾客在规定次数内猜对商品价格时就免费获得该商品。请编程完成以下功能：
// 程序里默认一个1-100之间的整数，用户输入猜测的价格后，输出提示：你猜的价格高了或低了当用户在5次以内猜对时输出：You
// get it！，并结束程序；若5次之后用户仍然没猜对，那么输出：Sorry！，并结束程序。

int main(void) {

    int num, get_num;
    srand((unsigned)time(NULL));
    num = rand()%101;
    // printf("num = %d\n", num);

    for (int i = 0; i < 5; i++) {
        printf("please input a number between 1 and 100:");
        scanf("%d", &get_num);
        if (get_num == num) {
            printf("You get it!!\n");
            break;
        }
        else if (get_num < num && i < 4)
            printf("the number is bigger, please try again!\n");
        else if (get_num > num && i < 4)
            printf("the number is smaller, please try again!\n");
        if (i == 4) 
            printf("Sorry!! The number is : %d\n", num);
    }

    return 0;
}