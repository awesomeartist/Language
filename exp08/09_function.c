#include <stdio.h>

// 写一个程序，从键盘输入5个正整数，然后求出它们的最小公倍数，并显示输出（通过调用对两个正整数求最小公倍数的函数实现）

int CommonMultiple(int num1, int num2);

int main(void) {

    int len = 5, array[len], common;
    for (int i = 0; i<len; i++) {
        printf("please input a number:");
        scanf("%d", &array[i]);
    }
    for (int i = 0; i<len-1; i++) {
        if (i==0) {
            common = array[i];
            common = CommonMultiple(common, array[i+1]);
        }
        else
            common = CommonMultiple(common, array[i+1]);
    }
    printf("common multiple : %d", common);

    return 0;
}

int CommonMultiple(int num1, int num2) {
    int count = num1;
    if (num1<num2)
        count = num2;
    while(1) {
        if(count%num1==0 && count%num2==0)
            break;
        else
            count += 1;
    }
    return count;
}