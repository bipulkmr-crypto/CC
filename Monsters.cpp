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
char arr[1001][1001];
pii parent[1001][1001];
int val[1001][1001];
int n, m;
string s;
struct co
{
    int x,y;
    int val;
};
void print_path(pii node)
{
    pair<int, int> p = parent[node.first][node.second];
    if (p.first <= -1)
    {
        return;
    }
    print_path(p);
    if (node.first > p.first)
        s += 'D';
    else if (node.first < p.first)
        s += 'U';
    else if (node.second < p.second)
        s += 'L';
    else if (node.second > p.second)
        s += 'R';
}
void still_single()
{
    cin >> n >> m;
    int i, j;
    int sx, sy;
    int visited[1001][1001];
    memset(visited,0,sizeof(visited));
    vector<pii> mons;
    rep(i, n)
    {
        rep(j, m)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'M')
            {
                mons.pb({i, j});
            }
            if (arr[i][j] == 'A')
            {
                sx = i;
                sy = j;
                parent[i][j] = {-2, -2};
            }
            if(arr[i][j]=='#')
            {
                visited[i][j]=1;
            }
            parent[i][j] = {-1, -1};
            val[i][j] = INT_MAX;
        }
    }
    // memset(val,-1,sizeof(val));
    auto isvalid = [&](int x, int y)
    {
        return (x >= 0 && y >= 0 && x < n && y < m);
    };
    // int steps[4] = {0};
    pii dir[] = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
    for (auto p : mons)
    {
        //     int x=p.ff;
        //     int y=p.ss;
        queue<pii> q;
        q.push(p);
        int step=0;
        while (!q.empty())
        {
            step++;
            auto x = q.front();
            q.pop();
            rep(j, 4)
            {
                int x1 = x.ff + dir[j].ff;
                int y1 = x.ss + dir[j].ss;
                if (isvalid(x1, y1) && arr[x1][y1] == '.'&&!visited[x1][y1])
                {
                    // arr[x1][y1]='#';
                    visited[x1][y1]=1;
                    // val[x1][y1] = min(step, val[x1][y1]);
                    val[x1][y1] = min(val[x.ff][x.ss]+1, val[x1][y1]);
                    q.push({x1, y1});
                }
            }
        }
    }
    // rep(i,n)
    // {
    //     rep(j,m)
    //     {
    //         if(arr[i][j]=='.'&&val[i][j]==INT_MAX)
    //         {
    //             val[i][j]=-1;
    //         }
    //     }
    // // }
    rep(i,n)
    {
        rep(j,m)
        {
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }
    rep(i,n)
    {
        rep(j,m)
        {
            if(val[i][j]!=INT_MAX)
            cout<<val[i][j]<<' ';
            else
            cout<<'0'<<' ';
        }
        cout<<endl;
    }
    queue<pii> q;
    q.push({sx, sy});
    bool flag = false;
    val[sx][sy] = 0;
    int step=0;
    while (!q.empty())
    {
        auto x = q.front();
        q.pop();
        step++;
        rep(j, 4)
        {
            int x1 = x.ff + dir[j].ff;
            int y1 = x.ss + dir[j].ss;
            if (isvalid(x1, y1) && arr[x1][y1] == '.' &&val[x1][y1]>step)
            {
                arr[x1][y1] = '#';
                parent[x1][y1] = x;
                val[x1][y1]=step;
                if (x1 == 0 || y1 == 0 || x1 == n - 1 || y1 == m - 1)
                {
                    print_path({x1, y1});
                    flag = 1;
                    // return;
                }
                q.push({x1, y1});
            }
        }
        if (flag)
        {
            break;
        }
    }
    if (flag)
    {
        cout << "YES\n";
        cout << s.length() << endl;
        // reverse(all(s));
        cout << s << endl;
    }
    else
    {
        cout << "NO" << endl;
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