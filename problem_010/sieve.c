#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef long long ll;

void sieve(ll *a, ll n)
{
    ll max = (ll)sqrt((long double)n);
    for (ll i = 2; i < max; i++)
    {
        if (a[i]>0)
            for (ll j = i*i; j < n; j += i)
                a[j] = 0;
    }
}

int main()
{
    const ll SIZE = 2000000+2;
    ll *list = (ll*)malloc(sizeof(ll)*SIZE);

    // set all to be true
    for (ll i = 0; i < SIZE; i++)
        list[i]=1;

    sieve(list, SIZE);

    ll i, sum = 0;
    for (i = 2; i < SIZE; i++)
    {
        if (list[i])
            sum += i;
    }
    printf("%lld\n", sum);
    free(list);
}
