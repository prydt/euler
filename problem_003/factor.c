#include <stdio.h>
#include <math.h>

int main()
{
    long long n = 600851475143ul;

    long long max_factor = (long long)sqrt((long double) n);
    // printf("%lld\n", max_factor);
    long long f = 3, last_f = 0;

    while(n > 1 && f <= max_factor)
    {
        while(n % f == 0)
        {
            n = n / f;
            last_f = f;
        }

        f+=2;
    }
    printf("%d\n", last_f);
}
