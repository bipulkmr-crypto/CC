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
    ll m,n;
    cin>>m>>n;
    char ch[m][n];
    // char ch[12][12]={'.'};
    ll i,j,ans=0;
    // rep(i,12)
    // rep(j,12)
    // ch[i][j]='.';

    rep(i,m)
    rep(j,n)
    cin>>ch[i][j];
    rep(i,m-1)
    {
        rep(j,n-1)
        {
            ll c=0;
           if(ch[i][j]=='#')c++;
           if(ch[i][j+1]=='#')c++;
           if(ch[i+1][j]=='#')c++;
           if(ch[i+1][j+1]=='#')c++;
           if(c==1||c==3)
           ans++;
        }
    }
    cout<<ans<<endl;
}