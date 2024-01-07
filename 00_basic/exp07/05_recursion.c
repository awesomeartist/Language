#include <stdio.h>

// 有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。问第4个人岁数，他说比第3个人大2岁。
// 问第三个人，又说比第2人大两岁。问第2个人，说比第一个人大两岁。最后问第一个人，他说是10岁。
// 请问第五个人多大？（用递归函数实现并写主函数验证。）

int GetYear(int year, int n);

int main(void) {
    int year = 10, n = 4;
    printf("age of first person is : %d\n", GetYear(year, n));

    return 0;
}
int GetYear(int year, int n) {
    if (n > 0)
        return 2 + GetYear(year, n-1);
    else
        return year;
}