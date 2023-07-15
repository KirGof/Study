#include <stdio.h>

int main(void)
{
    // how many minutes and hours have passed since the beginning of the day
    int s, m, h;
    scanf("%d", &s);
    m = s / 60 % 60;
    h = s / 60 / 60;
    printf("%d %d", h, m);
    return 0;
}