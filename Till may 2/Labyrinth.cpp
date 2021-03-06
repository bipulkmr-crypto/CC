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
ll n, m;
vector<vector<char>> arr;
vector<vector<bool>> visited;
vector<char> res;
bool dfs(ll i, ll j)
{
    if (i < 0 || j < 0 || i >= n || j >= m)
        return false;
    if (visited[i][j])
        return false;
    if (arr[i][j] == '#')
        return false;
    if (arr[i][j] == 'A')
    {
        if (dfs(i + 1, j))
        {
            res.pb('R');
            return true;
        }

        if (dfs(i, j - 1))
        {
            res.pb('D');
            return true;
        }

        if (dfs(i, j + 1))
        {
            res.pb('U');
            return true;
        }

        if (dfs(i - 1, j))
        {
            res.pb('L');
            return true;
        }

        // dfs(i-1,j);
        // dfs(i,j+1);
        // dfs(i,j-1);
    }
    if (arr[i][j] == 'B')
        return true;
    else return false;
}
int main()
{
    cin >> n >> m;
    ll i, j;
    arr.resize(n, vector<char>(m));
    visited.resize(n, vector<bool>(m));
    rep(i, n) rep(j, m) cin >> arr[i][j];
    rep(i, n)
    {
        rep(j, m)
        {
            if (!visited[i][j] && arr[i][i] != '#')
                dfs(i, j);
        }
    }
    for (char c : res)
    {
        cout << c << " ";
    }
}