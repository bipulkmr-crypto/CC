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
    ll n;
    cin>>n;
    ll arr[n+1];
    ll i;
    fu(i,1,n)
    {
        cin>>arr[i];

    }
    ll j,p=1;
    ll sum=0;
    fu(i,1,((n/2)+1))
    {
        for(j=i;j<(i+(n/2)-1);j++)
        {
            //p=((p%mod)*(j%mod))%mod;
            p*=j;
        }
        sum=(sum%mod+p%mod)%mod;
    }
    cout<<sum<<endl;

}