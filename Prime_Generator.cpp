#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
#define gl(n) scanf(% d, &n)
#define pi(n) printf(% d, n)
#define pl(n) printf(% lld, n)
void solve(ll l, ll r)
{
    ll lim = sqrt(r);
    vector<bool> mark(lim + 1, false);
    vector<bool> isprime(r - l + 1, true);
    vector<ll> primes;
    ll i, j;
    for(i = 2; i < lim; i++)
    {
        if (!mark[i])
        {
            primes.emplace_back(i);
            for (j = i * i; j <= lim; j += i)
                mark[j] = true;
        }
    }
    for (ll x : primes)
    {
        for (j = max(i * i, ((l - i + 1) /( i * i))); j <= r; j += x)
            isprime[j - l] = false;
    }
    if (l == 1)
        isprime[0] = false;

    for(i = l; i <= r; i++)
    {
        if (isprime[i])
            cout << i << endl;
    }
}
// void segmentedSieveNoPreGen(long long L, long long R) {
//     vector<bool> isPrime(R - L + 1, true);
//     long long lim = sqrt(R);
//     for (long long i = 2; i <= lim; ++i)
//         for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
//             isPrime[j - L] = false;
//     if (L == 1)
//         isPrime[0] = false;
//     for(ll i=L;i<=R;i++)
//     {
//         if(isPrime[i])
//         cout<<i<<endl;
//     }
// }
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
       segmentedSieveNoPreGen(l,r);
    }
}