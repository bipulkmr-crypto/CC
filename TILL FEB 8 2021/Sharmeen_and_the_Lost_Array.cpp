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
        ll arr[n-1];
        ll a[n]={1};
        ll i,j;
        
        rep(i,n)
        cin>>arr[i];
        for(i=n-2;i>=0;i--)
        {
            if(arr[i]==0)
            {
                a[i]=a[i+1]=1;
            }
            else if(arr[i]==1)
            {
                a[i]=arr[i];
                a[i+1]=2;
            }
            else
            {
                a[i]=2;
                a[i+1]=1;
            }
        }
        rep(i,n)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
}