#include <stdio.h>

// binary to decimal conversion
int main(void)
{
    int x, i = 0;
    int res = 0;
    scanf("%d", &x);
    while (x != 0)
    {
        if (x % 10 == 1)
        {
            res += pow(2, i);
        }
        x /= 10;
        i++;
    }
    printf("%d", res);
}
