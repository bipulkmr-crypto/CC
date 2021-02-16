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
bool isPallindrome(ll x)
{
    ll rev=0,d;
    ll temp=x;
    while(temp>0)
    {
        d=temp%10;
        rev=rev*10+d;
        temp/=10;
    }
    return (rev==x);
}
int main()
{
    ll i=999,j=999;
    ll max=1;
    ll ans=1;
    for(i=999;i>=1;i--)
    {
        for(j=999;j>=1;j--)
        {
            ans=i*j;
          if(isPallindrome(ans))
            {
                if(max<ans)
                max=ans;
            }
        }
    }
    cout<<max<<endl;
}