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
typedef long long int ll
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
#define pp printf("")
#define pn printf()
#define MAX 200006
#define LN 10
int main()
{
    ll t,i=0;
    cin>>t;
    rep(i,t)
    {
        ll n,j,s=0;
        ll arr[n+2][n+2];
        fu(i,1,n)
        {
            fu(j,1,n)
            {
                cin>>arr[i][j];
            }
        }
        ll left,right,up,down;
        rep(i,n)
        {
            left=right=up=down=0;
            rep(j,n)
            {
                left=arr[i][j-1];
                right=arr[i][j+1];
                up=arr[i+1][j];
                down=arr[i-1][j];
            }
            s+=
        }
    }
}