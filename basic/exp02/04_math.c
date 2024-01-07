#include <stdio.h>

// 商店做活动, 不同的货物(米, 面, 鱼)打折的力度不一. 提前输入货物的单价和折扣. 顾客购物时输入货物的重量, 即可显示应付款(精确到分)

int main(void) {

    float rice, fish, flour;
    float rice_weight, fish_weight, flour_weight;
    float rice_discount, fish_discount, flour_discount, sum = 0;

    rice = 2.5;
    fish = 8;
    flour = 3.5;
    rice_discount = 0.9;
    fish_discount = 0.8;
    flour_discount = 0.7;

    printf("unit price of rice = %.3f, discount = %.3f\n", rice, rice_discount);
    printf("unit price of fish = %.3f, discount = %.3f\n", fish, fish_discount);
    printf("unit price of flour = %.3f, discount = %.3f\n", flour, flour_discount);
    
    printf("please input the weight of fish:");
    scanf("%f", &rice_weight);
    printf("please input the weight of fish:");
    scanf("%f", &fish_weight);
    printf("please input the weight of fish:");
    scanf("%f", &flour_weight);

    sum = rice*rice_weight*rice_discount + fish*fish_weight*fish_discount + flour*flour_weight*flour_discount;
    printf("total prices = %.3f", sum);

    return 0;
}