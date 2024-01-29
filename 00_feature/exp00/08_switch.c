#include <stdio.h>

/*

公司发放的奖金根据利润提成。
利润I低于10万元时，奖金可提10%；
利润在(10万，20万]时，低于10万的部分按10%提，高于10万的部分按7.5%提；
利润在(20万，40万]时，低于10万的部分按10%提，高于10万，低于20万的部分按7.5%提,高于20万的部分按5%提；
利润在(40万，60万]之间时，低于40万时按照上述方式处理，高于40万按照3%提；
利润超过60万时，小于60万部分按上述方式处理，大于60万部分按1%提。从键盘输入利润，求应发奖金数额。
（要求分别用if语句和switch语句完成）
*/

int main(void) {
    float num1,num2;
    printf("please input a number:");
    scanf("%f", &num1);

#if 0
    if(num1<=10)
        num2 = 0.1*num1;
    if(num1<=20 && num1>10)
        num2 = 1+0.075*(num1-10);
    if(num1<=40 && num1>20)
        num2 = 1.75+0.05*(num1-20);
    if(num1<=60 && num1>40)
        num2 = 2.75+0.03*(num1-40);
    if(num1>60)
        num2 = 3.35+0.01*(num1-60);

#elif 1
    int grade;
    grade = (int)(num1/10);
    switch (grade) {
        case 0:num2 = 0.1*num1;break;
        case 1:num2 = 1+0.075*(num1-10);break;
        case 2:num2 = 1.75+0.05*(num1-20);break;
        case 3:num2 = 1.75+0.05*(num1-20);break;
        case 4:num2 = 2.75+0.03*(num1-40);break;
        case 5:num2 = 2.75+0.03*(num1-40);break;
        default:num2 = 3.35+0.01*(num1-60);
    }

#endif

    printf("the bonus is :%f", num2);

    return 0;
}