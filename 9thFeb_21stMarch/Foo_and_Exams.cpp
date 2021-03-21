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
typedef unsigned long long int ll;
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

bool good(ll x, ll a, ll b, ll c, ll d,ll k)
{
    ll val1 = a * (x * x * x) + b * x * x + c * x + d;
    ll val2 = a * ((x + 1) * (x + 1) * (x + 1)) + b * (x + 1) * (x + 1) + c * (x + 1) + d;
    if (val1 <= k)
        return true;
    else
        return false;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        ll low = 1, high = k/2, mid;
        while (high - low > 1)
        {
            mid = low + (high - low) / 2;
            if (good(mid, a, b, c, d,k))
            {
                low = mid;
            }
            else
            {
                high = mid;
            }
        }
        if (good(high,a, b, c, d,k))
            cout << high << endl;
        else
        {
            cout << low << endl;
        }
    }
}