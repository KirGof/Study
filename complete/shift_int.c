#include <stdio.h>

// shift int
// The first digit N is the amount of vitamins in the circle. The second number k is the shift value. The third number x is the current position.
int main(void)
{
    int N, k, x, res = 0;
    scanf("%d%d%d", &N, &k, &x);
    res = x + k;
    if (res >= N){
        res %= N;
    }
    printf("%d", res);
}
