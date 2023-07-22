#include <stdio.h>

//shift right on n positions
int main()
{
    int n, k;
    scanf("%d", &n);
    int data[n][n];
    int res[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &data[i][j]);
        }
    }
    scanf("%d", &k);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            res[i][(j + k) % n] = data[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}
