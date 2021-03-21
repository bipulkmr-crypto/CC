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
#define p 1000003
#define pb push_back
#define mp make_pair
#define ff first
#define all(v) v.begin(), v.end()
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
// int factmod(int n, int p)
// {

//     f[0] = 1;
//     for (int i = 1; i < p; i++)
//         f[i] = f[i - 1] * i % p;

//     int res = 1;
//     while (n > 1)
//     {
//         if ((n / p) % 2)
//             res = p - res;
//         res = res * f[n % p] % p;
//         n /= p;
//     }
//     return res;
// }
int main()
{
    ll range = 1e6 + 4;
    ll i;
    vector<ll> f(range);
    f[0] = 1;
    for (i = 1; i < range; i++)
    {
        f[i] = ((f[i - 1] % p) * (i % p));
    }
    ll res = 1;
    // while (range > 1)
    // {
    //     if ((range / p) % 2)
    //     {
    //         res = p - res;
    //     }
    //     res = res * f[range % p] % p;
    //     range /= p;
    // }

    ll t;
    cin >> t;
    while (t--)
    {
        ll x, n;
        cin >> n >> x;
        if (n >= p)
            cout << 0 << endl;
        else
        {
            ll ans = (x * f[n]) % p;
            cout << ans << endl;
        }
    }
}