#include <stdio.h>
#include <math.h>

void sieve(int *a, int n)
{
    int max = (int)sqrt(n);
    for (int i = 2; i < max; i++)
    {
        if (a[i])
            for (int j = i*i; j < n; j += i)
                a[j] = 0;
    }
}

int main()
{
    const int LIMIT = 10001;
    const int SIZE = 1000000;
    int list[SIZE];

    // set all to be true
    for (int i = 0; i < SIZE; i++)
        list[i]=1;

    sieve(list, SIZE);

    int i, c = 0;
    for (i = 2; i < SIZE; i++)
    {
        if (list[i])
            c++;
        if (c == LIMIT)
            break;
    }
    printf("%d\n", i);
}
