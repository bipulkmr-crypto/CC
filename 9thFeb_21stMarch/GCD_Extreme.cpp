#include <iostream>
#include <map>
#include <cstdio>
#include <set>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define all(v) v.begin(), v.end()
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
#define siz 1000001
vector<bool> isprime(siz, true);
vector<ll> primes;
void seive()
{
    ll i, j;
    isprime[0] = isprime[1] = false;
    for (i = 2; i*i < siz; i++)
    {
        if (isprime[i])
        {
            for (j =i*i;j<siz;j+=i)
            {
                isprime[i]=false;
            }
        }
    }
    rep(i,siz)
    {
        if(isprime[i])
        primes.pb(i);
    }
}
int main()
{
    // seive();

    vector<ll> sumofdiv(siz);
    vector<ll> etf(siz);
    vector<ll> ans(siz);
    // memset(ans, 0, siz);
    // memset(sumofdiv, 0,siz);
    // memset(etf, 0,siz);
    etf[0]=0;etf[1]=1;
    ll i;
    for(i=0;i<siz;i++)
    {
        etf[i]=i;
    }
    for(i=2;i<siz;i++)
    {
        if(etf[i]==i)
        {
            for(ll j=i;j<siz;j+=i)
            {
                etf[j]-=(etf[j]/i);
            }
        }
    }
    ll j;
    for(i=1;i<siz;i++)
    {
        for(j=i;j<siz;j+=i)
        {
            sumofdiv[j]+=i*etf[j/i];
        }
    }
    for(i=1;i<siz;i++)
    {
        ans[i]=(ans[i-1]-i+sumofdiv[i]);
    }
    ll inp;
    while(cin>>inp)
    {
        if(inp==0)
        return 0;
        else
        cout<<ans[inp]<<endl;
    }
}
