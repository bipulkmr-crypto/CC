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
    ll n,m;
    cin>>n>>m;
    ll arr[m+1]={0};
    ll i,c=0;
    rep(i,m)
    cin>>arr[i];
    c+=(arr[0]-1);
    fu(i,0,m-2)
    {
        if(arr[i]>arr[i+1])
        {
            c+=(n-arr[i]+arr[i+1]);
        }
        else
        {
            c+=arr[i+1]-arr[i];
        }
    }
    cout<<c;
}