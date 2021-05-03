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
// struct segtree
// {
//     int size;
//     vector<pll> mini;
//     // vector<ll> count;
//     void init(int n)
//     {
//         size = 1;
//         while (size < n)
//             size *= 2;
//         mini.assign(2 * size, 0LL);
//     }
//     pair<ll> combine(pll a,pll b)
//     {
//         if(a.ff>b.ff)  return a;
//         if(b.ff>a.ff)return b;
//         return make_pair(a.ff,a.ss+b.ss);
//     }
//     void build(vector<int> &a, int x, int lx, int rx)
//     {
//         if (rx - lx == 1)
//         {
//             if (lx < (int)a.size())
//             {
//                 mini[x] = a[lx];
//             }
//             return;
//         }
//         int m = (lx + rx) / 2;
//         build(a, 2 * x + 1, lx, m);
//         build(a, 2 * x + 2, m, rx);
//         mini[x] = min(mini[2 * x + 1], mini[2 * x + 2]);
//     }
//     void build(vector<int> &a)
//     {
//         build(a, 0, 0, size);
//     }
//     void set(int i, int v, int x, int lx, int rx)
//     {
//         if (rx - lx == 1)
//         {
//             mini[x] = v;
//             return;
//         }
//         int m = (lx + rx) / 2;
//         if (i < m)
//         {
//             set(i, v, 2 * x + 1, lx, m);
//         }
//         else
//         {
//             set(i, v, 2 * x + 2, m, rx);
//         }
//         mini[x] = min(mini[2 * x + 1], mini[2 * x + 2]);
//     }
//     void set(int i, int v)
//     {
//         set(i, v, 0, 0, size);
//     }
//     pll get_min(int l, int r, int x, int lx, int rx)
//     {
//         if (lx >= r || l >= rx)
//             return LLONG_MAX;
//         if (lx >= l && rx <= r)
//             return mini[x];
//         int m = (lx + rx) / 2;
//         ll s1 = sum(l, r, 2 * x + 1, lx, m);
//         ll s2 = sum(l, r, 2 * x + 2, m, rx);
//         return min(s1, s2);
//     }
//     pll get_min(int l, int r)
//     {
//         return get_min(l, r, 0, 0, size);
//     }
//     // ll count(int l, int r, int x, int lx, int rx)
//     // {
//     //     if (lx >= r || l >= rx)
//     //         return 0;
//     //     if (lx >= l && rx <= r)
//     //         return
//     // }
//     // ll count(int l, int r, int x)
//     // {
//     //     return (sum(l, r, 0, 0, size));
//     // }
// };
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     int n, m;
//     cin >> n >> m;
//     segtree st;
//     st.init(n);
//     vector<
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];

//     }
//     st.build(a);
//     while (m--)
//     {
//         int op;
//         cin >> op;
//         if (op == 1)
//         {
//             int i, v;
//             cin >> i >> v;
//             st.set(i, v);
//         }
//         else
//         {
//             int l, r;
//             cin >> l >> r;
//             cout << (st.sum(l, r)) << endl;
//         }
//     }
//     return 0;
// }\
@bipulkmr-crypto
// #include <.A_Segment_Tree_for_the_Sum.cpp_804644488c88d0371d081b395facdd07.prob>
#include <bits/stdc++.h>
using namespace std;
// struct segtree
// {
//     int MAXN = 1;
//     vector<pair<int, int>> t;
//     void init(int n)
//     {
//         MAXN = 1;
//         while (MAXN < n)
//             MAXN *= 2;
//         t.assign(2 * MAXN, 0LL);
//     }
//     pair<int, int> combine(pair<int, int> a, pair<int, int> b)
//     {
//         if (a.first < b.first)
//             return a;
//         if (b.first < a.first)
//             return b;
//         return make_pair(a.first, a.second + b.second);
//     }

//     void build(int a[], int v, int tl, int tr)
//     {
//         if (tl == tr)
//         {
//             t[v] = make_pair(a[tl], 1);
//         }
//         else
//         {
//             int tm = (tl + tr) / 2;
//             build(a, v * 2, tl, tm);
//             build(a, v * 2 + 1, tm + 1, tr);
//             t[v] = combine(t[v * 2], t[v * 2 + 1]);
//         }
//     }
//     void build(vector<int> a)
//     {
//         build(a,0,0)
//     }
//     pair<int, int> get_max(int v, int tl, int tr, int l, int r)
//     {
//         if (l > r)
//             return make_pair(INT_MAX, 0);
//         if (l == tl && r == tr)
//             return t[v];
//         int tm = (tl + tr) / 2;
//         return combine(get_max(v * 2, tl, tm, l, min(r, tm)),
//                        get_max(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r));
//     }

//     void update(int v, int tl, int tr, int pos, int new_val)
//     {
//         if (tl == tr)
//         {
//             t[v] = make_pair(new_val, 1);
//         }
//         else
//         {
//             int tm = (tl + tr) / 2;
//             if (pos <= tm)
//                 update(v * 2, tl, tm, pos, new_val);
//             else
//                 update(v * 2 + 1, tm + 1, tr, pos, new_val);
//             t[v] = combine(t[v * 2], t[v * 2 + 1]);
//         }
//     }
// };
struct segtree
{
    int size;
    vector<pair<int,int>> mini;
    void init(int n)
    {
        size=1;
        while(size<n)
        {
            size*=2;
        }
        mini.assign(2*size,0);
    }
    void build(vector<int>& a,int x,int lx,int rx)
    {
        if(rx-lx==1)
        {
            if(lx<(int)a.size())
            {
                mini[x]=make_pair(a[lx],1);
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    segtree st;
    st.init(n);
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    st.build(a);
    while(m--)
    {
        int op;
        cin>>op;
        if(op == 1)
        {
            int i,v;
            cin>>i>>v;
            st.set(i,v);
        }
        else 
        {

        }
    }
}