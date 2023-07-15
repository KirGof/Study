#include <stdio.h>
#include <math.h>
int fact(int i);

// exhibitor
int main(void)
{
    double y;
    double x = 1.0;
    scanf("%lf", &y);
    printf("%.6lf\n", exp(y));
    for (double i = 1; i < 7; i++)
    {
        x += (pow(y, i)/ fact(i));
        if (i == 5)
        {
            printf("%.6lf\n", x);
        }
    }

    return 0;
}

int fact(int i)
{
    return (i < 2) ? 1 : i * fact(i - 1);
}
