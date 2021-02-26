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
    ll n,x,s;
    cin>>s>>x>>n;
    vector<pair<ll,ll> > v;
    ll sum=0;
    ll day=0;
    ll i;
    for(i=0;i<n;i++)
    {
        ll p,q;
        cin>>p>>q;
        v.push_back(make_pair(p,q));
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;i++)
    {
        if((v[i].first-1-day)*x>=s)
        {
            cout<<(day+(s+x-1)/x)<<endl;
            return 0;
        }
        s-=(v[i].first-1-day)*x;
        if(s<=(v[i].second))
        {
            cout<<(v[i].first)<<endl;
            return 0;
        }
        s-=v[i].second;
        day=v[i].first;
    }
    cout<<(day+(s+x-1)/x)<<endl;
}