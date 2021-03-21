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
    ll a[n][n];
    ll b[n][n];
    ll csuma[n][1]={0};
    ll rsumb[n][1]={0};
    ll i,j;
    rep(i,n)
    {
        rep(j,n)
        cin>>a[i][j];
    }
    rep(i,n)
    {
        rep(j,n)
        {
            cin>>b[i][j];
        }
    }
    rep(i,n)
    {
        rep(j,n)
        {
            csuma[i][0]+=a[j][i];
        }
    }
    rep(i,n)
    {
        rep(j,n)
        {
            rsumb[i][0]+=b[i][j];
        }
    }
    ll sum=0;
    rep(i,n)
    {
        ans+=(csuma[i][0]*rsumb[i][0]);
    }
    // cout<<sum<<endl;
    ll q;
    cin>>q;
    while(q--)
    {
           
        char ch;
        ll r,c,k;
        cin>>ch>>r>>c>>k;
        if(ch=='A')
        {

            // ll temp=(csuma[c][0]-a[r][c]+k)*rsumb[r][0];
            // ll ans=sum-(csuma[c][0]*rsumb[c][0])+temp;
            // csuma[c][0]=csuma[c][0]-a[r][c]+k;
            // a[r][c]=k;
         
            ans+=(k-a[r][c])*rsumb[c][0];
            csuma[c][0]-=a[r][c];
            csuma[c][0]+=k;
            a[r][c]=k;
            cout<<ans<<endl;
        }
        else
        {

            ans+=(k-b[r][c])*csuma[r][0];
            rsumb[r][0]-=b[r][c];
            rsumb[r][0]+=k;

            b[r][c]=k;
            cout<<ans<<endl;
            // ll temp=(rsumb[r][0]-b[r][c]+k)*csuma[c][0];
            // ll ans=sum-(rsumb[r][0]*csuma[c][0])+temp;
            // rsumb[r][0]=rsumb[r][0]-b[r][c]+k;
            // b[r][c]=k;
            // cout<<ans<<endl;
        }
    }
}