#include <stdio.h>

int is_prime(int x);

//  is_prime
int main()
{
    int x;
    scanf("%d", &x);
    printf("%d", is_prime(x));
    return 0;
}

int is_prime(int x)
{
    int res = 1;
    if (x <= 1)
    {
        res = 0;
    }
    else
    {
        for (int i = 2; i < x; i++)
        {
            if (x % i == 0 && i != 1 && i != x)
            {
                res = 0;
                break;
            }
        }
    }

    return res;
}