#include <stdio.h>

// 编写一函数判断某年是否是闰年，并写主函数验证。

void IsLeapYear(int year);

int main(void) {

    int year;
    printf("please input a year:");
    scanf("%d", &year);
    IsLeapYear(year);

    return 0;
}

void IsLeapYear(int year) {
        if (year < 0)
            printf("invalid input!\n");
    if (((year%400) > 0 && (year%4 == 0)) || (year%400 == 0))
        printf("year = %d, this year is leap year!\n", year);
    else
        printf("year = %d, this year is not leap year!\n", year);


}