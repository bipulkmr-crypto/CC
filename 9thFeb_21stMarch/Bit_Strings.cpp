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
ll binpow(ll a,ll b)
{
    a%=mod;
    if(b==0)
    return 1;
    ll res=binpow(a,b/2);
    if(b&1)
    res=((res%mod)*(res%mod)*(a%mod))%mod;
    else
    res=((res%mod)*(res%mod))%mod;
    return res;


}
int main()
{
    ll n;
    cin>>n;
    ll ans=binpow(2,n);
    cout<<ans<<endl;

}