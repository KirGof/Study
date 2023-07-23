#include <stdio.h>

//comparing two strings of the same length
int main()
{

    char data1[14];
    int i = 0;
    int res = 0;
    while (data1[i - 1] != '\n')
    {
        scanf("%c", &data1[i]);
        i++;
    }
    data1[i - 1] = '\0';
    i = 0;
    char data2[14];
    while (data2[i - 1] != '\n')
    {
        scanf("%c", &data2[i]);
        i++;
    }
    data2[i - 1] = '\0';
    i = 0;
    while ((data1[i] != '\0') || (data2[i] != '\0'))
    {
        if (data1[i] != data2[i])
        {
            res++;
        }
        i++;
    }
    printf("%d", res);
    // printf("%s\n", data1);
    // printf("%s\n", data2);
}