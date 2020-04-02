#include <stdio.h>
void NumAnalyse()
{
    int a, b, c, d, e, f, g, x, y, z;
    for (a = 0; a < 10; a++)
        for (b = 0; b < 10; b++)
            if (b == a)
                continue;
            else
                for (c = 0; c < 10; c++)
                    if (c == a || c == b)
                        continue;
                    else
                        for (d = 0; d < 10; d++)
                            if (d == a || d == b || d == c)
                                continue;
                            else
                                for (e = 0; e < 10; e++)
                                    if (e == a || e == b || e == c || e == d)
                                        continue;
                                    else
                                        for (f = 0; f < 10; f++)
                                            if (f == a || f == b || f == c || f == d || f == e)
                                                continue;
                                            else
                                                for (g = 0; g < 10; g++)
                                                    if (g == a || g == b || g == c || g == d || g == e || g == f)
                                                        continue;
                                                    else
                                                        for (x = 0; x < 10; x++)
                                                            if (x == a || x == b || x == c || x == d || x == e || x == f || x == g)
                                                                continue;
                                                            else
                                                                for (y = 0; y < 10; y++)
                                                                    if (y == a || y == b || y == c || y == d || y == e || y == f || y == g || y == x)
                                                                        continue;
                                                                    else
                                                                    {
                                                                        z = 45 - a - b - c - d - e - f - g - x - y;
                                                                        if (a * 10000 + b * 1000 + c * 100 + d * 10 + e + d * 100 + f * 10 + g + d * 100 + f * 10 + g == x * 10000 + y * 1000 + z * 100 + d * 10 + e)
                                                                            printf("a=%d,b=%d,c=%d,d=%d,e=%d,f=%d,g=%d,x=%d,y=%d,z=%d\n", a, b, c, d, e, f, g, x, y, z);
                                                                    }
}
int main()
{
    NumAnalyse();
    getchar();
    return 0;
}