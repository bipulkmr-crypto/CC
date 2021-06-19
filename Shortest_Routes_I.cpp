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
#define INF 1e8
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
void still_single()
{
    int n, m;
    cin >> n >> m;
    vector<vector<pii>> arr;
    int i;
    vector<bool> visited;
    vector<int> dist;
    arr.resize(n + 1);
    visited.resize(n + 1);
    dist.assign(n + 1, INF);
    // int i;
    rep(i, m)
    {
        int a, b, wt;
        cin >> a >> b >> wt;
        // a--;
        arr[a].pb({b, wt});
    }
    dist[0] = 0;
    dist[1]=0;
        // p.assign(n,-1);
        // dist[1] = 0;
        fu(i, 2, n) dist[i] = INF;
    priority_queue<pii, vii, greater<pii>> q;
    q.push({0, 1});
    while (!q.empty())
    {
        int u = q.top().ss;
        q.pop();
        if (visited[u])
            continue;
        visited[u] = 1;
        for (auto [v, w] : arr[u])
        {
            if (dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                q.push({dist[v], v});
            }
        }
    }
    for(i=1;i<=n;i++)cout<<dist[i]<<' ';
}

// void dijkstra(int s, vector<int> &d, vector<int> &p)
// {
//     int n = adj.size();
//     d.assign(n, INF);
//     p.assign(n, -1);
//     vector<bool> u(n, false);

//     d[s] = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int v = -1;
//         for (int j = 0; j < n; j++)
//         {
//             if (!u[j] && (v == -1 || d[j] < d[v]))
//                 v = j;
//         }

//         if (d[v] == INF)
//             break;

//         u[v] = true;
//         for (auto edge : adj[v])
//         {
//             int to = edge.first;
//             int len = edge.second;

//             if (d[v] + len < d[to])
//             {
//                 d[to] = d[v] + len;
//                 p[to] = v;
//             }
//         }
//     }
// }
/*Don't just sit and hope that God will solve this
fucking do some	thing, try to observe or solve it a different way.
Use that pen and paper.
If nothing works take a deep breath and start again*/
int main()
{
    fast int t = 1;
    // cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}