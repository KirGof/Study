#include <stdio.h>

// main and secondary diagonal of the matrix
int main()
{
    int n;
    scanf("%d", &n);
    int data[n][n];
    int x = 1, y = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &data[i][j]);
            if (i == j)
            {
                x *= data[i][j];
            }
            if (i == (n - j - 1) && j == (n - i - 1))
            {
                y *= data[i][j];
            }
        }
    }
    (x > y)? printf("%d %d", x, y) : printf("%d %d", y, x);
}
