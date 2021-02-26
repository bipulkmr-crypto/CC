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
bool comp(pair<string,ll> p1,pair<string,ll> p2)
{
    if(p1.ff!=p2.ff)
    {
        return (p1.ff<p2.ff);
    }
    else
    {
        return(p1.ss>p2.ss);
    }
}
int main()
{
    ll n,m;
    ll i;
    cin>>n>>m;
    vector<pair<string,ll> > v;
    rep(i,n)
    {
        string inp;
        cin>>inp;
        v.pb(make_pair(inp,i+1));
    }
    sort(v.begin(),v.end(),comp);
    cout<<(v[n-1].ss);
}