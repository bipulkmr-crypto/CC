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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll i;
        ll arr[n];
        rep(i,n) cin>>arr[i];
        ll q;
        cin>>q;
        ll qi[q];
        rep(i,q)    cin>>qi[i];
        ll maxi=0,curr=0,k=0;
        ll j;
        rep(i,1<<n)
        {
            rep(j,n)
            {
                if(i&(1<<j))
                curr^=arr[i];
            }
            if(maxi<curr)
            maxi=curr;
        }

    }
}