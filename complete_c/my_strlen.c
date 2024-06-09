#include <stdio.h>
int my_strlen(char *ch);
int main()
{
    char ch[30];
    int x = 0;
    x = my_strlen(ch);
    printf("%d", x);
}

int my_strlen(char *ch)
{
    int count = 0;
    while (ch[count] != '\n')
    {
        scanf("%c", &ch[count]);
        if (ch[count] != '\n' && ch[count] != '\0')
        {
            count++;
        }
    }
    return count;
}