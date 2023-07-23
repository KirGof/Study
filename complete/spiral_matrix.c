#include <stdio.h>

//spiral matrix
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int data[n][m];

    int i_0 = 0, i_max = 0, j_0 = 0, j_max = 0;
    int count = 1, i = 0, j = 0;

    while (count <= n * m)
    {
        data[i][j] = count;
        if (i == i_0 && j < m - j_max - 1)
        {
            ++j;
        }
        else if (j == m - j_max - 1 && i < n - i_max - 1)
        {
            ++i;
        }
        else if (i == n - i_max - 1 && j > j_0)
        {
            --j;
        }
        else
        {
            --i;
        }

        if ((i == i_0 + 1) && (j == j_0) && (j_0 != m - j_max - 1))
        {
            ++i_0;
            ++i_max;
            ++j_0;
            ++j_max;
        }
        ++count;
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            printf("%3d", data[i][j]);
        printf("\n");
    }
}
