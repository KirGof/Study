#include <stdio.h>

// fibonacci is not recursive
int main(void)
{
    int a, res = 0;
    int x = 1, y = 1;
    scanf("%d", &a);
    if (a == 1 || a == 2)
    {
        res = 1;
    }
    else if (a > 2)
    {
        for (int i = 3; i <= a; i++)
        {
            res = x + y;
            x = y;
            y = res;
        }
    }
    printf("%d", y);
}