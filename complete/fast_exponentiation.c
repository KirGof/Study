#include <stdio.h>

//Fast exponentiation
int main(void)
{
    int a, n, res = 1;

    scanf("%d %d", &a, &n);

    while (n != 0)
    {
        if (n % 2 == 1)
        {
            res *= a;
        }
        a = a * a;
        n = n / 2;
    }
    printf("%d", res);
    return 0;
}
