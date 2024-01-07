#include <stdio.h>

// 编写一函数求某年某月有多少天，并写主函数验证。

int IsLeapYear(int year);
void GetDays(int year, int month);

int main(void) {

    int year, month, day;
    printf("please input a date order by year month day:");
    scanf("%d%d%d", &year, &month, &day);
    GetDays(year, month);

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
void GetDays(int year, int month) {
    if (IsLeapYear(year)) {
        switch (month) {
            case 1: printf("January has %d days!\n", 31);break;
            case 2: printf("February has %d days!\n", 29);break;
            case 3: printf("March has %d days!\n", 31);break;
            case 4: printf("April has %d days!\n", 30);break;
            case 5: printf("May has %d days!\n", 31);break;
            case 6: printf("June has %d days!\n", 30);break;
            case 7: printf("July has %d days!\n", 31);break;
            case 8: printf("August has %d days!\n", 31);break;
            case 9: printf("September has %d days!\n", 30);break;
            case 10: printf("October has %d days!\n", 31);break;
            case 11: printf("November has %d days!\n", 30);break;
            case 12: printf("December has %d days!\n", 31);break;
            default:
                printf("invalid date!");
        }
    }
    else {
        switch (month) {
            case 1: printf("January has %d days!\n", 31);break;
            case 2: printf("February has %d days!\n", 29);break;
            case 3: printf("March has %d days!\n", 31);break;
            case 4: printf("April has %d days!\n", 30);break;
            case 5: printf("May has %d days!\n", 31);break;
            case 6: printf("June has %d days!\n", 30);break;
            case 7: printf("July has %d days!\n", 31);break;
            case 8: printf("August has %d days!\n", 31);break;
            case 9: printf("September has %d days!\n", 30);break;
            case 10: printf("October has %d days!\n", 31);break;
            case 11: printf("November has %d days!\n", 30);break;
            case 12: printf("December has %d days!\n", 31);break;
            default:
                printf("invalid date!");
        }
    }
}