#include <stdio.h>
#include <math.h>

// which point is closer to the origin
int main(void)
{
    int x1, y1, x2, y2;
    int res = 0;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    if (sqrt(x1*x1 + y1*y1) > sqrt(x2*x2 + y2*y2))
    {
        res = 2;
    }
    else if (sqrt(x1*x1 + y1*y1) < sqrt(x2*x2 + y2*y2))
    {
        res = 1;
    }
    printf("%d", res);
}
