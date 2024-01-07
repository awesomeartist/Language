#include <stdio.h>

// 编写一函数求某两年之间共有多少天（含这两年），并写主函数验证。

int IsLeapYear(int year);
int GetGap(int year1, int year2);

int main(void) {
    int year1, year2;
    printf("please input a year:");
    scanf("%d", &year1);
    printf("please input another year:");
    scanf("%d", &year2);
    printf("between % and %d has %d days.", year1, year2, GetGap(year1, year2));

    return 0;
}

int IsLeapYear(int year) {
    if (((year%400) > 0 && (year%4 == 0)) || (year%400 == 0)) {
        return 1;
    }
    else {
        return 0;
    }


}

int GetGap(int year1, int year2) {

    int old_year, new_year;
    int sum = 0;

    // 确定时间先后
    old_year = year1;
    new_year = year2;
    if (year1 > year2) {
        old_year = year2;
        new_year = year1;
    }

    for (int i = old_year; i <= new_year; i++) {
        if (IsLeapYear(i))
            sum += 366;
        else
            sum += 365;
    }

    return sum;
}