#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define pll pair<long long, long long>
#define sii set<int>
#define sll set<long long>
#define vii vector<int>
#define vll vector<long long>
#define vll vector<long long>
#define mii map<int, int>
#define mll map<long long, long long>
#define lob lower_bound
#define upb upper_bound
#define ret return
#define present(s, x) (s.find(x) != s.end())
#define cpresent(s, x) (find(all(s), x) != s.end())
#define ford(container, it) for (auto it = container.begin(); it != container.end(); it++)
#define fors(container, it, a, b) for (auto it = a; it != b; it++)
#define ff first
#define all(v) v.begin(), v.end()
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
struct segtree
{
    ll size;
    vector<ll> sums;
    void init(ll n)
    {
        size = 1;
        while (size <= n)
        {
            size *= 2;
        }
        sums.assign( 2 * size,  0LL);
    }
    void set(ll i, ll v, ll x, ll lx, ll rx)
    {
        if (rx - lx == 1)
        {
            sums[x] = v;
            return;
        }
        ll m = (lx + rx) / 2;
        if (i < m)
        {
            set(i, v,  2 * x + 1, lx, m);
        }
        else
        {
            set(i, v,  2 * x + 2, m, rx);
        }
        sums[x] = sums[2 * x + 1] + sums[2 * x + 2];
    }
    void set(ll i, ll v)
    {
        set(i, v, 0,  0, size);
    }
    ll sum(ll l, ll r, ll x, ll lx, ll rx)
    {
        if (lx >= r || l >= rx)
        {
            return 0;
        }
        if (lx >= l || rx <= r)
            return sums[x];
        ll m = (lx + rx) / 2;
        ll s1 = sum(l, r,  2 * x + 1, lx, m);
        ll s2 = sum(l, r,  2 * x + 2, m, rx);
        return (s1 + s2);
    }
    ll sum(ll l, ll r)
    {
        return sum(l, r,  0ll, 0ll, size);
    }
};
int main()
{
    fast
        ll n,
        m;
    cin >> n >> m;
    segtree st;
    st.init(n);
    for (ll i = 0; i < n; i++)
    {
        ll v;
        cin >> v;
        st.set(i, v);
    }
    while (m--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            ll i, v;
            cin >> i >> v;
            st.set(i, v);
        }
        else
        {
            ll l, r;
            cin >> l >> r;
            cout << st.sum(l, r);
        }
    }
}