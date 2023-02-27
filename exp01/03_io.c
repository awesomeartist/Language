#include <stdio.h>

#define pi 3.1415

/*
⒊	设圆半径和圆柱高度分别由用户输入, 求圆周长， 圆面积，圆球表面积，圆球体积和圆柱体积。用scanf函数输入数据，输出计算结果，输出时要求有文字说明，取小数点后面两位有效数字。
*/

int main(void)
{

    int r,h;
    printf("please input a num for r:", &r);
    scanf("%d", &r);
    printf("please input a num for h:", &h);
    scanf("%d", &h);

    printf("the circumference of the circle is: %.2f\n", 2*pi*r);
    printf("the area of the circle is: %.2f\n", pi*r*r);
    printf("the spherical surface area of the sphere is: %.2f\n", 4*pi*r*r);
    printf("the volume of the sphere is: %.2f\n", 4*pi*r*r*r/3);
    printf("the volume of the column is: %.2f\n", pi*r*r*h);


    return 0;
}