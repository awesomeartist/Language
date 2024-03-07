#include <stdio.h>
#include <stdlib.h>


#define ARR_LEN 64

char* get_sub_str(char* arr, int arr_len, int index, int count);

int main()
{   
    int arr_len = 0, index = 6, count = 6;
    char arr[ARR_LEN];
    char* sub_str = NULL;
    printf("please input a string : ");
    gets(arr);
    while (arr[arr_len] != 0) {
        arr_len += 1;
    }
    sub_str = get_sub_str(arr, arr_len, index, count);
    

    printf("arr = %s\n", arr);
    printf("arr[%d : %d] = %s\n", index, index+count, sub_str);

    free(sub_str);

    return 0;
}

char* get_sub_str(char* arr, int arr_len, int index, int count) {
    if (index > arr_len) {
        return NULL;
    }
    char* sub_str = (char*)malloc(count*sizeof(char)+1);
    for (int i = 0; i < count; i++) {
        if (*(arr+index-1+i) == 0) {
           *(sub_str+i) = 0;
           return sub_str; 
        }
        *(sub_str+i) = *(arr+index-1+i);
    }
    *(sub_str+count) = 0;

    return sub_str;
}