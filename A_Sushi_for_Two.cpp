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
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
#define gl(n) scanf(% d, &n)
#define pi(n) printf(% d, n)
#define pl(n) printf(% lld, n)
int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll i;
    rep(i, n)
    {
        cin >> arr[i];
    }
    vector<ll> v;
    ll c=0;
    ll sum=0;
    ll curr=arr[0];
    rep(i,n)
    {
       
        if(curr==arr[i])
        {
            sum+=arr[i];
            c++;
        }
        else
        {
            
            ll tem=(sum/curr);
            v.push_back(tem);
            curr=arr[i];
            c=0;
            sum=0;
            i--;
        }
    }
    ll ans=0;
    for(i=0;i<v.size()-1;i+=1)
    {
        ll temp=9999999;
        temp=min(v[i],v[i+1]);
        ans=max(temp,ans);
    }
    // ans+=1;
    ans*=2;
    cout <<ans;
}
