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
int power(ll x,ll y,ll mod)
{
    ll res=1;
    x%=mod;
    while(y>0)
    {
        if(y&1)
        res=(res*x)%mod;
        y=y>>1;
        x=(x*x)%mod;
    }
    return res;
}
ll modInv(ll n,ll mod)
{
    return power(n,mod-2,mod);
}
ll nCr(ll n,ll r,ll mod)
{
    if(n<r)
    return 0;
    if(r==0)
    return 1;
    ll fact[n+1];
    fact[0]=1;
    ll i;
    for(i=1;i<=n;i++)
    {
        fact[i]=(fact[i-1]*i)%mod;

    }
    return (fact[n]*modInv(fact[r],mod)%mod*modInv(fact[n-r],mod)%mod)%mod;
}
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll n,r;
        cin>>n>>r;
        ll mod=1000000007;
        ll ans=nCr(n,r,mod);
        cout<<ans<<endl;
    }
    
}