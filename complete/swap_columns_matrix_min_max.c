#include <stdio.h>

//swap columns in matrix with max and min sum
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int data[n][m];
    int x = 0;
    int min = 999999, max = -999999;
    int index_min, index_max, index_tmp = 0;
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
            x += data[j][i];
            index_tmp = i;
        }
        if (x > max)
        {
            max = x;
            index_max = index_tmp;
        }
        if (x < min)
        {
            min = x;
            index_min = index_tmp;
        }
        x = 0;
    }

    for (int i = 0; i < n; i++)
    {

        x = data[i][index_max]; 
        data[i][index_max] = data[i][index_min];
        data[i][index_min] = x;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            printf("%d ", data[i][j]);
        }
        printf("\n");
    }
}
