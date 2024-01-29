#include <stdio.h>

// 输入年月日, 计算这一天是当年的第几周（认为 1 月 1 日为第一周第一天）.

int main(void) {

    int week;
    int count_day = 0, flag = 0;
    int year, month, day;
    
    printf("please input a date orderly by year month count_day:");
    scanf("%d%d%d", &year, &month, &day);

    if (((year%400)>0 && (year%4 == 0)) || (year%400==0)) {
        printf("this year is leap year!\n");
        switch (month) {
            case 1: if(day<0 && day>31)flag=1;count_day = day+0;break;
            case 2: if(day<0 && day>29)flag=1;count_day = day+31;break;
            case 3: if(day<0 && day>31)flag=1;count_day = day+60;break;
            case 4: if(day<0 && day>30)flag=1;count_day = day+91;break;
            case 5: if(day<0 && day>31)flag=1;count_day = day+121;break;
            case 6: if(day<0 && day>30)flag=1;count_day = day+152;break;
            case 7: if(day<0 && day>31)flag=1;count_day = day+182;break;
            case 8: if(day<0 && day>31)flag=1;count_day = day+213;break;
            case 9: if(day<0 && day>30)flag=1;count_day = day+244;break;
            case 10: if(day<0 && day>31)flag=1;count_day = day+274;break;
            case 11: if(day<0 && day>30)flag=1;count_day = day+305;break;
            case 12: if(day<0 && day>31)flag=1;count_day = day+335;break;
            default:
                printf("invalid date!");
        }
    }
    else {
        printf("this year is not leap year!\n");
        switch (month) {
            case 1: if(day<0 && day>31)flag=1;count_day = day+0;break;
            case 2: if(day<0 && day>28)flag=1;count_day = day+31;break;
            case 3: if(day<0 && day>31)flag=1;count_day = day+59;break;
            case 4: if(day<0 && day>30)flag=1;count_day = day+90;break;
            case 5: if(day<0 && day>31)flag=1;count_day = day+120;break;
            case 6: if(day<0 && day>30)flag=1;count_day = day+151;break;
            case 7: if(day<0 && day>31)flag=1;count_day = day+181;break;
            case 8: if(day<0 && day>31)flag=1;count_day = day+212;break;
            case 9: if(day<0 && day>30)flag=1;count_day = day+243;break;
            case 10: if(day<0 && day>31)flag=1;count_day = day+273;break;
            case 11: if(day<0 && day>30)flag=1;count_day = day+304;break;
            case 12: if(day<0 && day>31)flag=1;count_day = day+334;break;
            default:
                printf("invalid date!");
        }
    }
    if (flag == 1) {
        printf("invalid date!");
        return 0;
    }
    week = count_day/7;
    if (count_day%7)
        week +=1;
    printf("week = %d",week);

    return 0;
}