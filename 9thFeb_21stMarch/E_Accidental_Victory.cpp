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
bool good(ll sum[],ll arr[],ll x)
{
    return(sum[x-1]>=arr[x])
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        ll sum[n];
        ll i;
        rep(i,n)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        sum[0]=arr[0];
        fu(i,1,n-1)
        {
            sum[i]=sum[i-1]+arr[i];
        }
        ll low=0,high=n,mid;
        ll ans=0;
        while(high-low>1)
        {
            mid=low+(high-low)/2;
            if(good(sum,arr,mid))
            {
                ans=mid;
                high=mid;
            }
            else
            {
                low=mid+1;
            }
        }
        if(good(sum,arr,low))
        ans=min(ans,low);
        if(good(sum,arr,high))
        ans=min(ans,high);
        
        for()

    }
}
