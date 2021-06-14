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
ll a = 0;
void dfs(int x)
{
    visited[x] = true;
    a++;
    for (int i = 0; i < arr[x].size(); i++)
    {
        if (!visited[arr[x][i]])
        {
            dfs(arr[x][i]);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        arr.resize(n + 1);
        int i;
        visited.resize(n + 1);
        rep(i, m)
        {
            int a, b;
            cin >> a >> b;
            arr[a].pb(b);
            arr[b].pb(a);
        }
        int ans = 0;
        ll pro = 1;
        vector<int> size;
        for (i = 1; i <= n; i++)
        {
            if (!visited[i])
            {
                ans++;
                a = 0;
                dfs(i);
                pro *= a;
                pro %= mod;
            }
        }
        // ll pro = 1;
        // for (i=0;i<size.size();i++)
        // {
        //     pro *= size[i];
        //     pro %= mod;
        // }
        cout << ans << " " << pro << endl;
        arr.clear();
        visited.clear();
        size.clear();
    }
}