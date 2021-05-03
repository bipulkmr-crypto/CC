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
vector<vector<ll>> arr;
vector<bool> visited;
bool flag = false;
void dfs(ll src)
{
    // if (src == 1)
    // {
    //     flag = true;
    //     return;
    // }
    visited[src] = true;
    for (ll i = 0; i < arr[src].size(); i++)
    {
        if (!visited[arr[src][i]])
            dfs(arr[src][i]);
    }
}
int main()
{
    ll n, m;
    cin >> n >> m;
    if ((m + 1) != n)
    {
        cout << "NO\n";
        return 0;
    }
    arr.reserve(n + 1);
    visited.resize(n + 1, false);
    ll i;
    rep(i, m)
    {
        ll a, b;
        cin >> a >> b;
        if(a==b)
        {
            cout<<"NO\n";
            return 0;
        }
        arr[a].pb(b);
    }
    ll ans=0;
    for (i = 1; i <= n; i++)
    {
        if(!visited[i])
        {
            ans++;
            dfs(i);
        }
        
    }
    if (ans==1)
        cout << "YES\n";
    else
    {
        cout << "NO\n";
    }
}
