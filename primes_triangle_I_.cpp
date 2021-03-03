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
int main()
{
    ll t;
    cin >> t;
    ll i, j;
    ll range = 1e8;
    isprime[0] = isprime[1] = false;
    for (i = 4; i < range; i += 2)
    {
        isprime[i] = false;
    }
    cin >> t;
    for (i = 3; i * i < range; i += 2)
    {
        if (isprime[i])
        {
            for (j = i * i; j < range; j += i)
            {
                isprime[j] = false;
            }
        }
    }
    vector<pair<ll, ll>> primes;
    ll count = 1;
    rep(i, range)
    {
        if (isprime[i])
            prime.pb(make_pair(i, count++));
    }
    while (t--)
    {
        ll search;
        cin>>search;
        vector<pair<ll,ll> >::iterator it=find(prime.begin(),prime.end(),search);
        
        if(it!=prime.end())
        {
            ll diff=(it-prime.begin())
        }
    }
}