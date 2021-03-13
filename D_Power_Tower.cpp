#include <iostream>
#include <map>
#include <cstdio>
#include <set>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define ff first
#define all(v) v.begin(), v.end()
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
ll arr[100001] = {0};
ll phiy(ll m)
{
    ll phi = m;
    ll i;
    for (i = 2; i * i <= m; i++)
    {
        if (m % i == 0)
        {
            phi -= phi / i;
            while (m% i == 0)
            {
                m /= i;
            }
        }
    }
    if (m > 1)
    {
        phi -= phi / m;
    }
    return phi;
}
ll binpowmod(ll a, ll b, ll mod)
{
    ll ans = 1;
    a %= mod;
    while (b > 0)
    {
        if (b % 2 == 1)
        {
            ans = (ans * a) % mod;
        }
        a = a * a % mod;
        b /= 2;
    }
    return ans;
}
ll solve(ll l, ll r, ll mod)
{
    if (l == r || mod == 1)
        return (arr[l] % mod);
    else
    {
        return binpowmod(arr[l], solve(l + 1, r, phiy(mod)),mod);
    }
}
int main()
{
    ll n, m;
    cin >> n >> m;
    ll i;
    rep(i, n)
    {
        cin >> arr[i];
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        l--;
        r--;
        ll x = solve(l, r, m);
        cout << x << endl;
    }
    // ll pow[n]={0};
    // for(i=n-1;i>=1;i--)
    // {
    //     pow[i]=phi+arr[i]%phi;
    // }
    // ll ans[n]={0};
    // ans[n-1]=arr[n-1];
    // for(i=n-2;i>=0;i--)
    // {
    //     ans[i]=binpow(ans[i],pow[i+1]);
    // }
}