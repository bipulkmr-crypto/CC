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
vector<ll> arr;
ll reading_time;
bool good(ll x)
{
    ll i,sum=0;
    rep(i,x)
    {
        sum+=arr[i];
    }
    rep(i,(arr.size()-x+1))
    {
        if(sum<=reading_time)
        return true;
        sum=sum-arr[i]+arr[x+i];   
    }
    return false;
}
int main()
{
    ll n;

    cin>>n;
    cin>>reading_time;
    arr.resize(n);
    ll i;rep(i,n) cin>>arr[i];
    ll low=0,high=n,mid;
    if(n==1)
    {
        if(arr[0]<reading_time)
        {
            cout<<1<<endl;
            return 0;
        }
        else
        {
            cout<<0<<endl;
            return 0;
        }
    }
    while(high-low>1)
    {
        mid=low+(high-low)/2;
        if(good(mid))
        {
            low=mid;
        }
        else
        {
            high=mid;
        }   
    }
    if(good(high))
    {
        cout<<high<<endl;
        return 0;
    }
    if(good(low))
    {
        cout<<low<<endl;
        return 0;
    }
    cout<<(low)<<endl;
}