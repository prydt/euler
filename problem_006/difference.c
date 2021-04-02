#include <stdio.h>

int main()
{
    int acc = 0;
    for (int i = 1; i <= 100; i++)
    {
        acc += i*i;
    }

    int acc2 = 0;
    for (int i = 1; i <= 100; i++)
    {
        acc2 += i;
    }
    acc2 *= acc2;

    printf("%d\n", acc2 - acc);
}
