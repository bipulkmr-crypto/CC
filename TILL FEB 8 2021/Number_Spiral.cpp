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
typedef unsigned long long int ll;
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
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        ll ans=0;
        if(x>=y)
        {
            if(x%2==0)
            ans=(x*x)-y+1;
            else
            {
                --x;
                ans=(x*x)+y;
            }
        }
        else
        {
            if(y%2==1)
            {
                ans=y*y-x+1;
            }
            else
            {
                --y;
                ans=y*y+x;
            }
        }
        cout<<ans<<endl;
    }
}