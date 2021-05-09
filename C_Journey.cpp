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
vector<double> prob;
vector<int> dist;
// double dfs(int node, double demoninator, int distance)
// {
//     visited[node] = true;
//     int i;
//     double val = 0.0;
//     int size = arr[node].size();

//     if (size == 0)
//     {

//         double ans = double(1 / demoninator) * (distance);
//         return ans;
//     }
//     else
//     {
//         demoninator *= size;
//         for (i = 0; i < size; i++)
//         {

//             if (!visited[arr[node][i]])
//                 val += dfs(arr[node][i], demoninator, distance + 1);
//         }
//         return val;
//     }
// }
void dfs(int root)
{
    visited[root] = true;
    for (int i = 0; i < arr[root].size(); i++)
    {
        if(!visited[arr[root][i]])
        {
            prob[arr[root][i]] = prob[root] / (double(arr[root].size() - (root != 1)));
            dist[arr[root][i]] = dist[root] + 1;
            dfs(arr[root][i]);
        }
    }
}
int main()
{
    int i;
    cin >> n;
    arr.resize(n + 1);
    visited.resize(n + 1, false);
    prob.resize(n + 1, 1);
    dist.resize(n + 1);
    rep(i, n - 1)
    {
        int a, b;
        cin >> a >> b;
        arr[a].pb(b);
        arr[b].pb(a);
    }
    vector<int> ends;
    for (i = 1; i <= n; i++)
    {
        if (arr[i].size() <= 1)
        {
            ends.pb(i);
        }
    }
    dfs(1);
    double ans = 0;
    for (i = 0; i < ends.size(); i++)
    {
        ans += prob[ends[i]] * (double)dist[ends[i]];
    }
    cout << setprecision(15) << fixed << ans << endl;
}