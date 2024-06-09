#include <stdio.h>
int fact(int i);

// Euler number
int main(void)
{
    double x = 1.0;
    for (double i = 1; i < 6; i++)
    {
        x += ((double)1 / fact(i));
        if (i > 2)
        {
            printf("%.5lf\n", x);
        }
    }

    return 0;
}

int fact(int i)
{
    return (i < 2) ? 1 : i * fact(i - 1);
}
