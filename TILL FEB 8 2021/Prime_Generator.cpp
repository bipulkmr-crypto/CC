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
// vector<bool> segmentedSieve(ll L, ll R)
// {
//     ll lim = sqrt(R);
//     vector<bool> mark(lim + 1, false);
//     vector<ll> primes;
//     for (ll i = 2; i <= lim; i++)
//     {
//         if (!mark[i])
//         {
//             primes.emplace_back(i);
//             for (ll j = i * i; j <= lim; j += i)
//             {
//                 mark[j] = true;
//             }
//         }
//     }
//     vector<bool> isPrime(R - L + 1, true);
//     for (ll i : primes)
//     {
//         for (ll j = max(i * i, L + i - 1) / (i * i); j <= lim; j += i)
//         {
//             isPrime[j - L] = false;
//         }
//         if (L == 1)
//         {
//             isPrime[0] = false;
//         }
//     }
//     return isPrime;
// }
// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll a, b;
//         ll i;
//         cin >> a >> b;
//         vector<bool> p=segmentedSieve(a,b);
//         for(i=0;i<p.size();i++)
//         {
//             if(if())
//         }
//     }
// }
// vector<bool> segmentedSieve(long long L, long long R)
// {
//     // generate all primes up to sqrt(R)
//     long long lim = sqrt(R);
//     vector<bool> mark(lim + 1, false);
//     vector<long long> primes;
//     for (long long i = 2; i <= lim; ++i)
//     {
//         if (!mark[i])
//         {
//             primes.emplace_back(i);
//             for (long long j = i * i; j <= lim; j += i)
//                 mark[j] = true;
//         }
//     }

//     vector<bool> isPrime(R - L + 1, true);
//     for (long long i : primes)
//         for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
//             isPrime[j - L] = false;
//     if (L == 1)
//         isPrime[0] = false;
//     return isPrime;
// }
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll i=0;
        ll a,b;
        cin>>a>>b;
        ll lim=(ll)sqrt(b);
        vector<bool>  isPrime(b-a+1,true);
        for(i=2;i<=lim;i++)
        {
            for(ll j=max(i*i,(a-i+1)/(i*i));j<=b;j+=i)
            {
                isPrime[j-a]=false;
            }
        }
        if(a==1)
        isPrime[0]=false;
        for(i=0;i<b-a+1;i++)
        {
            if(isPrime[i])
            printf("%lld\n",(a+i));
        }
        printf("\n");
    }
}