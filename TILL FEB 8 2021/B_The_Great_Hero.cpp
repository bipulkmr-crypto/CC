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
void solve()
{
     ll a,b,n;
        cin>>a>>b>>n;
        ll attack[n];
        ll health[n];
        ll i;
        bool flag=true;
        rep(i,n) cin>>attack[i];
        rep(i,n) cin>>health[i];
        ll damage=0;
        rep(i,n)
        damage+=(ll)(health[i]+/a*attack[i];
        rep(i,n)
        {
            if((b-(damage-attack[i]))>0)
            {
                puts("YES");
                return;
            }
        }
        puts("NO");
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       solve();
    }
}