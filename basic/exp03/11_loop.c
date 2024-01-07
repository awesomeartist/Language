#include <stdio.h>

//	一个百万富翁遇到一个陌生人，陌生人找他谈了一个换钱的计划。该计划如下：
// 我每天给你m 元， 而你第一天只需给我一分钱。第二天我仍给你 m 元，你给我 2 分钱。第三天，我仍给你 m 元，你给我 4 分钱。
// 依次类推，你每天给我的钱是前一天的两倍，直到一个月(30)天。百万富翁很高兴， 欣然接受这个契约。
// 现要求，编写一个程序，由键盘输入 m，计算多少天后，百万富翁开始亏钱。再计算30天后, 富翁亏了多少钱?

int main(void) {

    int count = 1;
    double m1 = 5, m2 = 0.01; 
    double sum1 = 0, sum2 = 0;

    for ( ; count<=30; count++) {
        
        sum1 = m1*count;
        sum2 += m2;
        m2 = 2*m2;
        if (sum1<sum2)
            printf("on day %d, sum1-sum2=%f\n", count, sum1-sum2);
    }

    return 0;
}