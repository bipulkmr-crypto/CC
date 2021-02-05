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
    ll min,max;
    ll i;
    ll sum=0;
    rep(i,n)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    max=min=arr[0];
    rep(i,n)
    {
        if(max<arr[i])
        max=arr[i];
        if(min>arr[i])
        min=arr[i];
    }
    cout<<(sum-max)<<" "<<(sum-min);
}