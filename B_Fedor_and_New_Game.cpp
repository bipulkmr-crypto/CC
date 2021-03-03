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
    ll n,m,k;
    cin>>n>>m>>k;
    ll arr[m];
    ll i;
    rep(i,m)
    cin>>arr[i];
    ll fedor;
    cin>>fedor;
    ll j;
    ll x[m];
    rep(i,m)
    {
        x[i]=arr[i]^fedor;
    }
    ll count=0;
    rep(i,m)
    {
        if(__builtin_popcount(x[i])<=k)
        {
            count++;
        }
    }
    cout<<count<<endl;
}