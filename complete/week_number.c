#include <stdio.h>

// week number by day
int main(void)
{
    int x, res = 0;
    scanf("%d", &x);
    res = x / 7;
    res += (x % 7 != 0)? 1:0;
    printf("%d", res);
}
