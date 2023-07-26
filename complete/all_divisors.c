#include <stdio.h>

void all_divisors(int limit);
//all divisors
int main()
{
    int x;
    scanf("%d", &x);
    all_divisors(x);
    return 0;
}

void all_divisors(int limit)
{
    for (int i = 1; i <= limit; i++)
    {
        printf("%d:", i);
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
}
