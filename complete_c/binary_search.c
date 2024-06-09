#include <stdio.h>
int binary_search(int arr[], int n, int arg);

int main(void)
{
    int n, arg, res;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &arg);
    res = binary_search(arr, n, arg);
    printf("%d", res);
    return 0;
}

int binary_search(int arr[], int n, int arg)
{
    int left = 0;
    int right = n;
    int res = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == arg)
        {
            res = mid;
            break;
        }
        else if (arr[mid] < arg)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return res;
}