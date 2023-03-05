#include <stdio.h>

// 输入三条边的长度, 判断三条边能否构成三角形. (两边之和大于第三边, 两边之差小于第三边)

int main(void) {

    int a, b, c;

    printf("the first side length of one triangle:");
    scanf("%d", &a);
    printf("the second side length of one triangle:");
    scanf("%d", &b);
    printf("the third side length of one triangle:");
    scanf("%d", &c);
    if (a>0&&b>0&&c>0) {
        if(a+b>c)
            if (a+c>b)
                if (b+c>a)
                    printf("a triangle can be constructed by those sides!");
                else
                    printf("a triangle can not be constructed by those sides!");
            else {
                printf("a triangle can not be constructed by those sides!");
            }
        else {
            printf("a triangle can not be constructed by those sides!");
        }
    }
    else
        printf("invalid input!");

    return 0;
}