#include <stdio.h>

/*
输入不多于5位的整数，要求：
1）求它是几位数；
2）分别打印出每一位数字；
3）按逆序打印每一位数字，如输入123，输出321。
*/

int main(void) {

    long int num,temp,re_num;
    int i,count=0;

    printf("please input a number not bigger than 99999:");
    scanf("%d", &num);


// 不使用循环 
#if 0
    count =3;
    temp = num;

    // 判断是几位数
    if (temp<100) {
        count = count-1;
        if(temp<10)
            count = count-1;
    }
    else if (temp>999) {
        count = count+1;
        if (temp>9999)
            count = count+1;
    }

    printf("this number has %d digits", count);

    // 反向输出数字，不能处理 0 结尾的整数
    re_num = temp%10;
    if (count>1) {   
        count = count-1;
        temp = temp/10;
        re_num = re_num*10+temp%10;
    }
    if (count>1) {   
        count = count-1;
        temp = temp/10;
        re_num = re_num*10+temp%10;
    }
    if (count>1) {   
        count = count-1;
        temp = temp/10;
        re_num = re_num*10+temp%10;
    }
    if (count>1) {   
        count = count-1;
        temp = temp/10;
        re_num = re_num*10+temp%10;
    }


// 使用循环
#elif 1

    // 判断是几位数
    temp = num;
    while (temp) {
            count++;
            temp = temp/10;
    }
    temp = num;
    printf("the number has %d digits\n", count);


    // 逐位输出数字
    printf("digits of the number are:");
    i= count;
    
    while (i--) {   
        temp = num;
        int j=i;
        while (j--) {
                temp = temp/10;
            }
        temp = temp%10;
        printf("%d ", temp);
    }

    
    // 获得反向数字，但不能处理 0 结尾的整数
    // re_num = 0;
    // int i = count;
    // while (i) {
    //      i--;
    //      re_num = re_num*10+temp%10;
    //      temp = temp/10;
    // }

    // 反向输出数字
    printf("\nreverse the number:");
    i = count;
    while (i--) {
        printf("%d", num%10);
        num = num/10;
    }
#endif


    return 0;
}