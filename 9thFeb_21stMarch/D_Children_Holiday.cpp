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
ll m, n;
vector<tuple<ll, ll, ll>> v;
vector<ll> freq;
bool good(ll x)
{
    ll i, sum = 0;
    rep(i, v.size())
    {
        ll ti=get<0>(v[i]);
        ll zi=get<1>(v[i]);
        ll yi=get<2>(v[i]);
        double num=(x*zi*ti-yi+yi*zi*ti);
        double dem=(yi+zi*ti*ti);
        ll val = (ll)(floor(num / dem));
        sum += (ll)(val);
        freq[i] = val;
    }
    return (sum >= n);
}
int main()
{

    cin >> m >> n;
    v.resize(n);
    ll i;
    freq.resize(n);
    rep(i, n)
    {
        ll ti, zi, yi;
        cin >> ti >> zi >> yi;
        get<0>(v[i]) = ti;
        get<1>(v[i]) = zi;
        get<2>(v[i]) = yi;
    }
    ll low = 0, mid, high = 1e2;
    while (high - low > 1)
    {
        mid = low + (high - low) / 2;
        if (good(mid))
        {
            high = mid;
        }
        else
        {
            low = mid;
        }
    }
    cout << (low) << endl;
    rep(i, n)
            cout
        << freq[i] << " ";
}