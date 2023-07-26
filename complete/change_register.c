#include <stdio.h>
void char_register(char *ch, int fl);

int main(void)
{
    char ch = 'y';
    int fl = 1;
    char_register(&ch, fl);
    printf("%c", ch);
    return 0;
}

void char_register(char *ch, int fl)
{
    if ((*ch >= 65 && *ch <= 90) || (*ch >= 97 && *ch <= 122)){
        if (*ch >= 65 && *ch <= 90 && fl == 0)
        {
            *ch = *ch + 32;
        }
        else if (*ch >= 97 && *ch <= 122 && fl == 1)
        {
             *ch = *ch - 32;
        }
        
        
    }

}
