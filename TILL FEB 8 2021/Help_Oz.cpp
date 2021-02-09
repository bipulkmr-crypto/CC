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
    ll arr[n];
    ll i,j;
    ll min;
    ll diff[n];
    rep(i,n)
    {
        cin>>arr[i];
    }
    rep(i,n)
    {
        if(i!=n-1)
        diff[i]=abs(arr[i]-arr[i+1]);
        else
        diff[n-1]=abs(arr[i]-arr[0]);
    }
    min=diff[0];
    rep(i,n)
    {
        if(diff[i]<min)
        min=diff[i];
    }
    i=2;
    for(i=2;i<=min;i++)
    {
        if(min%i==0)
        cout<<i<<" ";
    }
}