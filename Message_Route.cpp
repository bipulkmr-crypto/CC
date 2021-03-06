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
vector<vector<int>> forest;
vector<vector<int>> arr;
vector<bool> visited;
vector<int> path;
vector<int> dist;
bool bfs(int n)
{
    queue<int> q;
    q.push(1);
    dist[1] = 0;
    path[1] = 0;
    while (!q.empty())
    {
        int v = q.front();
        visited[v] = true;
        q.pop();
        for (auto u : arr[v])
        {
            if (!visited[u])
            {
                visited[u] = true;
                if (dist[v] + 1 < dist[u])
                {
                    dist[u] = dist[v] + 1;
                    path[u] = v;
                }
                if (u == n)
                {
                    return true;
                }
                q.push(u);
            }
        }
    }
    return false;
}

void still_single()
{
    int n, q;
    cin >> n >> q;
    forest.resize(n + 1);
    arr.resize(n + 1);
    visited.resize(n + 1);
    int j;
    dist.resize(n + 1, 1e8);
    path.resize(n + 1, -1);

    int i;
    rep(i, q)
    {
        int a, b;
        cin >> a >> b;
        arr[a].pb(b);
        arr[b].pb(a);
    }

    if (bfs(n))
    {
        cout << dist[n] + 1 << endl;
        i = n;
        if(n==2)
        {
            // cout<<2<<endl;
            cout<<1<<' '<<2<<endl;
            return;
        }
        // string s="";
        vll s;
        mll m;
        while (path[i] != 1)
        {
            // ans.pb(i);
            if (m[i] == 0)
            {
                s.pb(i);
                m[i]++;
            }
            // s+=to_string(i)+" ";

            i = path[i];
            if (m[i] == 0)
            {
                s.pb(i);
                m[i]++;
            }
            // ans.pb(i);

            // s+=to_string(i)+" ";
        }
        // s+="1";
        // ans.pb(1);
        s.pb(1);
        // reverse(all(s));
        reverse(all(s));
        // cout<<s<<endl;
        for (auto b : s)
            cout << b << ' ';
    }
    else
    {

        cout << "IMPOSSIBLE" << endl;
    }
}
/*Don't just sit and hope that God will solve this
fucking do some	thing, try to observe or solve it a different way.
Use that pen and paper.
If nothing works take a deep breath and start again*/
int main()
{
    fast int t = 1;
    // cin >> t;
    while (t--)
    {
        still_single();
    }
    return 0;
}