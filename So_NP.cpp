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
ll n, m, k;
ll cnt = 0;
vector<vector<ll>> arr;
vector<bool> visited;
void dfs(ll i)
{
    visited[i] = true;
    for (ll x : arr[i])
    {
        if (!visited[x])
        {
            cnt++;
            dfs(x);
        }
    }
}
int main()
{
    cin >> n >> m >> k;
    ll i;
    arr.resize(n + 1);
    visited.resize(n + 1);
    rep(i, m)
    {
        ll a, b;
        cin >> a >> b;
        arr[a].pb(b);
        arr[b].pb(a);
    }
    vector<ll> siz;
    for (i = 1; i <= n; i++)
    {
        cnt = 1;
        if (!visited[i])
        {
            dfs(i);
            siz.pb(cnt);
        }
    }
    if (siz.size() > k)
        cout << -1 << endl;
    else
    {
        cout<<m-n+k<<endl;
    }
}