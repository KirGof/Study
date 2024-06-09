#include <stdio.h>

void array_reverse(int *array, int size);
void array_reverse_ptr(int *array, int *limit);
int main()
{
    int size = 5;
    int limit = 5;
    int array[] = {10, 24, 3, 4, 5};
    array_reverse(array, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    array_reverse_ptr(array, array + limit);
    for (int i = 0; i < limit; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}

void array_reverse(int *array, int size)
{
    int tmp;
    for (int i = 0; i < size / 2; i++)
    {
        tmp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = tmp;
    }
}

void array_reverse_ptr(int *array, int *limit)
{
    int tmp;
    for (int *current = limit - 1; current > array; current--, array++)
    {
        tmp = *array;
        *array = *current;
        *current = tmp;
    }
}