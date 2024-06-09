#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Word game
int main()
{
    char ch[7];
    char tmp[2] = {0};
    int i = 0;
    int res1 = 0, res2 = 0;
    while (ch[i - 1] != '\n')
    {
        scanf("%c", &ch[i]);

        if (i < 3)
        {
            tmp[0] = ch[i];
            res1 += atoi(tmp);
        }

        if (i >= 3)
        {
            tmp[0] = ch[i];
            res2 += atoi(tmp);
        }

        i++;
    }
    ch[i] = '\0';
    
    printf("%s", (res1 == res2 ? "yes": "no"));
    return 0;
}