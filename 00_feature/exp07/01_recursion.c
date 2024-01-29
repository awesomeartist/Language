#include <stdio.h>

// 编写计算m的n次方的递归函数，并写主函数验证。
int MyPow(int m, int n);

int main(void) {

    int m, n;
    printf("please input a value for m:");
    scanf("%d", &m);
    printf("please input a value for n:");
    scanf("%d", &n);
    printf("the value of %d to %dth power is %d\n", m, n, MyPow(m, n));

    return 0;
}
int MyPow(int m, int n) {
    if (n>1)
        return m*MyPow(m, n-1);
    else
    return m;

}