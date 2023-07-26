#include <stdio.h>
#include <stdlib.h>

//parsing a string into numbers
int main()
{
    char ch[20] = {0};
    int i = 0;
    int dot = 0;
    int not_dig = 0;
    int minus = 0;
    int index_float_after = 0;
    int index_float_befor = 0;
    int index_int_befor = 0;
    int index_int_after = 0;
    while (ch[i - 1] != '\n')
    {
        scanf("%c", &ch[i]);
        i++;
    }
    ch[i - 1] = '\0';

    for (int j = 0; j < i - 1; j++)
    {
        if (ch[j] == '.')
        {
            dot++;
            index_float_after = j + 1;
            index_float_befor = j - 1;
        }

        if (!((ch[j] >= 48 && ch[j] <= 57) || ch[j] == '.' || ch[j] == '-'))
        {
            not_dig++;
        }
        if (ch[j] == '-')
        {
            minus++;
            index_int_befor = j - 1;
            index_int_after = j + 1;
        }
    }

    if (dot > 1 || not_dig > 0)
    {
        printf("error");
    }
    else if (dot == 1 && not_dig == 0)
    {
        if (!((ch[index_float_after] >= 48 && ch[index_float_after] <= 57) && (ch[index_float_befor] >= 48 && ch[index_float_befor] <= 57)))
        {
            printf("error");
        }
        else
        {
            printf("float");
        }
    }
    else if (dot == 0 && not_dig == 0)
    {
        if (minus > 0)
        {
            if (minus > 1 || !(ch[index_int_after] >= 48 && ch[index_int_after] <= 57) || (ch[index_int_befor] >= 48 && ch[index_int_befor] <= 57))
            {
                printf("error");
            }
            else
            {
                printf("int");
            }
        }
        else
        {
            printf("int");
        }
    }

    return 0;
}
