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
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
       ll n;
       cin>>n;
       ll arr[n];
       ll i;
       rep(i,n)
       cin>>arr[i];
       ll ans=0;
       rep(i,n)
       {
           ans^=arr[i];
       }
       sort(arr,arr+n);
       bool flag=true;
       rep(i,n)
       {
           ll val=arr[i]^ans;
           if(!binary_search(arr,arr+n,val))
           {
               flag=false;
               break;
           }
       }
        if(flag)
        cout<<ans;
        else 
        cout<<-1;
        cout<<endl;
    }
}