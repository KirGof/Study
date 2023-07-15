#include <stdio.h>
#include <math.h>

int main(void)
{
    // r - radius, h - height, v - volume
    int r, h;
    scanf("%d%d", &r, &h);
    double v_cylinder = M_PI * r * r * h;
    double v_cone = (M_PI * r * r * h) / 3;

    printf("%.2lf %.2lf", v_cylinder, v_cone);
    return 0;
}