/// implementation of bitwise sieve_of_eratosthenes
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'

int *isbPrime = NULL;
#define bsieve(x) bitwise_sieve(x)
#define bprime(x) !Chk(x)
#define Set(n) (isbPrime[n>>5]=isbPrime[n>>5] or (1<<(n%32)))
#define Chk(n) (isbPrime[n>>5]&(1<<(n%32)))
void bitwise_sieve(int n)
{
    n+=5;
    int array_size = (n>>5);
    isbPrime = new int[array_size];
    memset(isbPrime, 0, sizeof isbPrime);
    int sq = sqrt(n);
    Set(0); Set(1);
    for(int i = 4; i < 64; i+=2) Set(i);
    for(int i = 2; i < array_size; i++) isbPrime[i] = isbPrime[1];
    for(int i = 3; i <= sq; i+=2) if(!Chk(i)) for(int j = i*i; j < n; j+=(i<<1)) Set(j);
}


#define MAX 100010000
int main()
{
    bsieve(MAX);
    cout << isbPrime[101] << nl;
}
