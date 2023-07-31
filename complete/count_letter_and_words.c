#include <stdio.h>

int string_count(char *str);
int string_words(char *str);
int is_whitespace(char c);
int main()
{
    int res1 = 0, res2 = 0;
    char *ch = {"hello  world"};
    res1 = string_count(ch);
    res2 = string_words(ch);
    printf("%d %d", res1, res2);
}

int is_whitespace(char c)
{
    return c == ' ' || c == '\t' || c == '\n';
}

int string_count(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int string_words(char *str)
{
    int i = 0;
    int res = 0;
    int start = 0;
    while (i < string_count(str))
    {
        if (!is_whitespace(str[i]))
        {
            start = 1;
        }   
        if ((is_whitespace(str[i]) || str[i +1] == '\0') && start == 1)
        {
            res++;
            start = 0;
        }
        
        i++;
    }
    return res;
}