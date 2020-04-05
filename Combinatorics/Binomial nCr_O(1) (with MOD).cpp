///binomial nCr % mod with complexity O(1) (Source: geeksforgeeks)
#include <bits/stdc++.h>
#define ll long long
#define nl '\n'

const int N = 1000001;
using namespace std;

ll factorialNumInverse[N + 1];
ll naturalNumInverse[N + 1];
ll factorial[N + 1];
void InverseOfNumber(ll p)
{
    naturalNumInverse[0] = naturalNumInverse[1] = 1;
    for (int i = 2; i <= N; i++)
        naturalNumInverse[i] = naturalNumInverse[p % i] * (p - p / i) % p;
}
void InverseOfFactorial(ll p)
{
    factorialNumInverse[0] = factorialNumInverse[1] = 1;
    for (int i = 2; i <= N; i++)
        factorialNumInverse[i] = (naturalNumInverse[i] * factorialNumInverse[i - 1]) % p;
}
void factorialify(ll p)
{
    factorial[0] = 1;
    for (int i = 1; i <= N; i++) {
        factorial[i] = (factorial[i - 1] * i) % p;
    }
}
ll Binomial(ll N, ll R, ll p)
{
    if(N < R) return 0;
    if(N == R || R == 0) return 1;
    ll ans = ((factorial[N] * factorialNumInverse[R])
              % p * factorialNumInverse[N - R])
             % p;
    return ans;
}

#define MOD 1000003
int main()
{
    /// ** begin of initialization stage **
    InverseOfNumber(MOD);
    InverseOfFactorial(MOD);
    factorialify(MOD);
    /// ** end of initialization stage **

    cout << Binomial(1000, 200, MOD) << nl;
}
