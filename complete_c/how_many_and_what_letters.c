#include <stdio.h>

// how many and what letters
int main()
{
    int N = 0;
    scanf("%d", &N);
    char data[N];

    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0, k = 0, l = 0, m = 0, n = 0, o = 0, p = 0, q = 0, r = 0, s = 0, t = 0, u = 0, v = 0, w = 0, x = 0, y = 0, z = 0;
    for (int count = 0; count <= N; count++)
    {
        scanf("%c", &data[count]);
        if (data[count] == 32)
        {
            count--;
        }
    }
    for (int count = 0; count <= N; count++)
    {
        if (data[count] == 'A' || data[count] == 'a')
        {
            a++;
        }
        if (data[count] == 'B' || data[count] == 'b')
        {
            b++;
        }
        if (data[count] == 'C' || data[count] == 'c')
        {
            c++;
        }
        if (data[count] == 'D' || data[count] == 'd')
        {
            d++;
        }
        if (data[count] == 'E' || data[count] == 'e')
        {
            e++;
        }
        if (data[count] == 'F' || data[count] == 'f')
        {
            f++;
        }
        if (data[count] == 'G' || data[count] == 'g')
        {
            g++;
        }
        if (data[count] == 'H' || data[count] == 'h')
        {
            h++;
        }
        if (data[count] == 'I' || data[count] == 'i')
        {
            i++;
        }
        if (data[count] == 'J' || data[count] == 'j')
        {
            j++;
        }
        if (data[count] == 'K' || data[count] == 'k')
        {
            k++;
        }
        if (data[count] == 'L' || data[count] == 'l')
        {
            l++;
        }
        if (data[count] == 'M' || data[count] == 'm')
        {
            m++;
        }
        if (data[count] == 'N' || data[count] == 'n')
        {
            n++;
        }
        if (data[count] == 'O' || data[count] == 'o')
        {
            o++;
        }
        if (data[count] == 'P' || data[count] == 'p')
        {
            p++;
        }
        if (data[count] == 'Q' || data[count] == 'q')
        {
            q++;
        }
        if (data[count] == 'R' || data[count] == 'r')
        {
            r++;
        }
        if (data[count] == 'S' || data[count] == 's')
        {
            s++;
        }
        if (data[count] == 'T' || data[count] == 't')
        {
            t++;
        }
        if (data[count] == 'U' || data[count] == 'u')
        {
            u++;
        }
        if (data[count] == 'V' || data[count] == 'v')
        {
            v++;
        }
        if (data[count] == 'W' || data[count] == 'w')
        {
            w++;
        }
        if (data[count] == 'X' || data[count] == 'x')
        {
            x++;
        }
        if (data[count] == 'Y' || data[count] == 'y')
        {
            y++;
        }
        if (data[count] == 'Z' || data[count] == 'z')
        {
            z++;
        }
    }
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z);
}
