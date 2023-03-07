#include <stdio.h>

// 输入两个分数，输出两分数之和(要求约分)。 
// 例如：输入3/5,7/8输出：59/40; 输入:2/8,5/12
// 输出:2/3。（提示：需用到求取最小公倍数等算法）

int CommonMultiply(int num1, int num2);
int CommonDivisor(int num1, int num2);

int main(void) {

    int num1, num2, num3, num4; //分子1，分母1，分子2，分母2
    int num5 , num6, common; // 通分后的分子1，分子2，分母

    // 求最小公倍数
    do {
    printf("please input for numbers for equator like 3/5+7/8:");
    scanf("%d/%d+%d/%d", &num1, &num2, &num3, &num4);
    if (num2 <= 0 || num4 <=0)
        printf("invalid equation! try again!:\n");
    } while (num2 <= 0 || num4 <=0);

    common = CommonMultiply(num2, num4);
    num5 = num1*(common/num2);
    num6 = num3*(common/num4);

    if ((num5+num6)%common == 0)
        printf("%d/%d+%d/%d = %d", num1,num2, num3, num4, (num5+num6)/common);   
    else  
        printf("%d/%d+%d/%d = %d/%d", num1,num2, num3, num4, 
        (num5+num6)/CommonDivisor(num5+num6, common), common/CommonDivisor(num5+num6, common));

    return 0;
}

// 求最小公倍数
int CommonMultiply(int num1, int num2) {
    int count;
    count = num1;
    if (num1<num2)
        count = num2;
    while(1) {
        if(count%num1==0 && count%num2==0) 
            break;
        else
            count += 1;
    }
    return count;
}

// 求最大公约数
int CommonDivisor(int num1, int num2) {
    int count;
    count = num1;
    if (num1>num2)
        count=num2;
    while(1) {
        if(num1%count==0 && num2%count==0) {
            break;
        }
        else
            count -= 1;
    }
    return count;
}
