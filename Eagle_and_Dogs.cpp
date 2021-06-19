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
vector<int> dogs;
vector<bool> visited;
vector<int> ans;
int dfs(int i)
{
    int val = dogs[i];
    visited[i] = true;
    for (int x : arr[i])
    {
        if (!visited[x])
        {
            val += dfs(x);
        }
    }
    ans[i] = max(ans[i], val);
    return val;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        arr.resize(n + 1);
        dogs.resize(n + 1);
        visited.resize(n + 1, false);
        ans.resize(n + 1, 0);
        int i, j;
        rep(i, n - 1)
        {
            int a, b;
            cin >> a >> b;
            arr[a].pb(b);
            arr[b].pb(a);
            cin >> dogs[i + 1];
        }
        // for (i = 1; i <= n; i++)
        // {
        //     ans[i] = dfs(i);
        //     // cout << ans << " ";
        // }
        ans[1] = max(dfs(1), ans[1]);
        for (i = 1; i <= n; i++)
        {
            visited[i] = false;
        }
        ans[n] = max(ans[n], dfs(n));
        // for (i = n; i >= 1; i--)
        // {
        //     ans[i] = max(ans[i], dfs(i));
        // }
        fu(i, 1, n)
            cout<< ans[i] << " ";
    }
}