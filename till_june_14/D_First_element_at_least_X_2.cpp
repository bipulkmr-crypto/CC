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
typedef int item;
// struct item
// {
//     int m, c;
// };
struct segtree
{
    int size;
    item NEUTRAL_ELEMENT = INT_MIN;
    vector<item> mini;
    // vector<ll> count;
    void init(int n)
    {
        size = 1;
        while (size < n)
            size *= 2;
        mini.resize(2 * size);
    }
    item merge(item a, item b)
    {
        return (max(a, b));
    }
    item single(int x)
    {
        return x;
    }
    void build(vector<int> &a, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            if (lx < (int)a.size())
            {
                mini[x] = single(a[lx]);
            }
            return;
        }
        int m = (lx + rx) / 2;
        build(a, 2 * x + 1, lx, m);
        build(a, 2 * x + 2, m, rx);
        mini[x] = merge(mini[2 * x + 1], mini[2 * x + 2]);
    }
    void build(vector<int> &a)
    {
        build(a, 0, 0, size);
    }
    void set(int i, int v, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            mini[x] = single(v);
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
        mini[x] = merge(mini[2 * x + 1], mini[2 * x + 2]);
    }
    void set(int i, int v)
    {
        set(i, v, 0, 0, size);
    }
    item sum(int l, int r, int x, int lx, int rx)
    {
        if (lx >= r || l >= rx)
            return NEUTRAL_ELEMENT;
        if (lx >= l && rx <= r)
            return mini[x];
        int m = (lx + rx) / 2;
        item s1 = sum(l, r, 2 * x + 1, lx, m);
        item s2 = sum(l, r, 2 * x + 2, m, rx);
        return merge(s1, s2);
    }
    item sum(int l, int r)
    {
        return sum(l, r, 0, 0, size);
    }
    int find(int k, int x, int lx, int rx)
    {
        if (rx - lx == 1)
            return lx;
        int m = (lx + rx) / 2;
        int s1 = mini[2 * x + 1];
        if (k < s1)
        {
            return (find(k, 2 * x + 1, lx, m));
        }
        else
        {
            return (find(k - s1, 2 * x + 2, m, rx));
        }
    }
    int find(int k)
    {
        return (find(k, 0, 0, size));
    }
    int first(int v, int l, int x, int lx, int rx)
    {
        if (mini[x] < v)
            return -1;
        if(rx<=l)
        return -1;
        if (rx - lx == 1)
            return lx;
        int m = (lx + rx) / 2;
        int res = first(v, l, 2 * x + 1, lx, m);
        if (res == -1)
            res = first(v, l, 2 * x + 2, m, rx);
        return res;
    }
    int first(int x, int l)
    {
        return (first(x, l, 0, 0, size));
    }
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
        cin >> op;
        if (op == 1)
        {
            int i;
            cin >> i;
            int p;
            cin >> p;
            st.set(i, p);
        }
        else
        {
            int k;
            cin >> k;
            int l;
            cin >> l;
            int ans = st.first(k, l);
            cout << ans << "\n";
        }
    }
    return 0;
}
