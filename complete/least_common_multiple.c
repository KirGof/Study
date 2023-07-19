#include <stdio.h>

// least common multiple
int main(void)
{
    int a, b, tmp1, tmp2;
    scanf("%d %d", &a, &b);
    tmp1 = a;
    tmp2 = b;
    while (tmp1 != tmp2)
    {
        if (tmp1 > tmp2)
        {
            tmp1 = tmp1 - tmp2;
        }
        else
        {
            tmp2 = tmp2 - tmp1;
        }
    }

    printf("%d", a * b / tmp1);
    return 0;
}
