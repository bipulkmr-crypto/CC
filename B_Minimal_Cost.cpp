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
    ll t;
    cin >> t;
    while (t--)
    {
        ll i;
        ll n, u, v;
        cin >> n >> u >> v;
        ll arr[n];
        rep(i,n)
        cin>>arr[i];
        ll c1=0,c2=0;
        ll ans=1e13;
        for(i=1;i<n;i++)
        {
            if(abs(arr[i]-arr[i-1])>=2) ans=0;
            if(abs(arr[i]-arr[i-1])==1) ans=min(ans,min(u,v));
            if(abs(arr[i]-arr[i-1])==0) ans=min(ans,v+min(u,v));
        }
        cout<<ans<<endl;
        // // vector<pair<ll,ll> > arr;
        // map<ll, ll> m;
        // ll range=1e6;

        // ll i;
        // rep(i, n)
        // {
        //     ll inp;
        //     cin >> inp;
        //     m[inp]++;
        // }
        // if (m.size() == 1)
        // {
        //     if(n==2)
        //     cout << (u + v) << endl;
        //     else
        //     cout<<(2*u)<<endl;
        // }
        // else if (m.size() == 2)
        // {
        //     cout << (min(u, v)) << endl;
        // }
        // else if(m.size()==range)
        // {
        //     cout<<(v)<<endl;
        // }
        // // else if(m.size()==)
        // else
        //     cout << 0 << endl;
    }
}