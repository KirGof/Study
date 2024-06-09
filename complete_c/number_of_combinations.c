#include <stdio.h>
int factorial(int k);
//Number of combinations
int main(void)
{
    // напишите программу, использующую функцию factorial
    int N, K, res = 0;
    scanf("%d %d", &N, &K);
    res = (factorial(N)) / (factorial(K) * factorial(N - K));
    printf("%d", res);
    return 0;
}
int factorial(int k)
{
    // напишите здесь тело функции factorial
    return (k < 2) ? 1 : k * factorial(k - 1);
}