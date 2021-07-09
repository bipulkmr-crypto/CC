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
vector<vector<int>> arr;
vector<bool> visited;
vector<int> x;
vector<int> val;
int ans = INT_MIN;
void dfs(int v)
{
    visited[v] = true;
    int sum = val[v];
    for (auto u : arr[v])
    {
        if (!visited[u])
        {
            dfs(u);
            sum ^= x[u];
        }
    }
    x[v] = sum;
}
void solve(int parent)
{
    visited[parent] = true;
    for (auto u : arr[parent])
    {
        if (!visited[u])
        {
            ans = max(ans, x[u] & (x[1] ^ x[u]));
            solve(u);
        }
    }
}
void still_single()
{
    int n;
    cin >> n;
    arr.resize(n + 1);
    visited.resize(n + 1);
    val.resize(n + 1);
    int i;
    x.resize(n + 1);
    fu(i, 1, n)
    {
        cin >> val[i];
    }
    vector<pii> e;
    rep(i, n - 1)
    {
        int a, b;
        cin >> a >> b;
        arr[a].pb(b);
        arr[b].pb(a);
        e.pb({a, b});
    }
    dfs(1);
    visited.clear();
    visited.resize(n + 1, false);
    visited[1] = true;
    // solve(1);
    solve(1);
    cout << ans << endl;
    // int z = INT_MIN;
    // for (auto it : e)
    // {
    //     int x1 = it.ff;
    //     int x2 = it.ss;
    //     if (arr[x1].size() < arr[x2].size())
    //         swap(x1, x2);
    //     z = max(z, x[x2] & (x[x1] ^ x[x2]));
    //     // z = max(z, x[x1] & (x[x2] ^ x[x1]));
    // }
    // // sort(all(e), comp);
    // cout << z << endl;
    arr.clear();
    visited.clear();
    val.clear();
    x.clear();
}
/*Don't just sit and hope that God will solve this
fucking do some	thing, try to observe or solve it a different way.
Use that pen and paper.
If nothing works take a deep breath and start again*/
int main()
{
    fast int t = 1;
    cin >> t;
    while (t--)
    {
        ans = 0;
        still_single();
    }
    return 0;
}