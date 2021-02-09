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
        ll n;
        cin>>n;
        ll nob=(ll)(log2(n))+1;
        ll maxi,r;
        if(n%4==0)
        {
            maxi=((1<<nob)-1);
            r=(maxi^n);
        }
        else if(n%4==1)
        {
            maxi=n;
            r=n;
        }
        else if(n%4==2)
        {
            maxi=(1<<nob)-1;
            r=maxi^(n+1)+1;
            if(r==1)
            r=max(1ll,n-2);
        }
        else
        {
            maxi=n;
            r=n;
        }
        cout<<maxi<<" "<<r;
    }
    // ll i,n=6;ll ans=0;
    // for(i=1;i<=n;i++)
    // {
    //     ans=ans^i;
    // }
    // printf("\n");
    // cout<<ans<<endl;
}