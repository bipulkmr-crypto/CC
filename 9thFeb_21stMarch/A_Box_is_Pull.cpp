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
    ll t;
    cin>>t;
    while(t--)
    {
        ll x1,x2,y1,y2; 
        cin>>x1>>y1>>x2>>y2;
        ll ans=0;
            if(x1==x2||(y1==y2))
            ans=abs(x2-x1)+abs((y2-y1));
            else
            ans=abs(x2-x1)+abs((y2-y1))+2;
        
        cout<<ans<<endl;
    }
}