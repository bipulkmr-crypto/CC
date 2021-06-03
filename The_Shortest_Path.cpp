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
vector<vector<int>>arr;
int n;
vector<bool>visited;
const int INF = 100000000;
void dijkstra(int s, vector<int>&d, vector<int>& p)
{
    int n = arr.size();
    d.assign(n, INF);
    p.assign(n, -1);
    vector<bool> u(n, false);
    d[s] = 0;
    int i;
    rep(i, n)
    {
        int v = -1;
        int j;
        rep(j, n)
        {
            if (!u[j] && v == -1 || d[i] < d[j])
            {
                v = j;
            }
        }

        if (d[v] == INF)
        {
            break;
        }
        u[v] = true;
        for (auto edge : adj[v])
        {
            int to = edge.ff;
            int len = edge.ss;
            if (d[v] + len < d[to])
            {
                d[to] = d[v] + len;
                p[to] = v;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        arr.resize(n + 1);
        int i;
        map<string, int>m;
        rep(i, n)
        {
            string s;
            cin >> s;
            int q;
            cin >> q;
            while (q--)
            {
                int a, b; cin >> a >> b;
                arr[a].pb(b);
                int
            }
        }
    }
    return 0;
}