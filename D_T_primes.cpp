#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
#include<set>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
#define gl(n) scanf(% d, &n)
#define pi(n) printf(% d, n)
#define pl(n) printf(% lld, n)
ll cuberoot(ll n)
{
    if (n == 1 || n == 0)
        return n;
    ll low = 1, high = n, mid;
    ll ans;
    while (high-low>1)
    {
        mid = low + (high - low) / 2;
        ll val = mid * mid * mid;
        if (val >= n)
        {
            ans=mid;
            high=mid;

        }
        else if(val<n)
        {
            low=mid+1;
        }
    }
    if((low*low*low)==n)
    return low;
    if((high*high*high)==n)
    return high;

    return ans;
}
// bool TPrime(ll n)
// {
//     vector<bool> v(1e6+1,true);
//     ll i,j;
//     v[0]=v[1]=false;
//     for(i=2;i<=1e6;i++)
//     {
//         for(j=i*2;j<=1e6;j+=i)
//         v[j]=false;
//     }
//     // bool flag=true;
//     bool flag=v[n];
//     return(flag);
// }
int main()
{
    ll t;
    cin >> t;
    vector<bool> v(1e6+1,true);
    ll i,j;
    v[0]=v[1]=false;
    for(i=2;i<=1e6;i++)
    {
        for(j=i*2;j<=1e6;j+=i)
        v[j]=false;
    }
    set<ll> s;
    for(i=2;i<=1e6;i++)
    {
        if(v[i])
        s.insert(i*i);
    }

    while (t--)
    {
        ll n;
        cin>>n;
        if(s.find(n)!=s.end())
        cout<<"YES\n";
        else 
        cout<<"NO\n";
    }
}