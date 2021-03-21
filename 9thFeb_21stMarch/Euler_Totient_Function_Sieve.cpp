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
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define all(x) v.begin(), v.end()
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
ll etf(ll n)
{
    ll count = n;
    ll i = 2;
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
                n /= i;
            count -= count / i;
        }
    }
    if (n > 1)
    {
        count -= count / n;
    }
    return count;
}
int main()
{
    fast
        ll a,
        b;
    cin >> a >> b;
    ll range = b - a + 1;
    vector<ll> v(range);
    ll i, k = 0;
    fu(i, a, b)
    {
        v[k++] = etf(i);
    }
    rep(i, range)
    {
        cout << v[i] << endl;
    }
}