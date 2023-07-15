#include <stdio.h>
#include <math.h>

int main(void)
{
    // width and area of Saturn's rings
    long r_i, r_o;
    double pi = 3.14159265358979323846;
    scanf("%ld%ld", &r_i, &r_o);
    long width = r_o - r_i;
    long double S = pi * (pow(r_o, 2) - pow(r_i, 2)) * 100;
    printf("%ld %.2Lf", width, S);
    return 0;
}