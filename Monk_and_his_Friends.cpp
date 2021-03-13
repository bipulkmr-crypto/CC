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
int main()
{
    fast
    ll t;
    cin >> t;

    while (t--)
    {
        set<ll> s;
        ll n, m;
        ll i;
        cin >> n >> m;
        rep(i, n)
        {
            ll inp;
            cin >> inp;
            s.insert(inp);
        }
        ll j;
        rep(j, m)
        {
            ll inp;
            cin >> inp;
            if (s.find(inp) != s.end())
            {
                cout << "YES\n";
            }
            else
            {
                s.insert(inp);
                cout << "NO\n";
            }
        }
    }
}