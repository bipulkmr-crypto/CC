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
    ll n=1e6;
    ll i,j;

    vector<bool> is_prime(n+1,true);
    is_prime[0]=is_prime[1]=false;
    is_prime[2]=true;
    for(i=4;i<=n;i+=2)
    {
        is_prime[i]=false;
    }
    for(i=3;i*i<=n;i+=2)
    {
        if(is_prime[i])
        {
            for(j=i*i;j<=n;j+=i)
            {
                is_prime[j]=false;
            }
        }
    }
    vector<ll> ans;
    for(i=2;i<=n;i++)
    {
        if(is_prime[i])
        ans.pb(i);
    }
    cout<<ans[10000];
}