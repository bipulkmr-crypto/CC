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
 ll n,c;
 vector<ll> arr;
 bool good(ll x)
{
    ll i;
    ll count=1;
    ll pos=arr[0];
    for(i=1;i<n;i++)
    {
        if((arr[i]-pos)>=x)
        {
            pos=arr[i];
            count++;
            if(count==c)
            return true;
        }
        
    }
    return false;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       
        cin>>n>>c;
        ll i;
        arr.resize(n);
        rep(i,n)
        cin>>arr[i];
        sort(arr.begin(),arr.end());
        ll ans=-1;
        ll low=1,mid,high=arr[n-1];
        while(high>low)
        {
            mid=low+(high-low)/2;
            if(good(mid))
            {
                low=mid+1;
                ans=max(ans,mid);
            }
            else
            {
                high=mid-1;
            }
        }
        cout<<ans<<endl;
    }
}