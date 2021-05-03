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
ll cnt = 0;
vector<ll> level;
vector<bool> visited;
vector<vector<ll>> arr;

ll dfs(ll x)
{
    visited[x] = true;
    ll i;
    ll r = 1;
    for (ll i = 0; i < arr[x].size(); i++)
    {
        if (!visited[arr[x][i]])
        {
            r+=dfs(arr[x][i]);
            // cnt+= 1;
            
        }
    }
    // level[arr[y][x]]+=1;
    return r;
}
int main()
{
    ll n, m;
    cin >> n >> m;

    ll i;
    arr.resize(n + 1);
    level.resize(n + 1, 1);
    visited.resize(n + 1, false);
    for (i = 0; i < m; i++)
    {
        ll a, b;
        cin >> a >> b;
        arr[a].pb(b);
        arr[b].pb(a);
    }
    ll mx = 0;
    for (i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            cnt += 1;
            ll val = dfs(i);
            mx = max(val, mx);
        }
    }

    cout << cnt << " ";
    cout << mx << endl;
}