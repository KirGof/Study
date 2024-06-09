#include <stdio.h>

int main(void)
{
    // revers dig
    int x;
    int tmp = 0;
    int res = 0;
    scanf("%d", &x);
    while (x != 0)
    {
        tmp = x % 10;
        x /= 10;
        res = (res + tmp) * 10;
    }
    res /= 10;
    printf("%d ", res);
    return 0;
}