#include <stdio.h>

// 编写一函数求某两年之间共有多少天（含这两年），并写主函数验证。

int IsLeapYear(int year);
int GetDays(int year, int month, int day);
int GetGap(int year1, int month1, int day1, int year2, int month2, int day2);
int main(void) {

    int year1, year2, month1, month2, day1, day2;
    printf("please input a date order by year month day:");
    scanf("%d%d%d", &year1, &month1, &day1);
    printf("please input another date order by year month day:");
    scanf("%d%d%d", &year2, &month2, &day2);
    printf("between date %d/%d/%d and date %d/%d/%d has %d days.", 
        year1, month1, day1, year2, month2, day2, GetGap(year1, month1, day1, year2, month2, day2));

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
int GetDays(int year, int month, int day) {
    if (IsLeapYear(year)) {
        switch (month) {
            case 1: return day+0;
            case 2: return day+31;
            case 3: return day+60;
            case 4: return day+91;
            case 5: return day+121;
            case 6: return day+152;
            case 7: return day+182;
            case 8: return day+213;
            case 9: return day+244;
            case 10: return day+274;
            case 11: return day+305;
            case 12: return day+335;
            default:
                {printf("invalid date!");return -1;}
        }
    }
    else {
        switch (month) {
            case 1: return day+0;
            case 2: return day+31;
            case 3: return day+59;
            case 4: return day+90;
            case 5: return day+120;
            case 6: return day+151;
            case 7: return day+181;
            case 8: return day+212;
            case 9: return day+243;
            case 10:return day+273;
            case 11:return day+304;
            case 12:return day+334;
            default:
                {printf("invalid date!");return -1;}
        }
    }
}

int GetGap(int year1, int month1, int day1, int year2, int month2, int day2) {
    int old_year, old_month, old_day;
    int new_year, new_month, new_day;
    int sum = 0;
    old_year = year1;
    new_year = year2;
    old_month = month1;
    new_month = month2;
    old_day = day1;
    new_day = day2;
    // 确定时间先后
    if (year1 > year2) {
        old_year = year2;
        new_year = year1;
        old_month = month2;
        new_month = month1;
        old_day = day2;
        new_day = day1;
    }
    else if (month1 > month2) {
        old_year = year2;
        new_year = year1;
        old_month = month2;
        new_month = month1;
        old_day = day2;
        new_day = day1;
    }
    else if (day1 > day2) {
        old_year = year2;
        new_year = year1;
        old_month = month2;
        new_month = month1;
        old_day = day2;
        new_day = day1;
    }

    sum += GetDays(new_year, new_month, new_day);
    for (int i = old_year; i < new_year; i++) {
        if (IsLeapYear(i))
            sum += 366;
        else
            sum += 365;
    }
    sum -= GetDays(old_year, old_month, old_day);

    return sum;
}