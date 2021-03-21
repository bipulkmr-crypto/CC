#include <iostream>
#include <map>
#include <cstdio>
#include<set>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <numeric>

using namespace std;
typedef long long int ll;
#define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define all(v) v.begin(),v.end()
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
int main()
{
    ll n;
    cin>>n;
    vector<ll> arr;
    ll i;
    ll maxi=-21,sum=0;
    rep(i,n)
    {
        ll inp;
        cin>>inp;
        maxi=max(maxi,inp);
        sum+=inp;
        arr.push_back(inp);
    }
    // ll sum=accumulate(all(arr),0);
    // ll maxi=*max(all(arr));
    // sum-=maxi;
    if(2*maxi<=sum&&sum%2==0)
    cout<<"YES";
    else
    cout<<"NO";

}