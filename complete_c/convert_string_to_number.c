#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

// convert string to number
int main()
{
    char ch[20], buff[2];
    int res = 0;
    int i = 0;
    int len = 0;
    int x = 0;
    while (ch[i - 1] != '\n')
    {
        scanf("%c", &ch[i]);
        i++;
    }
    ch[i - 1] = '\0';
    len = strlen(ch);
    for (int i = 0; i < len; i++)
    {
        buff[0] = ch[len - i - 1];
        x = atoi(buff);
        if (x == 1)
        {
            res += pow(2, i);
        }
    }

    printf("%d", res);
}