#include <stdio.h>
#include <math.h>

// Write a program that calculates how many bytes merchants deceive the consumer when they buy a USB flash drive for K gigabytes.
int main(void)
{
    int K;
    scanf("%d", &K);
    long res =  pow(2, 30) * K - pow(10, 9) * K;
    
    printf("%ld", res);
    return 0;
}