// // #include <iostream>
// // #include <bits/stdc++.h>
// // using namespace std;
// // typedef long long int ll;
// // #define fast                          \
// //     ios_base::sync_with_stdio(false); \
// //     cin.tie(NULL);
// // #define mod 1000000007
// // #define pb push_back
// // #define mp make_pair
// // #define pii pair<int, int>
// // #define tiii tuple<int, int, int>
// // #define pll pair<long long, long long>
// // #define sii set<int>
// // #define sll set<long long>
// // #define vii vector<int>
// // #define vll vector<long long>
// // #define vll vector<long long>
// // #define mii map<int, int>
// // #define mll map<long long, long long>
// // #define lob lower_bound
// // #define upb upper_bound
// // #define ret return
// // #define present(s, x) (s.find(x) != s.end())
// // #define cpresent(s, x) (find(all(s), x) != s.end())
// // #define ford(container, it) for (auto it = container.begin(); it != container.end(); it++)
// // #define fors(container, it, a, b) for (auto it = a; it != b; it++)
// // #define ff first
// // #define all(v) v.begin(), v.end()
// // #define ss second
// // #define rep(i, n) for (i = 0; i < n; i++)
// // #define fu(i, a, n) for (i = a; i <= n; i++)
// // #define fd(i, n, a) for (i = n; i >= a; i--)
// // #define gi(n) scanf(% d, &n)
// // const ll MAX_N = 100005;
// // const ll LOG = 17;
// // ll arr[MAX_N];
// // ll m[MAX_N][LOG];
// // ll bin_log[MAX_N];
// // ll query(ll l, ll r)
// // {
// //     ll length = r - l + 1;
// //     ll k = bin_log[length];
// //     return min(m[l][k], m[r - (1 << k) + 1][k]);
// // }
// // int main()
// // {
// //     ll n;
// //     ll q;
// //     cin >> n;
// //     cin>>q;
// //     bin_log[1] = 0;
// //     for (ll i = 2; i <=n; i++)
// //     {
// //         bin_log[i] = bin_log[i / 2] + 1;
// //     }
// //     ll i;
// //     rep(i, n) cin >> arr[i];
// //     rep(i, n) m[i][0] = arr[i];
// //     for (ll k = 1; k < LOG; k++)
// //     {
// //         for (i = 0; i + (1 << k) - 1 < n; i++)
// //         {
// //             m[i][k] = min(m[i][k - 1], m[i + (1 << (k - 1))][k - 1]);
// //         }
// //     }
// //     // cin >> q;
// //     while (q--)
// //     {
// //         ll r, l;
// //         cin >> l >> r;
// //         cout << query(l, r) << endl;
// //     }
// // }// #include <iostream>
// // #include <bits/stdc++.h>
// // using namespace std;
// // typedef long long int ll;
// // #define fast                          \
// //     ios_base::sync_with_stdio(false); \
// //     cin.tie(NULL);
// // #define mod 1000000007
// // #define pb push_back
// // #define mp make_pair
// // #define pii pair<int, int>
// // #define tiii tuple<int, int, int>
// // #define pll pair<long long, long long>
// // #define sii set<int>
// // #define sll set<long long>
// // #define vii vector<int>
// // #define vll vector<long long>
// // #define vll vector<long long>
// // #define mii map<int, int>
// // #define mll map<long long, long long>
// // #define lob lower_bound
// // #define upb upper_bound
// // #define ret return
// // #define present(s, x) (s.find(x) != s.end())
// // #define cpresent(s, x) (find(all(s), x) != s.end())
// // #define ford(container, it) for (auto it = container.begin(); it != container.end(); it++)
// // #define fors(container, it, a, b) for (auto it = a; it != b; it++)
// // #define ff first
// // #define all(v) v.begin(), v.end()
// // #define ss second
// // #define rep(i, n) for (i = 0; i < n; i++)
// // #define fu(i, a, n) for (i = a; i <= n; i++)
// // #define fd(i, n, a) for (i = n; i >= a; i--)
// // #define gi(n) scanf(% d, &n)
// // const ll MAX_N = 100005;
// // const ll LOG = 17;
// // ll arr[MAX_N];
// // ll m[MAX_N][LOG];
// // ll bin_log[MAX_N];
// // ll query(ll l, ll r)
// // {
// //     ll length = r - l + 1;
// //     ll k = bin_log[length];
// //     return min(m[l][k], m[r - (1 << k) + 1][k]);
// // }
// // int main()
// // {
// //     ll n;
// //     cin >> n;
// //     bin_log[1] = 0;
// //     for (ll i = 2; i <=n; i++)
// //     {
// // //         bin_log[i] = bin_log[i / 2] + 1;
// // //     }
// // //     ll i;
// // //     rep(i, n) cin >> arr[i];
// // //     rep(i, n) m[i][0] = arr[i];
// // //     for (ll k = 1; k < LOG; k++)
// // //     {
// // //         for (i = 0; i + (1 << k) - 1 < n; i++)
// // //         {
// // //             m[i][k] = min(m[i][k - 1], m[i + (1 << (k - 1))][k - 1]);
// // //         }
// // //     }
// // //     ll q;
// // //     cin >> q;
// // //     while (q--)
// // //     {
// // //         ll r, l;
// // //         cin >> l >> r;
// // //         cout << query(l, r) << endl;
// // //     }
// // // }
// // #include <bits/stdc++.h>
// // using namespace std;
// // typedef long long int ll;
// // const int MAX_N = 200005;
// // const int LOG = 17;
// // ll a[MAX_N];
// // ll m[MAX_N][LOG]; // m[i][j] is minimum among a[i..i+2^j-1]
// // ll bin_log[MAX_N];

