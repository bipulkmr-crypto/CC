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
#define mod 10000007
#define pb push_back
#define mp make_pair
#define ff first
#define all(v) v.begin(), v.end()
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
// #define gi(n) scanf(% d, &n)
// ll binpow(ll a, ll b)
// {
//     a %= mod;
//     if (b == 1)
//         return a;
//     ll res = binpow(a, b / 2);
//     if (b & 1)
//         res = (res % mod )* (res % mod )* a;
//     else
//         res = (res % mod) * (res % mod);
//     return res;
// }
long long binpow(long long a, long long b) {
    a %= mod;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
int main()
{
    ll n, k;
    while (cin >> n && cin >> k)
    {
        if (n == 0 && k == 0)
            return 0;
        else
        {
            ll ans = binpow(n, k) + 2 * binpow(n - 1, k);
            ans %= mod;
            ans += 2 * (binpow(n - 1, n - 1));
            ans %= mod;
            ans += binpow(n, n);
            ans %= mod;
            cout << ans << endl;
        }
    }
}