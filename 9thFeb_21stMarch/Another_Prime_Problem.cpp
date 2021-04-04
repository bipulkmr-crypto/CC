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
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
#define gl(n) scanf(%d,&n)
#define pi(n) printf(%d,n)
#define pl(n) printf(%lld,n)
int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    ll i, j;
    ll range = 1e6;
    vector<bool> isprime(range, true);
    isprime[0] = isprime[1] = false;
    for (i = 4; i < range; i += 2)
    {
        isprime[i] = false;
    }
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
    vector<ll> prime;
    ll count = 1;
    rep(i, range)
    {
        if (isprime[i])
            prime.pb(i);
    }
    vector<ll> sexy_mama;
    for(ll x: prime)
    {
        if(x%11==1)
        {
            sexy_mama.pb(x);
        }
    }
    ll t;
    cin>>t;
    while(t--)
    {
        ll inp;
        cin>>inp;
        cout<<(*(lower_bound(sexy_mama.begin(),sexy_mama.end(),inp)))<<"\n";
    }
}