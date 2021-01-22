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
    ll i,j;
    char board[8]][8];
    char black[]={'q', 'r', 'b', 'n', 'p', 'k'};
    char white[]={'Q','R','B','N','P','K'};
    int weight[]={9,5,3,3,1,0};
    rep(i,n)
    {
        rep(j,n)
        {
            cin>>board[i][j];
        }
    }
    ll sum1=0,sum2=0;
    