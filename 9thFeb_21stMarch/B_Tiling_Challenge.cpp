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
    char[n][n];
    ll i,j;
    rep(i,n)
    {
        rep(j,n)
        {
            cin>>arr[i][j];
        }
    }
    ll f;
    rep(i,n)
    {
        rep(j,n)
        {
            if(arr[i][j]=='.')
            {
                ll k;
                if(j>0&&j<n-1)
                {
                    bool flag-true;
                for(k=1;k<=3;k++)
                {
                    if((i+k)>=n)
                    {
                        flag=false;
                        break;
                    }
                    else
                    {
                        if(arr[i+k][j]=='#')
                        {
                            flag=false;
                            break;
                        }
                    }
                }
                if(flag)
                {
                    arr[i+1][j]=arr[i+1][j]='#';    
                }
                
            
            }
        }
    }
}