// // ll query(ll L, ll R)
// // { // O(1)
// //     ll length = R - L + 1;
// //     ll k = bin_log[length];
// //     return min(m[L][k], m[R - (1 << k) + 1][k]);
// // }

// // signed main()
// // {
// //     // 1) read input
// //     ll n;
// //     cin >> n;
// //     bin_log[1] = 0;
// //     ll q;
// //     cin >> q;
// //     for (ll i = 2; i <= n; i++)
// //     {
// //         bin_log[i] = bin_log[i / 2] + 1;
// //     }
// //     for (ll i = 0; i < n; i++)
// //     {
// //         cin >> a[i];
// //         m[i][0] = a[i];
// //     }
// //     // 2) preprocessing, O(N*log(N))
// //     for (ll k = 1; k < LOG; k++)
// //     {
// //         for (ll i = 0; i + (1 << k) - 1 < n; i++)
// //         {
// //             m[i][k] = min(m[i][k - 1], m[i + (1 << (k - 1))][k - 1]);
// //         }
// //     }
// //     // 3) answer queries
// //     for (ll i = 0; i < q; i++)
// //     {
// //         ll L, R;
// //         cin >> L >> R;
// //         L--;
// //         R--;
// //         cout << query(L, R) << "\n";
// //     }
// // }
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define fast                          \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define pii pair<int, int>
// #define tiii tuple<int, int, int>
// #define pll pair<long long, long long>
// #define sii set<int>
// #define sll set<long long>
// #define vii vector<int>
// #define vll vector<long long>
// #define vll vector<long long>
// #define mii map<int, int>
// #define mll map<long long, long long>
// #define lob lower_bound
// #define upb upper_bound
// #define ret return
// #define present(s, x) (s.find(x) != s.end())
// #define cpresent(s, x) (find(all(s), x) != s.end())
// #define ford(container, it) for (auto it = container.begin(); it != container.end(); it++)
// #define fors(container, it, a, b) for (auto it = a; it != b; it++)
// #define ff first
// #define all(v) v.begin(), v.end()
// #define ss second
// #define rep(i, n) for (i = 0; i < n; i++)
// #define fu(i, a, n) for (i = a; i <= n; i++)
// #define fd(i, n, a) for (i = n; i >= a; i--)
// #define gi(n) scanf(% d, &n)
// const ll size = 2 * (1e5) + 5;
// ll arr[size];
// ll LOG = 17;
// ll m[size][LOG];
// ll bin_LOG[size];
// ll query(ll l, ll r)
// {
//     ll length = r - l + 1;
//     ll k = bin_LOG[length];
//     return (min(m[l][k], m[r - (1 << k) + 1][k]));
// }
// int main()
// {
//     ll n;
//     cin >> n;
//     bin_LOG[1] = 0;
//     ll q;
//     cin >> q;
//     for (ll i = 2; i <= n; i++)
//     {
//         bin_LOG[i] = bin_LOG[i / 2] + 1;
//     }
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         m[i][0] = arr[i];
//     }
//     for (ll k = 1; k < LOG; k++)
//     {
//         for (ll i = 0; i + (i << k) - 1 < n; i++)
//         {
//             m[i][k] = min(m[i][k - 1], m[i + (1 << (k - 1))][k - 1]);
//         }
//     }
//     for (ll i = 0; i <= q; i++)
//     {
//         ll l, r;
//         cin >> l >> r;
//         l--;
//         r--;
//         cout << query(l, r) << endl;
//     }
// }
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
struct segtree
{
    int size;
    vector<ll> mini;
    // vector<ll> count;
    void init(int n)
    {
        size = 1;
        while (size < n)
            size *= 2;
        mini.assign(2 * size, 0LL);
    }
    void build(vector<int> &a, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            if (lx < (int)a.size())
            {
                mini[x] = a[lx];
            }
            return;
        }
        int m = (lx + rx) / 2;
        build(a, 2 * x + 1, lx, m);
        build(a, 2 * x + 2, m, rx);
        mini[x] = min(mini[2 * x + 1], mini[2 * x + 2]);
    }
    void build(vector<int> &a)
    {
        build(a, 0, 0, size);
    }
    void set(int i, int v, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            mini[x] = v;
            return;
        }
        int m = (lx + rx) / 2;
        if (i < m)
        {
            set(i, v, 2 * x + 1, lx, m);
        }
        else
        {
            set(i, v, 2 * x + 2, m, rx);
        }
        mini[x] = min(mini[2 * x + 1], mini[2 * x + 2]);
    }
    void set(int i, int v)
    {
        set(i, v, 0, 0, size);
    }
    long long sum(int l, int r, int x, int lx, int rx)
    {
        if (lx >= r || l >= rx)
            return LLONG_MAX;
        if (lx >= l && rx <= r)
            return mini[x];
        int m = (lx + rx) / 2;
        ll s1 = sum(l, r, 2 * x + 1, lx, m);
        ll s2 = sum(l, r, 2 * x + 2, m, rx);
        return min(s1, s2);
    }
    ll sum(int l, int r)
    {
        return sum(l, r, 0, 0, size);
    }
    // ll count(int l, int r, int x, int lx, int rx)
    // {
    //     if (lx >= r || l >= rx)
    //         return 0;
    //     if (lx >= l && rx <= r)
    //         return
    // }
    // ll count(int l, int r, int x)
    // {
    //     return (sum(l, r, 0, 0, size));
    // }
};
int main()
{
    ios_base::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    segtree st;
    st.init(n);
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    st.build(a);
    while (m--)
    {
        int op;
        // cin >> op;
        op=2;
        if (op == 1)
        {
            int i, v;
            cin >> i >> v;i--;
            st.set(i, v);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            l--;
            
            cout << (st.sum(l, r)) << endl;
        }
    }
    return 0;
}
