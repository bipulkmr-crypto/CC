#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long int ll;
#define mod 10
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
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;cin>>a;
        cin>>b;
        ll d=powfast(a,b);
        printf("%lld",d);
        printf("\n");
    }
}
