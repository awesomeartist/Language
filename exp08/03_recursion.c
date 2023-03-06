#include <stdio.h>

// 用递归方法找出一个数组中最大元素的值及其位置，并写主函数验证。

int GetLocation(int* array, int len, int index);

int main(void) {

    int len = 10, index = len-1, array[len];
    for (int i = 0; i<len; i++) {
        printf("please input a number:");
        scanf("%d", &array[i]);
    }
    index = GetLocation(array, len, index);
    printf("location = %d, value = %d", index, array[index-1]);

    return 0;
}

int GetLocation(int* array, int len, int index) {
    if (array[len-1]>array[index-1])
        index = len;

    if(len>0)
        return GetLocation(array, len-1, index);
    else
        return index;
}