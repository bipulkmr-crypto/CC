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
    ll n,l;
    cin>>n>>l;
    ll i;
    ll arr[n];
    rep(i,n)
    cin>>arr[i];
    ll rez;
    sort(arr,arr+n);
    rez=2*max(arr[0],l-arr[n-1]);
    rep(i,n-1)
    rez=max(rez,arr[i+1]-arr[i]);
    printf("%0.10f\n",(double)rez/2);
}