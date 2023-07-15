#include <stdio.h>

int main(void)
{
    // Given natural numbers M and N. Output the low digit of the integer part and the high digit of the fractional part of the number
    int N, M, res1, res2;
    scanf("%d%d", &M, &N);
    res1 =  M / N % 10;
    res2 = M * 10 / N % 10;
    printf("%d %d", res1, res2);
    return 0;
}