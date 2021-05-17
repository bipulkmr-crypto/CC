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
// vector<int> present;
// vector<vector<int>> arr;
// vector<bool> visited;
// int m;
// void dfs(int root, int cats)
// {

//     if (cats > m)
//         return;
//     else
//     {
//         visited[root] = true;
//         for (auto i : arr[root])
//         {
//             if (!visited[i])
//             {
//                 dfs(i, cats*present[i] + present[i]);
//             }
//         }
//     }
// }
// int main()
// {
//     int n;
//     cin >> n >> m;
//     int i;
//     arr.resize(n + 1);
//     visited.resize(n + 1);
//     present.resize(n + 1);
//     rep(i, n) cin >> present[i + 1];
//     rep(i, n - 1)
//     {
//         int a, b;
//         cin >> a >> b;
//         arr[a].pb(b);
//         arr[b].pb(a);
//     }
//     dfs(1, present[1]);
//     int ans = 0;
//     for (i = 1; i <= n; i++)
//     {
//         if (arr[i].size() <= 1 && visited[i])
//             ans++;
//     }
//     cout << ans << endl;
// }
const long long A = 100000000000000LL, N = 228228;
vector<long long> a[N];
long long c[N], o, x, y, i, j, n, m;

void go(int v, int pr, int k)
{
    if (k > m)
        return;
    int ok = 1;
    for (int i = 0; i < a[v].size(); i++)
        if (a[v][i] != pr)
            ok = 0, go(a[v][i], v, k * c[a[v][i]] + c[a[v][i]]);
    o += ok;
}

int main()
{
    cin >> n >> m;
    for (i = 0; i < n; i++)
        scanf("%lld", &c[i]);
    for (i = 1; i < n; i++)
        scanf("%lld%lld", &x, &y), x--, y--, a[x].pb(y), a[y].pb(x);
    go(0, -1, c[0]);
    cout << o << "\n";
}