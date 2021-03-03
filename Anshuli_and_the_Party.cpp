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
// ll binpowmod(ll a, ll b)
// {
//     if (b == 0)
//         return a % mod;
//     // ll res = binpowmod(a, b / 2);
//     // if (b & 1)
//     // {
//     //     res = (res % mod * res % mod * a) % mod;
//     // }
//     // else
//     // {
//     //     res = (res % mod * res % mod) % mod;
//     // }
//     // return res;
// }
long long binpowmod(long long a, long long b)
{
    a %= mod;
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        ll a = 0, b = 0;
        ll i;
        rep(i, s1.length())
        {
            a = (a * 10 + s1[i] - '0') % mod;
        }
        rep(i, s2.length())
        {
            b = (b * 10 + s2[i] - '0') % (mod - 1);
        }
        ll ans = binpowmod(a, b);
        cout << ans << endl;
    }
}