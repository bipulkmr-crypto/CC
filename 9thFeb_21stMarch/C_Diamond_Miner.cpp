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
#define all(v) v.begin(), v.end()
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        vector<ll> miners;
        vector<ll> diamonds;
        ll x, y;
        ll n;
        cin >> n;
        ll i;
        rep(i, 2 * n)
        {
            cin >> x >> y;
            if (x == 0)
            {
                miners.pb(abs(y));
            }
            else
            {
                diamonds.pb(abs(x));
            }
        }
        sort(miners.begin(), miners.end());
        sort(diamonds.begin(), diamonds.end());
        double ans = 0;
        for (i = 0; i < n; i++)
        {
            ans += (double)sqrt((double)(miners[i] * miners[i]) + (double)(diamonds[i] * diamonds[i]));
        }
        printf("%0.15f", ans);
        printf("\n");
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// signed main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int tt;
//     cin >> tt;

// }