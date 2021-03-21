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
ll gcd(ll a,ll b,ll &x,ll &y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    ll x1,y1;
    ll d=gcd(b,a%b,x1,y1);
    x=y1;
    y=x1-(a/b)*y1;
    return d;
    
}
int main()
{
    // ios_base::sync_with_stdio(NULL);
    // cin.tie(NULL);
    // cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        scanf("%lld %lld",&a,&b);
        ll x,y,c;
        c=gcd(a,b,x,y);
       if(c==1)
       {
           ll ans=a*b-a-b+1;
           printf("%lld\n",ans);
       }
       else
       printf("-1\n");
    
    }
}