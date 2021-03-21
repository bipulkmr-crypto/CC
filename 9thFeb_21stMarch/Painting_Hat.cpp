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
 ll H,r;
 bool good(double  x)
 {
    double dem,num;
    num=(x*x*x*r*r);
    dem=(3*(sqrt(r*r+x*x))*(2*(H*H*H-x*x*r)));
    ll val=floor(num/dem);
    return(val>=1);
 }
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       
        cin>>H>>r;
        ll i;
        double low=0,mid,high=1e2;
        double ans;
        rep(i,100)
        {
            mid=low+(high-low)/2.0;
            if(good(mid))
            {
                ans=mid;
                low=mid;
            }
            else
            {
                high=mid;
            }
        
        }
        cout<<ans<<endl;
    }
}