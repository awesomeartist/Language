#include <stdio.h>

// 显示离我们最近的三个闰年？
//    - 闰年的规则1：不能被100整除的年份中，能被4整除的是闰年
//    - 闰年的规则2：能被400整除的是闰年

int main(void) {

    int year = 2023;
    int last_year = year, next_year = year;
    int count = 0;
    if (((year%400)>0 && (year%4 == 0)) || (year%400==0)) {
        printf("year = %d, this year is leap year!\n", year);
        count+=1;
        if (count ==3)
            return 0;
    }
    
loop:
    last_year = last_year-1;
    next_year = next_year+1;

    if (((last_year%400)>0 && (last_year%4 == 0)) || (last_year%400==0)) {
        printf("year = %d, this year is leap year!\n", last_year);
        count+=1;
    }
    if (count ==3)
        return 0;
    
    if (((next_year%400)>0 && (next_year%4 == 0)) || (next_year%400==0)) {
        printf("year = %d, this year is leap year!\n", next_year);
        count+=1;
    }
     if (count ==3)
        return 0;
    else
        goto loop;


    return 0;
}