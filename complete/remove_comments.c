#include <stdio.h>

// remove /* */
int main()
{
    char data[101];
    int i = 0;
    int count = 0;
    int index_op, index_cl;
    while (data[i - 1] != '\n')
    {
        scanf("%c", &data[i]);
        i++;
    }
    data[i - 1] = '\0';
    i = 0;

    while (data[i] != '\0')
    {
        if (data[i] == '/' && data[i + 1] == '*' && data[i - 1] != '*')
        {
            count++;
            index_op = i;
        }
        else if (data[i] == '*' && data[i + 1] == '/' && data[i - 1] != '/')
        {
            if (count == 0)
            {
                count--;
            }
            count++;
            index_cl = i;
        }
        i++;
    }
    int j = 0;
    if (count == 2)
    {
        while (data[j] != '\0')
        {
            data[index_op + j] = data[index_cl + j + 2];
            j++;
        }
    }
    printf("%s", data);
}