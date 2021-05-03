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
vector<vector<ll>> v(100001);
vector<bool> visited(100001);
ll cou = 0;
// void dfs(ll x)
// {
//     // cou += 1;
//     visited[x] = true;
//     for (ll u : v[x])
//     {
//         if (!visited[x])
//         {
//             dfs(u);
//         }
//     }
// }
void dfs(ll src)
{
    visited[src] = true;
    for (ll i = 0; i < v[src].size(); i++)
    {
        if (!visited[v[src][i]])
        {
            dfs(v[src][i]);
        }
    }
}
int main()
{
    fast
        ll t;
    cin >> t;
    while (t--)
    {
        cou = 0;
        ll n;
        cin >> n;
        ll e;
        cin >> e;
        if (e == 0)
            cout << n << endl;
        else
        {
            // v.resize(e + 1);
            // visited.resize(e, false);
            ll i;
            rep(i,n)
            {
                v[i].clear();
                visited[i]=false;
            }
            rep(i, e)
            {
                ll a, b;
                cin >> a >> b;
                v[a].pb(b);
                v[b].pb(a);
            }
            ll ans = 0;
            for (i = 0; i < n; i++)
            {
                if (!visited[i])
                {
                    ans++;
                    dfs(i);
                }
            }
            // dfs(v[0][0]);
            // // dfs(v[0][1]);

            // rep(i, n)
            // {
            //     if (!visited[i])
            //         ans++;
            // }
            cout << ans << endl;
            // v.clear();
        }
    }
}
//taking help from internet dont know what mistake is there in my code

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// vector<vector<long int>> v(1000001);
// bool visited[1000001];
// void dfs(int src)
// {
//     visited[src] = true;
//     for (int i = 0; i < v[src].size(); i++)
//     {
//         if (!visited[v[src][i]])
//         {
//             dfs(v[src][i]);
//         }
//     }
// }
// int main()
// {
//     long int t, n, i, j, k, a, b, e;
//     cin >> t;
//     for (long int ii = 0; ii < t; ii++)
//     {
//         cin >> n >> e;
//         for (i = 0; i < n; i++)
//         {
//             v[i].clear();
//             visited[i] = false;
//         }
//         for (i = 0; i < e; i++)
//         {
//             cin >> a >> b;
//             v[b].push_back(a);
//             v[a].push_back(b);
//         }
//         long int count = 0;
//         for (i = 0; i < n; i++)
//         {
//             if (!visited[i])
//             {
//                 count++;
//                 dfs(i);
//             }
//         }
//         cout << count << endl;
//     }
//     return 0;
// }