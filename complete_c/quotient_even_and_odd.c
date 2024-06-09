#include <stdio.h>

int main(void)
{
    //  quotient of the products of digits corresponding to even and odd digits of a four-digit number
    int x;
    int tmp1 = 0;
    int tmp2 = 0;
    double res = 0.0;
    scanf("%d", &x);
    tmp1 = (x / 1000) * (x / 10 % 10);
    tmp2 = (x / 100 % 10) * (x % 10);
    res = (double)tmp1 / (double)tmp2;
    printf("%.2lf ", res);
    return 0;
}