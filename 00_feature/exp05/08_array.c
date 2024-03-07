#include <stdio.h>
#include <math.h>

#define MAX_NUM 216

int main()
{
    for (int i = 100; i < MAX_NUM; i++) {
        if (pow(i/100, 2)+pow(i%10, 2) == (i/10)%10)
            printf("%d\n", i);
    }
    
    return 0;
}