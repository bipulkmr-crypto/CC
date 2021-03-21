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
ll g1(ll n)
{
    vector<ll> v;
    while (n > 0)
    {
        v.pb(n % 10);
        n /= 10;
    }
    ll ans = 0;
    ll i;
    sort(v.begin(), v.end());
    reverse(v.begin(),v.end());
    rep(i, v.size())
    {
        ans = ans *10 + v[i];
    }
    return ans;
}
ll g2(ll n)
{
    vector<ll> v;
    while (n > 0)
    {
        v.pb(n % 10);
        n /= 10;
    }
    ll ans = 0;
    ll i;
    sort(v.begin(), v.end());
    rep(i, v.size())
    {
        ans = ans *10 + v[i];
    }
    return ans;
}
int main()
{
    ll n, k;
    cin >> n >> k;
    ll g1y = g1(n);
    ll g2y = g2(n);
    ll f1 = g1y - g2y;
    ll i;
    for (i = 1; i <= k; i++)
    {
        f1 = g1(n) - g2(n);
        n = f1;
    }
    cout << n << endl;
}