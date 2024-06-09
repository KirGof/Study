#include <stdio.h>
int fact(int i);

// Factorial
int main(void)
{
    for (int i = 1; i < 10; i++)
    {
        int res = fact(i);
        printf("%d! = %7.d\n", i, res);
    }
    int res = fact(10);
    printf("%d!= %7.d\n", 10, res);
    return 0;
}

int fact(int i)
{
    return (i < 2) ? 1 : i * fact(i - 1);
}
