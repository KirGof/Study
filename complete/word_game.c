#include <stdio.h>
#include <string.h>

//Word game
int main()
{
    char ch1[50];
    char ch2[50];
    scanf("%s", ch1);
    scanf("%s", ch2);

    if (((ch2[0] + 32) == (ch1[strlen(ch1) - 1])) || ((ch1[0] + 32) == (ch2[strlen(ch2) - 1])))
    {
        printf("yes");
    }
    else {
        printf("no");
    }
    return 0;
}