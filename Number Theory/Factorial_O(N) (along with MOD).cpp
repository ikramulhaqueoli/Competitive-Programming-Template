///factorial with complexity O(N)
#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

ll factorial(int n, ll modulo = 0)
{
    if(n == 0) return 1;
    if(modulo) return (n*factorial(n-1))%modulo;
    else return n*factorial(n-1);
}


#define MOD 1000003
int main()
{
    cout << factorial(5) << nl;
    cout << factorial(5, MOD) << nl;
}
