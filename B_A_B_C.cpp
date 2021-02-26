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
ll powfastmod(ll a,ll b)
{
    if(b==0)
    return 1;
    if(b==1)
    return a;
    ll res=powfastmod(a,b/2);
    if(b%2)
    {
        res=(res%4)*(res%4)*(a%4);
    }
    else
    {
        res=(res%4)*(res%4);
    }
    return (res%4);
}
ll periodicity(ll a)
{
    ll x
}
int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll x=powfastmod(b,(c%4));
    x%=10;
    ll ans=powfastmod(a,x);
    ans%=10;
    cout<<ans<<endl;
}