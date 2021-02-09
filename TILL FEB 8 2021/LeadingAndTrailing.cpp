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
#define mod 1000
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
ll powfast(ll a,ll b)
{
   a%=mod;
   ll res=1;
   while(b>0)
   {
       if(b&1)
       res=res*a%mod;
       a=a*a%mod;
       b>>=1;
   }
   return res;
}
int main()
{
    ll t;cin >> t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll l,r;
        r=powfast(a,b);
        l= (ll) pow(10, 2 + fmod(b * log10(a), 1));
        printf("%lld...%03lld",l,r);
        printf("\n");
    }
}