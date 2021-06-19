#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
#define print(x) cout << 'Case #' << j << ': ' << x << endl;
#define mod9 1000000009
#define mod7 1000000007
#define INF 1e18
#define sp(y) fixed << setprecision(y)
#define vi vector<int>
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
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

vector<int> val;
bool flag = true;
void bfs(int source, int str)
{
    visited[source] = true;
    queue<int> q;
    q.push(source);
    if (val[source] == -1)
    {
        val[source] = str;
        // str--;
    }
    else
    {
        flag = false;
    }
    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        str--;
        if (str >= 0)
        {
            for (auto u : arr[p])
            {
                if (!visited[u])
                {
                    visited[u] = true;
                    val[u] = str;
                }
                else
                {
                    flag = false;
                    return;
                }
                q.push(u);
            }
        }
        else
        {
            return;
        }
    }
}
void still_single()
{
    int n, r, m;
    cin >> n >> m >> r;
    int i;
    arr.resize(n + 1);
    visited.resize(n + 1);
    val.resize(n + 1, -1);
    rep(i, m)
    {
        int a, b;
        cin >> a >> b;
        arr[a].pb(b);
        arr[b].pb(a);
    }
    rep(i, r)
    {
        int k, s;
        cin >> k >> s;
        bfs(k, s);
        if (flag == false)
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}
/*Don't just sit and hope that God will solve this
fucking do some	thing, try to observe or solve it a different way.
Use that pen and paper.
If nothing works take a deep breath and start again*/
int main()
{
    fast int t;
    cin >> t;
    while (t--)
    {
        still_single();
        arr.clear();
        visited.clear();
        val.clear();
        flag=true;
    }
    return 0;
}