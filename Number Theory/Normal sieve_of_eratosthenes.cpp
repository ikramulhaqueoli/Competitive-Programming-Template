/// implementation of normal sieve_of_eratosthenes
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define sieve(x) normal_sieve(x)
vector<int> primes;
bool *isPrime = NULL;
int pidx = 0;
void normal_sieve(int n)
{
    n+=5;
    isPrime = new bool[n];
    memset(isPrime, 1, n);
    int sq = sqrt(n);
    isPrime[0] = isPrime[1] = false;
    for(int i = 4; i < n; i+=2) isPrime[i] = false;
    for(int i = 3; i <= sq; i+=2) if(isPrime[i]) for(int j = i*i; j < n; j+=(i<<1)) isPrime[j] = false;

    ///generate a list of primes if n <= 1e6
    if(n > 1001000) return;
    vector<int> tmp_vector(99999);
    primes = tmp_vector;
    primes[pidx++] = 2;
    for(int i = 3; i < n; i+=2) if(isPrime[i]) primes[pidx++] = i;
}

#define MAX 1000100
int main()
{
    sieve(MAX);        ///sieve up to 1e6
    cout << isPrime[101] << nl;
    cout << primes[101] << nl;
}
