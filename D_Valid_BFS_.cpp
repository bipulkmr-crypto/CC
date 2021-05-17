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
 vector<int> order;
vector<vector<int>> arr;
vector<bool> visited;
bool comp(int a, int b)
{
    return (order[a] < order[b]);
}
int main()
{
    int n;
    cin >> n;
    arr.resize(n + 1);
    visited.resize(n + 1);
    int i;
    order.resize(n + 1);
    rep(i, n - 1)
    {
        int a, b;
        cin >> a >> b;
        arr[a].pb(b);
        arr[b].pb(a);
        // order[arr[i]] = i;
    }
    vector<int> c(n);
    rep(i, n)
    {
        cin >> c[i];
        order[c[i]] = i+1;
    }
    queue<int> q;
    q.push(1);
    visited[1] = true;
    vector<int> ans;
    ans.pb(1);
    for (i = 1; i <= n; i++)
    {
        sort(arr[i].begin(), arr[i].end(), comp);
    }
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int u : arr[v])
        {
            if (!visited[u])
            {
                visited[u] = true;
                ans.pb(u);
                q.push(u);
            }
        }
    }
    bool flag = true;
    rep(i, n)
    {
        if (ans[i] != c[i])
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "Yes\n";
    else
    {
        cout << "No\n";
    }
}
//note here dfs will not work since the permutations will  be there so lets apply dfs
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define fast                          \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define pii pair<int, int>
// #define tiii tuple<int, int, int>
// #define pll pair<long long, long long>
// #define sii set<int>
// #define sll set<long long>
// #define vii vector<int>
// #define vll vector<long long>
// #define vll vector<long long>
// #define mii map<int, int>
// #define mll map<long long, long long>
// #define lob lower_bound
// #define upb upper_bound
// #define ret return
// #define present(s, x) (s.find(x) != s.end())
// #define cpresent(s, x) (find(all(s), x) != s.end())
// #define ford(container, it) for (auto it = container.begin(); it != container.end(); it++)
// #define fors(container, it, a, b) for (auto it = a; it != b; it++)
// #define ff first
// #define all(v) v.begin(), v.end()
// #define ss second
// #define rep(i, n) for (i = 0; i < n; i++)
// #define fu(i, a, n) for (i = a; i <= n; i++)
// #define fd(i, n, a) for (i = n; i >= a; i--)
// #define gi(n) scanf(% d, &n)
// vector<vector<int>> arr;
// vector<bool> visited;
// vector<int> level;
// void dfs(int root, int l)
// {
//     visited[root] = true;
//     level[root] = l;
//     for (auto i : arr[root])
//     {
//         if (!visited[i])
//         {
//             dfs(i, l + 1);
//         }
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     arr.resize(n + 1);
//     visited.resize(n + 1);
//     level.resize(n + 1);
//     int i;
//     rep(i, n - 1)
//     {
//         int a, b;
//         cin >> a >> b;
//         arr[a].pb(b);
//         arr[b].pb(a);
//     }
//     dfs(1, 1);
//     vector<int> c(n + 1);
//     rep(i, n) cin >> c[i + 1];
//     bool flag = false;
//     fu(i, 2, n)
//     {
//         int val(level[c[i]] - level[c[i - 1]]);
//         if (val != 1)
//         {
//             if (val != 0)
//             {
//                 flag = true;
//                 break;
//             }
//         }
//     }
//     queue<int> q;
//     q.push(1);
//     visited.clear();
//     visited.resize(n + 1, false);
//     visited[1] = true;
//     vector<int> ans;
//     ans.pb(1);
//     while (!q.empty())
//     {
//         int v = q.front();
//         q.pop();
//         for (int u : arr[v])
//         {
//             if (!visited[u])
//             {
//                 visited[u] = true;
//                 cout << u << ' ';
//                 q.push(u);
//             }
//         }
//     }
//     if (flag)
//     {
//         cout << "No\n";
//     }
//     else
//         cout << "Yes\n";
// }
