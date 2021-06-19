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
#define rep(i, a, n) for (i = a; i < n; i++)
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
#define int ll
vector<pii> adj[100005];
bool visited[100005];
int n;
dist[100005];
void dijkstra(int source)
{
    int i;
    rep(i, 2, n + 1) dis[i] = 1e16;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push(make_pair(0, 1));
    while (!q.empty())
    {
        int u = q.top().ss;
        q.pop();
        if (vis[u])
            continue;
        vis[u] = 1;
        for (auto [v, w] : adj[u])
        {
            if (dis[v] > dis[u] + w)
            {
                dis[v] = dis[u] + w;
                q.push(make_pair(dis[v], v));
            }
        }
    }
}
void still_single()
{

    cin >> n;
    map<string, int> m;
    int j;
    int i;
    fu(i, 1, n)
    {
        string s;
        cin >> s;
        m[s] = i;
        cin >> j;

        while (j--)
        {
            int a, b;
            cin >> a >> b;
            adj[i].pb({a, b});
        }
    }
    int q;
    while(q--)
    {
        memset(visited,false,sizeof(visited));
        string s1,s2;
        dijkstra(m[s1]);
        cout<<dist[m[s2]]<<endl;
    }
}
/*Don't just sit and hope that God will solve this
fucking do some	thing, try to observe or solve it a different way.
Use that pen and paper.
If nothing works take a deep breath and start again*/
signed main()
{
    fast int t;
    cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}