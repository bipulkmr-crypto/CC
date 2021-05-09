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
int n;
vector<bool> visited;
vector<int> sexuality;
bool dfs(int x, int sex)
{
    visited[x] = true;
    sexuality[x] = sex;
    for (int i : arr[x])
    {
        if (!visited[i])
        {
            bool res = dfs(i, 1 ^ sex);
            if (res == false)
            {
                return false;
            }
        }
        else
        {
            if (sexuality[i] == sexuality[x])
                return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    int k = 1;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        arr.resize(n + 1);
        sexuality.resize(n + 1, 0);

        visited.resize(n + 1,false);
        int i, j;
        rep(i, m)
        {
            int a, b;
            cin >> a >> b;
            arr[a].pb(b);
            arr[b].pb(a);
        }
        bool ans = true;
        for (i = 1; i <= n; i++)
        {
            if (!visited[i])
            {
                ans = dfs(i, 0);
                if (ans == false)
                    break;
            }
        }
        cout << "Scenario #" << k << ":" << endl;
        // if (!dfs(1))
        // {
        //     ans = false;
        // }
        if (ans)
            cout << "No suspicious bugs found!" << endl;
        else
        {
            cout << "Suspicious bugs found!" << endl;
        }
        k++;
        arr.clear();
        visited.clear();
        sexuality.clear();
    }
}