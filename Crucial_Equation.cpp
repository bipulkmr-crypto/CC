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
ll extgcd(ll a, ll b, ll &x, ll &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll d = extgcd(b,a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return d;
}
int main()
{
    ll t;
    cin >> t;
    ll i=1;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll x, y;
        ll g = extgcd(a, b, x, y);
        if (c % g==0)
            cout<<"Case "<< i<< ": Yes\n";
        else
            cout <<"Case "<<i<< ": No\n";
            i++;
    }
}