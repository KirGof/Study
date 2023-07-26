#include <stdio.h>
#include <string.h>
#include <math.h>
//dividing a number into triads
int main()
{
    int x;
    scanf("%d", &x);
    int y = x;
    int count = 0;
    int res = 0;
    while (y != 0)
    {
        y /= 10;
        count++;
    }
    int triad = count / 3;
    int remain = count % 3;
    if(remain != 0)
    {
        count -= remain;
        remain = 1;
        while (count != 0)
        {
            remain *= 10;
            count--;
        }
        printf("%d ", x / remain);
        x = x % remain;
    }
    triad = triad * 3;
    count = 0;
    while (triad != 0)
    {
        res = x / pow(10, (triad - 1));
        count++;
        if (count == 3)
        {
            y = pow(10, (triad - 1));
            printf("%d ", res);
            count = 0;
            x = x % y;
        }
        triad--;
    }
}