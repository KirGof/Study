#include <stdio.h>

void factorize(int n, int *a, int *b);
int is_prime(int x);

int main()
{
    int n, a, b;
    scanf("%d", &n);
    factorize(n, &a, &b);
    printf("%d %d", a, b);
    return 0;
}

void factorize(int n, int *a, int *b)
{
    int prime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0 && i != 1 && i != n)
        {
            prime = 0;
            break;
        }
    }

    if (n == 1 || prime == 1)
    {
        *a = 1;
        *b = n;
    }
    else
    {
        for (int i = 2; i < n/2; i++)
        {
            if (n % i == 0)
            {
                *a = i;
                *b = n / i;
                break;
            }
        }
    }
}
