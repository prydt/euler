#include <stdio.h>

// simple memotized fibonnaci
long long fib(int n)
{
    static long long cache[10000];
    cache[0] = 1;
    cache[1] = 2;

    if(cache[n] != 0)
        return cache[n];

    cache[n] = fib(n - 1) + fib(n - 2);
    return cache[n];
}

int main()
{
    long long sum = 0;
    long long current;
    int n = 0; // index

    while((current = fib(n)) < 4000000)
    {
        if(current % 2 == 0)
            sum += current;
        n++;
    }

    printf("%lld\n", sum);
}
