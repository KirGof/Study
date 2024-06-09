#include <stdio.h>
#include <string.h>

int main()
{
    char rs[40] = {0};
    char tmp[40] = {0};
    int i = 0;
    int j = 0;
    while (scanf("%s", rs) == 1)
    {
        
        j = strlen(rs);
        while (i != j)
        {
            tmp[i] = rs[strlen(rs) - i - 1];
            i++;
        }
        tmp[i] = '\0';
        printf("%s ", tmp);
        i = 0;
    }
    

    return 0;
}