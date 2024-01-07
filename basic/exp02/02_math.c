#include <stdio.h>

// 求分段函数. 输入x, 计算出f(x)的值: f(x) = {4x-3,x<0;(x-2)^2-7,x>=0}

int main(void){

    int x;
    printf("please input a value for x:");
    scanf("%d",&x);
    
    if (x<0) {
        printf("f(x) = %d", 4*x-3);
    }
    else
        printf("f(x) = %d", (x-2)*(x-2)-7);

    return 0;
}