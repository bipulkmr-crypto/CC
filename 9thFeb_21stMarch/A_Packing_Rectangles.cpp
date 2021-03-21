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
  ll w,h,n;
bool good(ll x)
{
    return((x/w)*(x/h)>=n);
}
int main()
{
  
    cin>>w>>h>>n;
    ll x;
    ll low=0,high=1,mid;
    while(!good(high))
    high*=2;
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