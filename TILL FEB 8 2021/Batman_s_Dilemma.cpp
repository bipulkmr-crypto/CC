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
    ll t;
    cin>>t;
    while(t--)
    {
        ll m,n;
        cin>>n>>m;
        ll i,j;
        ll ans=0;
        ll p=(m%2==0)? m:n;
        if((m%2==1&&n%2==0)||(n%2==1&&m%2==0)||(m%2==0&&n%2==0))
        {
            
            ans=(1<<(p/2))-1;
            if(ans==0)
            ans+=1;
        }
        else
        {
            ans=(1<<(p/2));
        }
        ans%=mod;
        printf("%lld",ans);
        printf("\n");
    }
}