#include <stdio.h>

//search for words in an array with the same letters at the beginning and end
int main()
{
    char ch[50] = {0};
    char tmp[50] = {0};
    int i = 0;
    int j = 0;
    while (ch[i - 1] != '\n')
    {
        scanf("%c", &ch[i]);
        i++;
    }
    i = 0;
    while (ch[i - 1] != '\n')
    {
        
        j = 0;
        while (ch[j + i] != ' ' && ch[j + i] != '\n')
        {
            tmp[j] = ch[j + i];
            j++;
        }
        if (tmp[0] == tmp[j - 1])
        {
            tmp[j] = '\0';
            printf("%s ", tmp);
        }
        i += j + 1;
        
    }
    return 0;
}
