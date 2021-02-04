#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
#include<set>
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
    ll as,cs;
    ll inp;
    set<ll> a;
    set<ll> b;
    set<ll> c;
    set<ll>::iterator it;
    cin>>as>>cs;
    ll i;
    rep(i,as)
    {
        cin>>inp;
        a.insert(inp);
    }
    rep(i,cs)
    {
        cin>>inp;
        c.insert(inp);
    }
    set<ll>::iterator j;
    for(it=c.begin();it!=c.end();it++)
    {
        rep(j=a.begin();j!=a.end();j++)
        {
            b.insert(abs(*it-*j);
        }
    }
    it=b.begin();
    for(;it!=b.end();++it)
    {
        cout<<*it<<endl;
    }
}