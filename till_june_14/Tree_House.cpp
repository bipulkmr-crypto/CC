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
vector<vector<ll>> arr;
vector<ll> cnt;
bool comp(ll a, ll b)
{
    if (arr[a].size() == arr[b].size())
    {
        return (cnt[a] > cnt[b]);
    }
    else
    {
        return (arr[a].size() > arr[b].size());
    }
}
void dfs(ll root, ll parent)
{
    cnt[root] = 1;
    for (ll u : arr[root])
    {
        if (u == parent)
        {
            continue;
        }
        dfs(u, root);
        cnt[root] += cnt[u];
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        arr.resize(n + 1);
        ll i;
        rep(i, n - 1)
        {
            ll a, b;
            cin >> a >> b;
            arr[b].pb(a);
            arr[a].pb(b);
        }
        queue<ll> q;
        cnt.resize(n + 1);
        dfs(1, 0);
        q.push(1);
        ll sum = x;
        // ll sum = 0;
        for (i = 1; i <= n; i++)
        {
            sort(all(arr[i]), comp);
        }
        vector<ll> p(n + 1);
        p[1] = x;
        vector<bool> visited(n + 1, false);
        visited[1] = true;
        while (!q.empty())
        {
            ll v = q.front();
            q.pop();
            ll k = 1;
            for (ll u : arr[v])
            {
                ll b = p[v];
                if (!visited[u])
                {
                    sum += (k * b);
                    p[u] = (k * b) % mod;
                    k++;
                    q.push(u);
                    visited[u] = true;
                }
            }
        }
        sum = 0;
        for (i = 1; i <= n; i++)
        {
            sum += p[i];
            sum %= mod;
        }
        arr.clear();
        cnt.clear();
        cout << sum << endl;
    }
}