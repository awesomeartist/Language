#include <stdio.h>

// 用递归方法计算一个数组所有元素的积，并写主函数验证。

int Multiply(int* array, int len);

int main(void) {
    
    int len = 10, array[len];
    for (int i = 0; i<len; i++) {
        printf("please input a number:");
        scanf("%d", &array[i]);
    }
    printf("the value = %d", Multiply(array, len));

    return 0;
}

int Multiply(int* array, int len) {
    if (len>0)
        return array[len-1]*Multiply(array, len-1);
    else
        return 1;

}