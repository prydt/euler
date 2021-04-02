/*
 * 1. jalapeno
 * 2. bbq
 * 3. salt and vinegar
 *
 */

#include <stdio.h>
typedef long long ll;

ll l_abs(ll a)
{
    return (a < 0) ? -a : a;
}

ll gcd(ll a, ll b)
{
    while(b != 0)
    {
        ll t = b;
        b = a % b;
        a = t;
    }
    return a;
}

ll lcm(ll a, ll b)
{
    return l_abs(a * b) / gcd(a, b);
}

int main()
{
    long long acc = 1;
    for(ll i = 2; i <= 20; i++)
    {
        acc = lcm(acc, i);
        // printf("%d\n", acc);
    }
    printf("%d\n", acc);
}
