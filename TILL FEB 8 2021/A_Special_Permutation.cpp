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
        
        ll n,i;
        cin>>n;
        ll arr[n];
        for(i=1;i<n-1;i++)
        {
            arr[i]=i+1;
        }
        arr[0]=n;
        arr[n-1]=1;
        rep(i,n)
        cout<<arr[i]<<" ";
        cout<<"\n";

        
        
        
        


    }
     
}
