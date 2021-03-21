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
    ll t[n];
    vector<pair<ll, ll>> arr;
    ll i;
    rep(i,n)
    {
        cin>>t[i];
        ll stock,price;
        cin>>price>>stock;
        stock=max(0ll,stock-t[i]);
        arr.pb(make_pair(price,stock));
    }
    // sort(arr.begin(),arr.end());
    ll mini=(ll)(1e13);
    rep(i,n)
    {
        if(arr[i].ss!=0)
        {
            mini=min(arr[i].ff,mini);
        }
    }
    if(mini!=(ll)(1e13))
    cout<<mini<<endl;
    else
    {cout<<-1<<endl;}
}