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
    ll n = 1e7;
    vector<bool> marked(n+1, true);
    ll j;
    vector<ll> ans;
    marked[0] = marked[1] = false;
    ll i;
    for(i=4;i<=n;i+=2)
    {
        marked[i]=false;
    }
    for (i = 3; (i * i) <=(n); i+=2)
    {
        if (marked[i])
        {
            for (j = i * i; j <= n; j += 2*i)
            {
                marked[j] = false;
            }
        }
    }
    ll c=1;
    // for(i=2;i<=n;i++)
    // {
    //     if(marked[i])
    //     ans.pb(i);
    // }
    // for(i=0;i<ans.size(); i+=100)
    // {
    //     cout<<ans[i]<<endl;
    // }
    ans.pb(0);
    for(i=2;i<=n;i++)
    {
        if(marked[i])
        ans.pb(i);
    }
    for(i=1;i<=ans.size();i+=100)
    {
        cout<<ans[i]<<endl;
    }
}
