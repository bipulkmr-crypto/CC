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
ll ans = 0;
// vector<ll> ans;
bool isnotvalid(ll i, ll j)
{
    return (i < 0 || i >= n || j < 0 || j >= m);
}

void dfs(ll i, ll j)
{
    if (isnotvalid(i, j) || visited[i][j] || arr[i][j] == '#')
        return;
    // visited[i][j] = true;
    // if (arr[i][j] == '#')
    // {
    //     return ;
    // }
    // else
    // {
    //     ans++;
    //     // ll ans = 0;

    // }
    ans++;
    visited[i][j] = true;
    dfs(i + 1, j);
    dfs(i - 1, j);
    dfs(i, j + 1);
    dfs(i, j - 1);
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        ll i, j;
        arr.resize(n);
        visited.resize(n);
        rep(i, n)
        {
            arr[i].resize(m);
            visited[i].resize(m);
        }
        rep(i, n) rep(j, m) visited[i][j] = false;
        // memset(visited,false,sizeof(visited));
        rep(i, n)
        {
            rep(j, m) cin >> arr[i][j];
        }
        vector<ll> res;
        for (i = 0; i < n; i++)
        {
            rep(j, m)
            {
                if (!visited[i][j])
                {
                    ans = 0;
                    dfs(i, j);
                    if (ans > 0)
                        res.pb(ans);
                }
            }
        }
        cout << res.size() << endl;
        for (ll x : res)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}