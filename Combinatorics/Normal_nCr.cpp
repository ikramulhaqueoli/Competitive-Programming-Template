/// very normal nCr()
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
ll nCr(int n, int r)
{
    int f1 = r, f2 = n-r;
    if(f2 > f1) swap(f2,f1);
    ll result = 1;
    for(int i = 1; i <= f2; i++)
    {
        result *= (i+f1);
        result /= i;
    }
    return result;
}

int main()
{
    cout << nCr(5,2) << nl;
}
