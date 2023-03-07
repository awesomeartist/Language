#include <stdio.h>

// 请编写双层循环结构程序，输出如下图形。
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *

int main(void) {
    int n;
    printf("please input a number :");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = n-i; j > 0; j-- )
            printf("  ");
        for (int j = 1; j <= 3+2*i; j++)
                printf(" *");
        printf("\n");
    }

    return 0;
}