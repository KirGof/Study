#include <stdio.h>

// Write a program that inverts a one-bit number (0 or 1).
int main(void)
{
    int x = 0;
    scanf("%d", &x);
    int res = x == 1 ? 0:1; 
    printf("%d", res);
    return 0;
}