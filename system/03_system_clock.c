#include <stdio.h>
#include <time.h>


int main(int argc, char *argv)
{
    long sum = 0;
    long count = 10000;
    long start_t, end_t;
    double duration;

#if 1
    start_t = clock();

    for(int i=1;i<=count;i++) {
        sum+=i;
    }
    for(int i=0;i<count;i++)
        for(int j=0;j<count;j++);
    end_t = clock();

#elif 1

    sum = count*(count+1)/2;

#endif

    duration = (double)(end_t-start_t)/CLK_TCK;
    printf("CLK_TCK = %d\nCLOCKS_PER_SEC = %d\n",CLK_TCK, CLOCKS_PER_SEC);
    printf("The sum of 1 to %d is %d\n", count, sum);
    printf("using time %f sec\n", duration);

    return 0;
}