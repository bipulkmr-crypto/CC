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
    ll i;
    fu(i,1,n)
    {
        cout<<"? "<<i<<endl;
        cout.flush();
        cin>>arr[i-1];
    }
    ll low=0,mid,high=n-1;
    ll ans=0;
    while(high>low+1)
    {
        mid=low+(high-low)/2;
        if(arr[mid]<arr[mid+1])
        high=mid;
        else
        low=mid+1;
    }
    cout<<"! "<<(low+1)<<endl;
    cout.flush();

}