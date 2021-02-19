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
    ll a[m][n];
    ll i,j;
    rep(i,m)
    {
        rep(j,n)
        {
            cin>>b[i][j];
        }
    }
    bool visited[m][n]={false};
    rep(i,m)
    {
        rep(j,n)
        {
            bool flag = true;
            if(b[i][j])
            {
                ll c=0;
                ll k;
                rep(k,n)
                {
                    if(b[i][k]) c++;
                }
                rep(k,m)
                if(b[j][k]) c++;
                if(c<=1)
                {
                    cout<<"NO";
                    return 0;
                }
                if(!visited[i][j])
                {
                    a[i][j]=1;
                    visited[i][j]=true;
                }
               
            }
            else
            {   
                ll k;
                rep(k,n)
                {
                    if(!visited[i][k]) a[i][k]=0;
                }  
            }
        }

    }
   

}