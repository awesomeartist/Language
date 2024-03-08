#include <stdio.h>

// 直接插入排序，要求：
// -  编写函数array_insert，完成插入功能.
// - 编写函数sort_insert，调用array_insert函数实现直接插入排序.
// - 编写函数array_input，用于数组输入.
// - 编写函数array_output，用于数组输出.
// - 编写主函数，调用sort_insert函数给一个长度为10的数组排序，调用array_output输出。


int array_input(int* array, int len);
int array_output(int* array, int len);
int sort_insert(int* array, int len);
int array_insert(int* array, int len, int num, int index);

int main(void) {

    int len0=32, array[len0];
    int len = 10;

    array_input(array, len);
    array_output(array, len);
    printf("after insert 66 in position 3:\n");
    array_insert(array, 3, 66, len);len +=1;
    array_output(array, len);
    sort_insert(array, len);
    printf("after sorting:\n");
    array_output(array, len);

    return 0;
}

int array_input(int* array, int len) {
    if (len <= 0)
        return -1;
    for (int i = 0; i < len; i++) {
        printf("please input a number:");
        scanf("%d", &array[i]);
    }
}

int array_output(int* array, int len) {
    if (len <= 0)
        return -1;
    printf("Array:");
    for (int i = 0; i < len; i++) {
            printf("%d   ", array[i]);
        }
        printf("\n");
}
int array_insert(int* array, int index, int num, int len) {
    if (index < 1 && index > len+1) {
        printf("invalid position!");
        return -1;
    }
    for (int i = len; i >= index; i--) {
        array[i] = array[i-1]; 
    }
    array[index-1] = num;
}

int sort_insert(int* array, int len) {
    if (len < 2)
        return -1;

    int temp = 0, index;
    for (int i = 1; i < len; i++) {
        temp = array[i];
        index = i+1;
        for (int j = i; j > 0; j--) {
            if (array[j-1] < temp)
                index = j;
        }
        array_insert(array, index, temp, i);
    }
}