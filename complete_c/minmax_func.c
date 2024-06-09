#include <stdio.h>
int minmax(int arr[], int n, int fl);

// minmax
int main(void)
{
    int n, res, fl;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &fl);
    res = minmax(arr, n, fl);
    printf("%d ", res);
    return 0;
}

int minmax(int arr[], int n, int fl)
{
    int tmp = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (fl == 0 && arr[i] < tmp)
        {
            tmp = arr[i];
        }
        else if (fl == 1 && arr[i] > tmp)
        {
            tmp = arr[i];
        }
        
    }
    return tmp;
}
