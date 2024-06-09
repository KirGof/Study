#include <stdio.h>

// the sum of the elements above the main and below the secondary diagonal
int main()
{
    int n;
    scanf("%d", &n);
    int data[n][n];
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &data[i][j]);
            if (j > i)
            {
                x += data[i][j];
            }
            if (i > (n - j - 1) && j > (n - i - 1))
            {
                y += data[i][j];
            }
        }
    }
    (x < y)? printf("%d %d", x, y) : printf("%d %d", y, x);
}
