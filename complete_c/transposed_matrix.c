#include <stdio.h>

// Transposed matrix
int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    int data[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &data[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            printf("%d", data[j][i]);
            if (j != n - 1)
            {
                printf(" ");
            }
        }
        if (i != m - 1)
        {
            printf("\n");
        }
    }
}
