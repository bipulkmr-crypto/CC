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
// ll n, q;
// vector<vector<ll>> arr;
// vector<vector<ll>> res;
// vector<bool> visited;
// vector<ll> dfs(ll x)
// {
//     visited[x] = true;
//     vector<ll> val;
//     for (ll i : arr[x])
//     {
//         if (!visited[i])
//         {
//             val.pb(i);
//             vector<ll> p = dfs(i);
//             for (ll y : p)
//             {
//                 val.pb(y);
//             }
//         }
//     }
//     return val;
// }
// int main()
// {
//     ll i;
//     cin >> n >> q;
//     arr.resize(n + 1);
//     visited.resize(n + 1, false);
//     res.resize(n + 1);
//     rep(i, n - 1)
//     {
//         ll a;
//         cin >> a;
//         arr[i + 2].pb(a);
//         arr[a].pb(i + 2);
//     }
//     res.resize(n + 1);
//     // for (i = 1; i <= n; i++)
//     // {
//     //     res=dfs(i);
//     // }
//     for(i=1;i<=n;i++)
//     {
//         res[i]=dfs(i);
//     }
//     // for (i = 1; i <= n; i++)
//     // {
//     //     vector<ll> temp;
//     //     for (ll j : res[i])
//     //     {
//     //         for (ll t = 0; t < res[j].size(); t++)
//     //         {
//     //             temp.pb(res[j][t]);
//     //             // res[i].pb(res[j][t]);
//     //         }
//     //     }
//     //     for (ll t : temp)
//     //     {
//     //         res[i].pb(t);
//     //     }
//     // }
//     while (q--)
//     {
//         ll u, k;
//         cin >> u >> k;
//         if (res[u].size() > k)
//         {
//             cout << (-1) << endl;
//         }
//         else
//             cout << res[u][k - 1] << endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long int
#define f(i, x, n) for (long long int i = x; i < n; i++)
#define fr(i, x, n) for (long long int i = n - 1; i >= x; i--)
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define endl '\n'

vector<vector<int>> adj(200005);
vector<int> parent(200005), sizee(200005), ans;

void dfs(int root)
{

    sizee[root] = 1;

    f(i, 0, adj[root].size())
    {
        if (adj[root][i] != parent[root])
        {
            ans.pb(adj[root][i]);
            dfs(adj[root][i]);
            sizee[root] += sizee[adj[root][i]];
        }
    }

    return;
}

int main()
{
    fast_io

        int n,
        p, q;
    cin >> n >> q;

    f(i, 0, n - 1)
    {
        cin >> p;
        adj[i + 2].pb(p);
        adj[p].pb(i + 2);
        parent[i + 2] = p;
    }

    ans.pb(1);
    dfs(1);

    map<int, int> index;

    f(i, 0, ans.size())
    {
        index[ans[i]] = i;
    }

    while (q--)
    {

        int u, k;
        cin >> u >> k;

        if (k > sizee[u])
            cout << -1 << endl;
        else
        {
            cout << ans[index[u] + k - 1] << endl;
        }
    }

    return 0;
}