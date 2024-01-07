#include <stdio.h>

void Output(int* array, int length);
void Sort(int *array, int length);

// 编写一个程序，输入两个包含5个元素的数组，先将两个数组升序排列输出，然后将这两个数组合并成一个升序数组输出。 

int main(void) {

    int len1 = 5, len2 = 5, index = 0;
    int array1[len1], array2[len2], array[len1+len2];

    // 通过输入得到两个整型数组
    for (int i = 0; i<len1; i++) {
        printf("please input a number for array1:");
        scanf("%d", &array1[i]);
    }
    for (int i = 0; i<len2; i++) {
        printf("please input a number for array2:");
        scanf("%d", &array2[i]);
    }
    printf("\narray1 before sorting:");
    Output(array1, len1);
    printf("\narray1 after sorting :");
    Sort(array1, len1);
    Output(array1, len1);

    printf("\narray2 before sorting:");
    Output(array2, len2);
    printf("\narray2 after sorting :");
    Sort(array2, len2);
    Output(array2, len2);

    // 合并两个整型数组并升序输出
    for (int i = 0; i<len1; i++) {
        array[index] = array1[i];
        index += 1;
        
    }
    for (int i = 0; i<len2; i++) {
        array[index] = array2[i];
        index += 1;
    }
    printf("\nafter merging and sorting:");
    printf("\narray:");
    Sort(array, len1+len2);
    Output(array, len1+len2);

    return 0;
}

void Output(int* array, int length) {
        for (int i = 0; i < length; i++) {
            printf("%d  ", array[i]);
    }
}

// selection sort
void Sort(int *array, int length) {
    int max;
    int index;
    for (int i = 0; i < length; i++) {
        max = array[i];
        index = i;
        for (int j = i; j < length; j++) {
            if(max<array[j]) {
                max = array[j];
                index = j;
            }
        }
        array[index] = array[i];
        array[i] = max; 
    }
}