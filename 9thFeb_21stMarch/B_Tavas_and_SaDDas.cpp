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
    ll ans=0;
    ll count=1;
    ll count4=0;
    while(n>0)
    {
        ll d=n%10;
        if(d==4)
        ans+=pow(2,count-1);
        else if(d==7)
        {
            ans+=pow(2,count);
        }
        count++;
        n/=10;
    }
    cout<<ans<<endl;
}