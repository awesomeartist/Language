#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p;
    p = (int*)malloc(5*sizeof(int));
    if(p == NULL){
        exit(1);
    }

    p[0] = 1000;
    p[1] = 999;

    printf("the address of p is 0x%x\n", &p);
    printf("the address of p pointing to is 0x%x\n", p);
    printf("the p[0] is %d\n", p[0]);
    printf("the p[1] is %d\n", *(p+1));
    
    free(p);
    p = NULL;


    return 0;
}