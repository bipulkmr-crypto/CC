#include <iostream>
#include <map>
#include <cstdio>
#include<set>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
int main()
{
    fast
    ll n;
    cin>>n;
    ll arr[n];
    ll sum=0;
    ll i,j;
    // rep(i,n)
    // cin>>arr[i];
    // rep(i,n)
    // {
    //     for(j=i+1;j<n;j++)
    //     {
    //         ll diff=abs(arr[i]-arr[j]);
    //         sum+=diff*diff;
    //     }
    // }
    ll sum1=0;
    ll pos=0;
    rep(i,n)
    {

        cin>>arr[i];
        sum+=arr[i];
        sum1+=arr[i]*arr[i];
    }
    pos=sum*sum-sum1;
    ll ans=(n-1)*(sum1)-pos;
    cout<<ans<<endl;
}