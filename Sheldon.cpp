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
ll a, b, c, d;
ll extgcd(ll a, ll b, ll &x, ll &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll d = extgcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}
ll countSol(ll x, ll y, ll g)
{
    ll c = 0;
    while (x > 0 && y > 0)
    {
        x += b / g;
        y -= a / g;
    }
    return c;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll count = 0;
        ll k = 0;

        cin >> a >> b >> c >> d;
        vector<pair<ll, ll>> sol(3);
        ll g1 = extgcd(a, b, sol[0].first, sol[0].second);
        ll g2 = extgcd(a, c, sol[1].first, sol[1].second);
        ll g3 = extgcd(b, c, sol[2].first, sol[2].second);
        if (d % g1==0)
        {
            count++;
            // count += countSol(sol[0].first, sol[0].second, g1);
        }
        if (d % g2==0)
        {
            count++;
            // count += countSol(sol[1].first, sol[1].second, g2);
        }
        if (d % g3==0)
        {
            count++;
            // count += countSol(sol[2].first, sol[2].second, g3);
        }
        k++;
        printf("Case %lld : %lld", k, count);
    }
}