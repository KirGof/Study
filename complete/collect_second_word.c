#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// collect the second word from the letters of the first
int main()
{
    char ch1[51] = {0};
    char ch2[51] = {0};
    fgets(ch1, 51, stdin);
    fgets(ch2, 51, stdin);
    int i = 0;
    int j = 0;
    int count = 0;
    int x1 = strlen(ch1), x2 = strlen(ch2);
    while (i < x1)
    {
        // zaza / zaaa
        while (j < x2)
        {
            if (ch1[i] == ch2[j])
            {
                for (int z = 1; ch2[j + z] != '\0'; z++)
                {
                    ch2[j] = ch2[j + z];
                }
                count++;
                break;
            }
            j++;
        }
        j = 0;
        i++;
    }
    printf("%s", (count >= x2) ? "yes" : "no");
    return 0;
}