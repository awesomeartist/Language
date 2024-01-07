#include <stdio.h>

// 编写一函数求某年到某月止共有多少天，并写主函数验证。

int IsLeapYear(int year);
int GetDays(int year, int month);

int main(void) {

    int year, month, day;
    printf("please input a date order by year month day:");
    scanf("%d%d%d", &year, &month, &day);
    printf("until the end of %d/%d has %d days.\n", year, month, GetDays(year, month));

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
int GetDays(int year, int month) {
    if (IsLeapYear(year)) {
        switch (month) {
            case 1: return 31;
            case 2: return 60;
            case 3: return 91;
            case 4: return 121;
            case 5: return 152;
            case 6: return 182;
            case 7: return 213;
            case 8: return 244;
            case 9: return 274;
            case 10: return 305;
            case 11: return 335;
            case 12: return 366;
            default:
                {printf("invalid date!");return -1;}
        }
    }
    else {
        switch (month) {
            case 1: return 31;
            case 2: return 59;
            case 3: return 90;
            case 4: return 120;
            case 5: return 151;
            case 6: return 181;
            case 7: return 212;
            case 8: return 243;
            case 9: return 273;
            case 10: return 304;
            case 11: return 334;
            case 12: return 365;
            default:
                {printf("invalid date!");return -1;}
        }
    }
}