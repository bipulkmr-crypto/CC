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
ll n,k;
vector<ll> arr;
bool good(ll x)
{
    ll i,sum=0;
    rep(i,n)
    {
        sum+=((arr[i]-x)>0)?(arr[i]-x):0;
    }
    return(sum>=k);
}
int main()
{
    
    cin>>n>>k;
    arr.resize(n);
    ll i;
    rep(i,n)
    cin>>arr[i];
    sort(arr.begin(),arr.end());
    ll low=1,mid,high=arr[n-1];
    ll ans=-1;
    while(high-low>=0)
    {
        mid=low+(high-low)/2;
        if(good(mid))
        {
            ans=mid;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(good(low))
    cout<<low<<endl;
    else if(good(high))
    cout<<high<<endl;
    else
    cout<<ans<<endl;
}