#include <stdio.h>

// mirror filling of the matrix through the diagonal
int main()
{
    int n;
    scanf("%d", &n);
    int data[n][n];
    int x = 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                data[i][j] = x - 1;
            }
            else
            {

                if (j > i)
                {
                    data[i][j] = x;
                    x++;
                    if (x == n + 1 || j == n - 1)
                    {
                        x = 2;
                    }
                }
                if (i > j)
                {
                    data[i][j] = i - j + 1;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", data[i][j]);
        }
        printf("\n");
    }
}
