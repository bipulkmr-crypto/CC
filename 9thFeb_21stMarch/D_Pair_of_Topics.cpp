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
vector<pair<ll,ll> > v;
bool comp(pair<ll,ll> p1,pair<ll,ll> p2)
{
    double r1=(double)(p1.ff)/(p1.ss);
    double r2=(double)(p2.ff)/p2.ss;
    return((r1-r2)>0);
}
bool _comp(pair<ll,ll> p1,pair<ll,ll> p2)
{
    
}
int main()
{
    ll n;
    cin>>n;
    v.resize(n);
    ll i;
    rep(i,n)
    {
        ll a,b;
        cin>>a>>b;
        v[i]=make_pair(a,b);
    }
    sort(v.begin(),v.end(),comp);
    ll ans=0;
    vector<pair<ll,ll> > ::iterator it;
    it=v.begin();
    for(;it!=v.end();it++)
    {
        __lower_bound(it,v.end(),v[i],_comp);
    }
    
}