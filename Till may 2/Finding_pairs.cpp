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
// vector<vector<ll>> arr;
// vector<ll> dist;
// vector<bool> visited;
// void dfs(ll x, ll ancestor)
// {
//     // visited[x] = true;
//     ll i;
//     for (i = 0; i < arr[x].size(); i++)
//     {
//         // if (!visited[arr[x][i]])
//         {
//             if (arr[x][i] == ancestor)
//                 continue;
//             // dist[arr[x][i]] = dist[x] + dfs(arr[x][i]);
//             dist[arr[x][i]] = dist[ancestor] + 1;
//             dfs(arr[x][i], x);
//         }
//     }
//     return;
// }
// int main()
// {
//     ll n;
//     cin >> n;

//     arr.resize(n + 1);
//     ll i;
//     visited.resize(n + 1);
//     rep(i, n-1)
//     {
//         ll a, b;
//         cin >> a >> b;
//         arr[a].pb(b);
//         arr[b].pb(a);
//     }
//     dist.resize(n + 1);
//     dist[1] = 1;
//     dfs(1, 0);
//     ll sum = 0;

//     for (i = 1; i <= n; i++)
//         sum += dist[i];
//     cout << sum << endl;
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
#define gi(n) scanf(% d, &n)
vector<ll> dist;
vector<vector<ll>> arr;
ll dfs(ll x, ll parent)
{
    dist[x] = dist[parent] + 1;
    for (int i = 0; i < arr[x].size(); i++)
    {
        if (arr[x][i] != parent)
        {
            dfs(arr[x][i],x);
        }
    }
    return 0;
}
int main()
{
    ll n;
    cin >> n;

    ll i;
    // ll distance[n+1];
    arr.resize(n + 1);
    dist.resize(n + 1);
    dist[1] = 1;
    rep(i, n - 1)
    {
        ll a, b;
        cin >> a >> b;
        arr[a].pb(b);
        arr[b].pb(a);
    }
    dfs(1, 0);
    ll ans =0;
    rep(i, n)
    {
        ans+=dist[i+1];
    }
    cout << ans << endl;
}