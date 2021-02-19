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
void solve(vector<ll> &arr,vector<ll> &dep,ll l,ll r,ll curD=0)
{
    if(r<l)
    return ;
    if(l==r)
    {
        dep[l]=curD;
        return;
    }
    ll m=l;
    for(ll i=l+1;i<=r;i++)
    {
        if(arr[i]>arr[m])
        m=i;
    }    
    dep[m]=curD;
    solve(arr,dep,l,m-1,curD+1);
    solve(arr,dep,m+1,r,curD+1);
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> arr(n,0);
        vector<ll> dep(n,0);
        ll i;
        rep(i,n)
        cin>>arr[i];
        solve(arr,dep,0,n-1,0);
        for(ll x:dep)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}