#include <stdio.h>
#define IN 1  
#define OUT 0 

// word counter
int main()
{
    char c;
    int nw, state;
    state = OUT;
    nw = 0;
    while (c != '\n')
    {
        scanf("%c", &c);
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("%d\n", nw);
}