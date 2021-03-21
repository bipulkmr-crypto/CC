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
ll n,x,y;
bool good(ll t)
{
    t-=min(x,y);
    ll sum=(ll)(floor((double(t))/x))+(ll)(floor((double(t))/y))+1;
    // ll sum=(ll)floor((double(t-min(x,y))/x))+(ll)floor((double)(t-min(x,y))/y)+1;
    return(sum>=n);
}
int main()
{
    cin>>n>>x>>y;
    ll low=0,high=1e13;
    ll mid;
    while(high-low>1)
    {
        mid=low+(high-low)/2;
        if(good(mid))
        {
            high=mid;
        }
        else
        {
            low=mid;
        }
    }
    cout<<high<<endl;
}
