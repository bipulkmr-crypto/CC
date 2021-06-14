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
vector<vector<int>> arr;
vector<bool> visited;
vector<pair<int, int>> w;
vector<ll> dp;
ll solve(ll x)
{
    if (dp[x] != -1)
        return dp[x];
    visited[x] = true;
    ll ans = 0;
    for (auto v : arr[x])
    {
        if (!visited[v])
            ll ans + = max({abs(w[x].ff - w[v].ff) + solve(v), abs(w[x].ff - w[v].ss) + solve(v), abs(w[x].ss - w[v].ff) + solve(v), abs(w[x].ss - w[v].ss) + solve(v)});
        dp[x] = ans;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i;
        int n;
        cin >> n;
        arr.resize(n + 1);
        w.resize(n + 1);
        visited.resize(n + 1);
        dp.resize(n + 1, -1);
        int j;
        rep(i, n)
        {
            int a, b;
            cin >> a >> b;
            w[i] = {a, b};
        }
        rep(i, n - 1)
        {
            int a, b;
            cin >> a >> b;
            w[a].push_back(b);
            w[b].pb(a);
        }
        ll sum = solve(1);
    }
}