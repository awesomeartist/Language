#include <stdio.h>

#define N 3

char check_duplicate(char *arr, char len);

int main()
{
    char mat[N][N] = {0};
    char flag = 0;

    printf("please input a sudo\n");
    for (char i = 0; i < N*N; i++) {
        do {
            printf("mat[%d][%d] = ", i/N, i%N);
            scanf("%d", mat[0]+i);
            if (mat[i/N][i%N] < 1 || mat[i/N][i%N] > N) {
                printf("invalid input! please try again.\n");
            }
        } while (mat[i/N][i%N] < 1 || mat[i/N][i%N] > N);
    }

    printf("mat[] = \n");
    for (char i = 0; i < N; i++) {
        for (char j = 0; j < N; j++)
            printf("%d  ", mat[i][j]);
        printf("\n");
    }
    
    for (char i = 0; i < N; i++) {
        if (check_duplicate(mat[0]+i*N, N)) {
            flag = 1;
            break;
        }
    }

    if (flag != 1) {
        for (char i = 0; i < N; i++) {
            char a[N];
            for (char j = 0; j < N; j++) {
                a[j] = *(mat[0]+i+j*N);
            }
            if (check_duplicate(a, N)) {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0) {
        printf("it is a sudo!");
    } else {
        printf("it is not a sudo!");
    }
    return 0;
}

char check_duplicate(char *arr, char len) {
    char a[len];
    for (char i = 1; i < len; i++) {
        for (char j = 0; j < i; j++) {
            if (*(arr+i) == *(arr+j))
                return 1;
        }
    }
    return 0;
}