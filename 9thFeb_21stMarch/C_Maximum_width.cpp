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
    ll n,t;
    cin>>n>>t;
    vector<ll> s,p;
    ll i;
    rep(i,n)
    {
        char ch;
        cin>>ch;
        s.pb(ch-97);
    }
    rep(i,t)
    {
        char ch;
        cin>>ch;
        p.pb(ch-97);
    }
    ll j=0;
    vector<ll> ans;
    sort(p.begin(),p.end());
    sort(s.begin(),s.end());
    vector<ll>::iterator it=lower_bound(s.begin(),s.end(),p[0]);
    ans.pb(upper_bound(s.begin(),s.end(),p[0])-lower_bound(s.begin(),s.end(),p[0]));
    for(i=1;i<n-1;i++)
    {
        
        ll d=max(upper_bound(s.begin(),s.end(),p[i])-s.begin(),upper_bound(s.begin(),s.end(),p[i])-it);
        ans.pb(d);
    }
    ll maxi=1;
    rep(i,ans.size()-1)
    {
        maxi=max(maxi,(abs(ans[i]-ans[i+1])));
    }
    cout<<maxi<<endl;
}