#include <stdio.h>

#define ARR_LEN 16

int main()
{
    char index = 0;
    char arr2[ARR_LEN];
    char arr1[2*ARR_LEN];

    printf("please input a string : ");
    gets(arr1);
    printf("arr1 = %s\n", arr1);

    while(arr1[index] != 0) {
        if (index%2 == 0) {
            arr2[index/2] = arr1[index];
        }
        index += 1;
    }
    
    printf("arr2 = %s\n", arr2);

    return 0;
}