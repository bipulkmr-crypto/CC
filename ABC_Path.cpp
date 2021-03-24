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
ll arr[100][100] = {0};
ll currdep = 0;
ll h, w;
bool visited[100][100] = false;
void dfs(ll p, ll q)
{
    currdep++;
    visited[p][q] = true;
    if (isvalid(p - 1, q - 1) && !visited[p - 1][q - 1] && (arr[p - 1][q - 1] - arr[p][q]))
    {
        dfs(p - 1, q - 1);
    }
    if (isvalid(p, q - 1) && !visited[p][q - 1] && (arr[p][q - 1] - arr[p][q]))
    {
        dfs(p, q - 1);
    }
    if (isvalid(p, q + 1) && !visited[p][q + 1] && (arr[p][q + 1] - arr[p][q]))
    {
        dfs(p, q + 1);
    }
    if (isvalid(p + 1, q + 1) && !visited[p + 1][q + 1] && (arr[p + 1][q + 1] - arr[p][q]))
    {
        dfs(p + 1, q + 1);
    }
    if (isvalid(p + 1, q - 1) && !visited[p + 1][q - 1] && (arr[p + 1][q - 1] - arr[p][q]))
    {
        dfs(p + 1, q - 1);
    }
    if (isvalid(p + 1, q) && !visited[p + 1][q ] && (arr[p + 1][q ] - arr[p][q]))
    {
        dfs(p + 1, q + 1);
    }
}
bool isvaid(ll i, ll j)
{
    return (i < h && j < w);
}
int main()
{
    while (true)
    {

        arr[100][100] = {0};
        visited[100][100] = false;
        cin >> h >> w;
        if (h == 0 && w == 0)
            return 0;
        ll i, j;
        ll ans = 0;
        rep(i, h)
        {
            string s;
            cin >> s;
            rep(i, w)
            {
                arr[i][j] = s[j];
            }
        }
        for (i = 0; i < h; i++)
        {
            for (j = 0; j < w; j++)
            {
                if (!visited[i][j])
                {
                    if (isvalid(i, j))
                    {
                        dfs(i, j);
                        ans = max(ans, currdep);
                    }
                }
            }
        }
    }
}
