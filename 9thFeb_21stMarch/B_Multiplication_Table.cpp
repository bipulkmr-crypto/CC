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
ll n, k;
bool good(ll x)
{
    ll i;
    ll sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += (x / i);
        if (sum >= k)
            return true;
    }
    return false;
}
int main()
{

    cin >> n >> k;
    ll low = 0, mid, high = n * n;
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
    if (good(low))
        cout << low << endl;
    else
        cout << high << endl;
}