///factorial % mod with complexity O(1)
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1000001;
ll factorial[N + 1];
void factorialify(ll p)
{
    factorial[0] = 1;
    for (int i = 1; i <= N; i++)
    {
        factorial[i] = (factorial[i - 1] * i) % p;
    }
}

#define MOD 1000003
int main()
{
    /// ** begin of initialization stage **
    factorialify(MOD);
    /// ** end of initialization stage **

    cout << factorial[5];
}
