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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        ll arr[n+1];
        ll i;
        fu(i,1,n)
        {
            cin>>arr[i];
        }
        ll pre[n],suff[n];
        pre[0]=0;
        suff[n+1]=0;
        for(i=1;i<=n;i++)
        pre[i]=__gcd(pre[i-1],arr[i]);
        for(i=n;i>=1;i--)
        suff[i]=__gcd(arr[i],suff[i+1]);
        while(q--)
        {
            ll l,r;
            cin>>l>>r;
            ll ans;
            ans=__gcd(pre[l-1],suff[r+1]);
            cout<<ans<<endl;
        }
    }
}