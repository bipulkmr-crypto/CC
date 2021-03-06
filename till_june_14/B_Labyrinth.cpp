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
int arr[2001][2001];
vector<vector<bool>> marked;
int n, m;
// void dfs(int i, int j, int x, int y)
// {
//     if (i < 0 || i >= n || j < 0 || j >= m)
//         return;
//     else if (arr[i][j] == int('*'))
//         return;
//     else
//     {
//         marked[i][j] = true;
//         if (x > 0)
//         {
//             dfs(i - 1, j, x - 1, y);
//         }
//         if (y > 0)
//             dfs(i + 1, j, x, y - 1);
//         if (!marked[i][j + 1])
//             dfs(i, j + 1, x, y);
//         if (!marked[i][j - 1])
//             dfs(i, j - 1, x, y);
//     }
// }
int main()
{

    int r, c;
    int x, y;
    cin >> n >> m >> r >> c >> x >> y;
    int i, j;
    rep(i, n)
    {
        string s;
        cin >> s;
        rep(j, m) arr[i][j] = s[j];
    }
    r--, c--;
    marked.resize(n, vector<bool>(m, false));
    queue<pair<int, int>>q; q.push({r, c});
    while (!q.empty())
    {
        auto x = q.front();

    }
    int ans = 0;
    dfs(r, c, x, y);
    rep(i, n)
    rep(j, m) if (marked[i][j])
        ans++;
    cout << ans << endl;
}