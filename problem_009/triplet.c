#include <stdio.h>

int main()
{
    for (int a = 1; a < 1000; a++)
        for (int b = 1; b < 1000; b++)
            for (int c = 1; c < 1000; c++)
                if ((a*a) + (b*b) == (c*c) && a+b+c == 1000)
                {
                    printf("%d\n", a*b*c);
                    return 0;
                }
}
