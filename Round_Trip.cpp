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
// vector<vector<int>> arr;
// vector<int> visited;
// vector<int> path;
// int cycle_start, cycle_end;
// bool dfs(int x)
// {
//     visited[x] = 1;
//     for (auto u : arr[x])
//     {
//         if (!visited[u])
//         {
//             path[u] = x;
//             if (dfs(u))
//             {
//                 return true;
//             }
//         }
//         else if (x!=u&&visited[u] == 1)
//         {
//             // path.pb(u);
//             cycle_end = x;
//             cycle_start = u;
//             return true;
//         }
//     }
//     visited[x] = 2;
//     return false;
// }
int n, m;
vector<vector<int>> adj;
vector<char> color;
vector<int> parent;
int cycle_start, cycle_end;
bool dfs(int v,int papa)
{
    color[v] = 1;
    for (int u : adj[v])
    {
        if(u==papa)continue;
        if (color[u] == 0)
        {
            parent[u] = v;
            if (dfs(u,v))
                return true;
        }
        else if (parent[u] != u && color[u] == 1)
        {
            cycle_end = v;
            cycle_start = u;
            return true;
        }
    }
    color[v] = 2;
    return false;
}

void find_cycle()
{
    color.assign(n+1, 0);
    parent.assign(n+1, -1);
    cycle_start = -1;
    int i;
    for (i = 1; i <= n; i++)
    {
        // parent[i]=i;
        if (color[i] == 0 && dfs(i,parent[i]))
        {
            break;
        }
    }
    if (cycle_start == -1)
    {
        cout << "IMPOSSIBLE" << endl;
    }
    else
    {
        vector<int> cycle;
        cycle.pb(cycle_start);
        for (int v = cycle_end; v != cycle_start; v = parent[v])
            cycle.push_back(v);
        cycle.push_back(cycle_start);
        reverse(cycle.begin(), cycle.end());
        cout<<cycle.size()<<endl;
        // cout << "Cycle found: ";
        for (int v : cycle)
            cout << v << " ";
        cout << endl;
    }
}
void still_single()
{

    cin >> n >> m;
    int i, j;
    adj.resize(n + 1);
    cycle_start = -1;
    rep(i, m)
    {
        int a, b;
        cin >> a >> b;
        // a--;
        // b--;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    find_cycle();
}
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