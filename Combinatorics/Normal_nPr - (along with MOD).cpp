/// very normal nPr() along with MOD
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
ll nPr(int n, int r, ll mod = 0)
{
    ll result = 1;
    for(int i = n-r+1; i <= n; i++) {result *= i; if(mod) result %= mod;}
    return result;
}

int main()
{
    cout << nPr(5,2) << nl;
    cout << nPr(5,2,100) << nl;
}
