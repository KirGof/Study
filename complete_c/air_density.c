#include <stdio.h>
#include <math.h>
// air density at altitude h
int main(void)
{
    double h; 
    double res = 0.0, ro_0 = 1.29, z = 1.25e-4;
    scanf("%lf", &h);
    res = ro_0 * exp((-h) * z);
    printf("%.2lf", res);
}
