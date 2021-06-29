#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
#define print(x) cout << 'Case #' << j << ': ' << x << endl;
#define mod9 1000000009
#define mod7 1000000007
#define INF 1e18
#define sp(y) fixed << setprecision(y)
#define vi vector<int>
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
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
#define int ll
vector<vector<pair<int, int>>> arr;
// const int INF=1e9;
vector<int> d;
int n;
vector<int> p;
void dijkistra(int source)
{
    int i;
    d.assign(n, INF);
    p.assign(n, -1);
    p[source] = source;
    d[source] = 0;
    vector<bool> u(n, false);
    rep(i, n)
    {
        int v = -1;
        for (int j = 0; j < n; j++)
        {
            if (!u[j] && (v == -1 || d[j] < d[v]))
            {
                v = j;
            }
        }
        if (d[v] == INF)
        {
            break;
        }
        u[v] = true;
        for (auto edges : arr[v])
        {
            int to = edges.ff;
            int len = edges.ss;
            if (d[v] + len < d[to])
            {
                d[to] = d[v] + len;
                p[to] = v;
            }
        }
    }
}
void print_path(int x)
{
    if (p[x] == x)
    {
        cout << x << ' ';
    }
    else
    {
        // prin
        print_path(p[x]);
        cout << x  << ' ';
    }
}
void still_single()
{
    cin >> n;
    arr.resize(n + 1);
    int i, j;
    int m;
    cin >> m;
    rep(i, m)
    {
        int a, b, wt;
        cin >> a >> b >> wt;
        // a--;
        // b--;
        arr[a].pb({b, wt});
        arr[b].pb({a, wt});
    }
    // dijkistra(0);
    d.assign(n + 1, INF);
    p.assign(n + 1, -1);
    p[1] = 1;
    d[1] = 0;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push(make_pair(0, 1));
    vector<bool> vis(n + 1, false);
    while (!q.empty())
    {
        int u = q.top().ss;
        q.pop();
        if (vis[u])
            continue;
        vis[u] = 1;
        for (auto [v, w] : arr[u])
        {
            if (d[v] > d[u] + w)
            {
                d[v] = d[u] + w;
                q.push(make_pair(d[v], v));
                p[v] = u;
            }
        }
    }
    if (p[n] == -1)
    {
        cout << -1 << endl;
        return;
    }
    print_path(n);
}
/*Don't just sit and hope that God will solve this
fucking do some	thing, try to observe or solve it a different way.
Use that pen and paper.
If nothing works take a deep breath and start again*/
signed main()
{
    fast int t = 1;
    // cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}