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
ll lower_bound(ll arr[],ll n,ll search)
{
    ll low=0,mid,high=n-1,ans;
    while(high-low>1)
    {
        mid=low+(high-low)/2;
        if(search<arr[mid])
        {
            high=mid;
        }
        else
        {
            low=mid+1;
        }        
    }
    if(search<arr[low])
    return low;
    if(search<arr[high])
    return high;
    return n;
}
int main()
{
    ll n,q;
    cin>>n>>q;
    ll i;
    ll arr[n];
    rep(i,n)
    cin>>arr[i];
    while(q--)
    {
        ll inp;
        cin>>inp;
        ll ans=(ll)(lower_bound(arr,arr+n,inp)-arr);
        cout<<ans<<endl;
    }
}