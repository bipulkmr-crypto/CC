#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define endl "\n"
#define F first
#define S second
#define mod 1000000007
#define ll long long
#define ull unsigned long long int
#define fr(i, n) for (ll i = 0; i < n; i++)
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define fin(v, n) find(v.begin(), v.end(), n)
#define pb(n) push_back(n);
#define aut std::vector<ll>::iterator
#define vsort(v) sort(v.begin(), v.end())
#define rssort(s) sort(s.begin(), s.end(), greater<char>())
#define si(s) stoi(s)
#define is(n) to_string(n)
#define ve(v, n) v.erase(v.begin() + n)
#define hakuna_mattata                \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ks(n) cout << "Case #" << n + 1 << ": "
#define low(v, n) lower_bound(v.begin(), v.end(), n);
#define upp(v, n) upper_bound(v.begin(), v.end(), n);
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MAXN 1002

using namespace std;
using namespace __gnu_pbds;

ll power(long long x, ll y)
{
    ll res = 1;

    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % mod;

        y = y >> 1;
        x = (x * x) % mod;
    }
    return res % mod;
}

void solve()
{
    ll n;
    cin >> n;
    if (n <= 3)
    {
        cout << 0 << endl;
        return;
    }
    cout << (power(2, n) - 2ll - (2ll * n)%mod) % mod << endl;
}

int main()

{
    hakuna_mattata;

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}