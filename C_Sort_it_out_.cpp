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
bool comp(pair<ll,ll> x,pair<ll,ll> y)
{
    return(x.first<y.first);
}
int main()
{
    ll n;
    ll i;
    cin>>n;
    vector<pair<ll,ll>> arr(n);
    rep(i,n)
    {
        ll inp;
        cin>>inp;
        arr[i].first=inp;
        arr[i].second=i;
    }
    sort(arr.begin(),arr.end(),comp);
    rep(i,n)
    {
        cout<<arr[i].second<<" ";
    }
   
}