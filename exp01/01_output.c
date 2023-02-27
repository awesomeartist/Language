#include <stdio.h>

/*

⒈	假设有a = 3, b = 4, c = 5, x = 1.2, y = 2.4, z = -3.6, u = 51274, n = 128765, c1 = ’a’, c2 = ‘b’, 要求得到以下的输出格式和结果，写成程序。

a = 3; b= 4; c = 5;
x= 1.200000; y = 2.400000, z = -3.6;
x + y = 3.60; y + z = -1.20; 
u = 51724;  n =   128765;
c1 = ‘a’ or 97;
c2 = ‘b’ or 98

*/

int main(void)
{   
    int a , b, c;
    a = 3;
    b = 4;
    c = 5;

    float x, y, z;
    x = 1.2;
    y = 2.4;
    z = -3.6;

    int u = 51274;
    long int n = 128765;

    char c1, c2;
    c1 = 'a';
    c2 = 'b';

    char str[20] = "hello world!";

    printf("\na = %d; b = %d; c = %d;\n", a, b, c);
    printf("x = %f; y = %f; z = %.1f;\n", x, y, z);
    printf("x + y = %.2f; y + z = %.2f\n", x+y, y+z);
    printf("u = %d; n = %d\n", u, n);

    printf("c1 = \'%c\' or %d;\n", c1, c1);
    printf("c2 = \'%c\' or %d;\n", c2, c2);
    printf("str = %s", str);


    return 0;
}