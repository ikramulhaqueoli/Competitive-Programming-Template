/// implementation of bitwise sieve_of_eratosthenes
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

int phi(ll n)
{
    ll result = n;
    if(n% 2 == 0)
    {
        while(n % 2 == 0)
        {
            n >>= 1;
        }
        result -= (result >> 1);
    }

    for(int i = 2; i*i <= n; i++)
    {
        if(n % i != 0) continue;
        while(n % i == 0)
        {
            n /= i;
        }
        result -= (result / i);
    }
    if(n > 1) result -= result / n;
    return result;
}


int main()
{
    cout << phi(12) << nl;
}
