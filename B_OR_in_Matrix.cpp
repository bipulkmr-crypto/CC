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
    ll b[m][n];
    ll a[m][n]={1};
    ll i,j;
    rep(i,m)
    {
        rep(j,n)
        {
            cin>>b[i][j];
        }
    }
    rep(i,m)
    {
        rep(j,n)
        {
            if(b[i][j]==0)
            {
                ll k;
                rep(k,n)
                {
                    a[k][j]=0;
                }
                rep(k,n)
                {
                    a[i][k]=0;
                }
            }
        }
    }
    ll c[m][n];
    rep(i,m)
    {
        for(j,n)
        {
            if(a)
        }
    }
}