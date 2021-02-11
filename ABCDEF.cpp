#include <iostream>
#include <map>
#include <cstdio>
#include <vector>
#include <time.h>
#include <utility>
#include <cmath>
#include <set>
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
    rep(i, n) cin >> arr[i];
    ll j, k;
    // map<ll, ll> m1;
    // map<ll, ll> m2;
    vector<ll> v1;
    vector<ll> v2;
    ll a, b, c, d, e, f;
    rep(i, n)
    {
        a = arr[i];
        rep(j, n)
        {
            b = arr[j];
            rep(k, n)
            {
                c = arr[k];
                v1.pb(a * b + c);
            }
        }
    }
    rep(i, n)
    {
        d = arr[i];
        if (d != 0)
        {
            rep(j, n)
            {
                e = arr[j];
                rep(k, n)
                {
                    f = arr[k];
                    v2.pb(d * (e + f));
                }
            }
        }
    }
    sort(v2.begin(), v2.end());
    ll ans = 0;
    pow(2,4);
    for (i = 0; i < v1.size(); i++)
    {
        ans += upper_bound(v2.begin(), v2.end(), v1[i]) - lower_bound(v2.begin(), v2.end(), v1[i]);
    }
    cout << ans << endl;
}
