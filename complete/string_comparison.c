#include <stdio.h>
#include <string.h>

// string comparison
int main()
{

    char north[6] = "North";
    char south[6] = "South";
    char east[5] = "East";
    char west[5] = "West";
    char track[6];
    // ось OX направлена на восток, ось OY – на север.
    int x = 0;
    int y = 0;
    int count;
    int tmp = 0;
    scanf("%d", &count);
    while (count != 0)
    {
        scanf("%s %d", track, &tmp);
        if (strcmp(track, north) == 0)
        {
            y += tmp;
        }
        else if (strcmp(track, south) == 0)
        {
            y -= tmp;
        }
        else if (strcmp(track, east) == 0)
        {
            x += tmp;
        }
        else if (strcmp(track, west) == 0)
        {
            x -= tmp;
        }

        count--;
    }
    printf("%d %d", x, y);
}