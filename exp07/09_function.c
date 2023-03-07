#include <stdio.h>

// 编写一函数求某年某月某日是该年的第几天，并写主函数验证。

int IsLeapYear(int year);
int GetDays(int year, int month, int day);

int main(void) {

    int year, month, day;
    printf("please input a date order by year month day:");
    scanf("%d%d%d", &year, &month, &day);
    printf("until the date of %d/%d/%d has %d days.\n", year, month, day, GetDays(year, month, day));

    return 0;
}

int IsLeapYear(int year) {
    if (((year%400) > 0 && (year%4 == 0)) || (year%400 == 0)) {
        printf("year = %d, this year is leap year!\n", year);
        return 1;
    }
    else {
        printf("year = %d, this year is not leap year!\n", year);
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
                printf("invalid date!");
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
                printf("invalid date!");
        }
    }
}