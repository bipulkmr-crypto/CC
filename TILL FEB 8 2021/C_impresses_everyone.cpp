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
    ll n;
    cin>>n;
    ll arr[n];
    ll i;
    ll inp;
    rep(i,n)
    {
        cin>>arr[i];
    }
    reverse(arr,arr+n);
    rep(i,n) arr[i+1]+=arr[i];
    ll t;
    cin>>t;
    while(t--)
    {
        ll search;
        cin>>search;
        // ll low=0,mid,high=n-1,ans;
        // while(low<=high)
        // {
        //     mid=low+(high-low)/2;
        //     if(arr[mid]<=search)
        //     {
        //         ans=mid;
        //         low=mid+1;
        //     }
        //     else if(arr[mid]>search)
        //     {
        //         high=mid-1;
        //     }
        // }
        ll ans=lower_bound(arr,arr+n,search)-arr;
        if((n-ans-1)%2)
        cout<<"B\n";
        else
        cout<<"A\n";
    }
}